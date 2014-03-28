#include "mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
  QMainWindow(parent)
{
  setupUi(this);

  modelClient = 0;
  modelVisit = 0;
  modelDoctor = 0;
  modelReason = 0;
  modelBrend = 0;
  modelCare_agent = 0;
  modelDiscount = 0;
  modelGoods = 0;

  visitQueryModel = new QSqlQueryModel();

  QString pathToDB = "";
  QFile file("./params.conf");
  if(!file.open(QIODevice::ReadOnly | QIODevice::Text)){
	this->close();
	pathToDB = setParamsFirstTime();
  }
  else{
	QTextStream in(&file);
	if(!in.atEnd()){
	  pathToDB = in.readLine();
	}
	file.close();
  }
  if(pathToDB.isEmpty()){
	qDebug() << "Error open file";
	exit(-1);
  }
  db = QSqlDatabase::addDatabase("QSQLITE");
  db.setDatabaseName(pathToDB);
  if(!db.open()){
	qDebug() << "Error open db";
	exit(-1);
  }

  //странная проверка на открытие базы
  //т.к. открывается любой файл - пытаемся выполнить запрос
  QSqlQuery query;
  query.exec("select * from client limit 1");
  if(query.lastError().type() == 2){
	qDebug() << "Error open db";
	exit(-1);
  }

  OpenTable(modelDiscount, this->discount_tableView, "\"discount\"");
  modelDiscount->setHeaderData(0, Qt::Horizontal, tr("id"));
  modelDiscount->setHeaderData(1, Qt::Horizontal, tr("Номер карты"));
  modelDiscount->setHeaderData(2, Qt::Horizontal, tr("Скидка"));
  this->discount_tableView->resizeColumnsToContents();

  OpenTable(modelDoctor, this->doctors_tableView, "\"doctor\"");
  modelDoctor->setHeaderData(1, Qt::Horizontal, tr("Врач"));

  OpenTable(modelReason, this->reason_tableView, "\"reason\"");
  modelReason->setHeaderData(1, Qt::Horizontal, tr("Причина обращения"));

  OpenTable(modelBrend, this->brend_tableView, "\"brend\"");
  modelBrend->setHeaderData(1, Qt::Horizontal, tr("Бренд"));

  OpenTable(modelGoods, this->goods_tableView, "\"goods\"");
  modelGoods->setHeaderData(1, Qt::Horizontal, tr("Наименование товара"));

  OpenTable(modelCare_agent, this->agent_care_tableView, "\"care_agent\"");
  modelCare_agent->setHeaderData(1, Qt::Horizontal, tr("Средства ухода"));

  Update();
}

//Меню файл
void MainWindow::on_action_triggered()
{
	dbParameters *dial = new dbParameters(this);
	dial->setModal(true);
	dial->show();
}

QString MainWindow::setParamsFirstTime(){
  QFile file("./params.conf");
  if(!file.open(QIODevice::WriteOnly | QIODevice::Text)){
	return "";
  }
  QString path = QDir::currentPath() + "/luks_db.sqlite";
  QTextStream out(&file);
  out << path;
  file.close();
  return path;
}

//Добавление нового клиента
void MainWindow::on_add_client_pushButton_clicked()
{
    client_info *client = new client_info(this);
    client->setModal(true);
    client->show();
    connect(client, &client_info::ownAccepted, this, &MainWindow::Update);
}

//Добавление визита
void MainWindow::on_add_visit_pushButton_clicked()
{  
    QModelIndexList list  = this->client_tableView->selectionModel()->selectedIndexes();
    if(!list.isEmpty())
    {
        QModelIndex idx = list.first();
        QSqlRecord rec = modelClient->record(idx.row());
        int id_client =rec.value(0).toInt();
        visit_info *visit = new visit_info(this, id_client, -1, &db);
        connect(visit, &visit_info::accepted, this, &MainWindow::updateVisitsTable);
        visit->show();
    }
}

//Мастер-детайл Клиент <-> Дата визита
void MainWindow::on_client_tableView_clicked(const QModelIndex &index)
{
    QSqlRecord rec;
    rec = modelClient->record(index.row());
    visitQueryModel->setQuery("SELECT id, visit_date, client_id  FROM visit_date WHERE client_id = "+rec.value(0).toString()+";");
    visitQueryModel->setHeaderData(1,Qt::Horizontal, tr("Дата визита"));
    this->visit_tableView->setModel(visitQueryModel);
    this->visit_tableView->resizeColumnsToContents();
    this->visit_tableView->resizeRowsToContents();
    this->visit_tableView->setColumnHidden(0, true);
    this->visit_tableView->setColumnHidden(2, true);
}

bool MainWindow::OpenTable(QSqlTableModel *&model, QTableView *table, const QString &tableName)
{
    model = new QSqlTableModel(0,db);
    model->setTable(tableName);
    model->select();
    table->setModel(model);
    model->setEditStrategy(QSqlTableModel::OnManualSubmit);
    table->setColumnHidden(0, true);
    table->setColumnWidth(1,table->width());
    table->show();
    return true;
}

//Обновление
void MainWindow::Update()
{
    OpenTable(modelClient, this->client_tableView, "\"client\"");
    modelClient->setHeaderData(1, Qt::Horizontal, tr("ФИО"));
    modelClient->setHeaderData(2, Qt::Horizontal, tr("Дата рождения"));
    modelClient->setHeaderData(3, Qt::Horizontal, tr("Телефон"));
    this->client_tableView->resizeColumnsToContents();
}

//Добавление в справочнике
void MainWindow::on_add_directory_pushButton_clicked()
{
   QSqlRecord rec;
   switch(this->tabWidget_2->currentIndex()){
      case 0: modelDoctor->insertRecord(-1,rec); break;
      case 1: modelReason->insertRecord(-1,rec); break;
      case 2: modelBrend->insertRecord(-1,rec); break;
      case 3: modelGoods->insertRecord(-1,rec); break;
      case 4: modelCare_agent->insertRecord(-1,rec); break;
   }
}

//Подтверждение в справочнике
void MainWindow::on_accept_directory_pushButton_clicked()
{
    switch(this->tabWidget_2->currentIndex()){
       case 0: modelDoctor->submitAll(); break;
       case 1: modelReason->submitAll(); break;
       case 2: modelBrend->submitAll(); break;
       case 3: modelGoods->submitAll(); break;
       case 4: modelCare_agent->submitAll(); break;
    }
}

//Удаление в справочнике
void MainWindow::on_delete_directory_pushButton_clicked()
{
    QModelIndexList list;
    QModelIndex idx;
    switch(this->tabWidget_2->currentIndex()){
       case 0: { list  = this->doctors_tableView->selectionModel()->selectedIndexes();
                if(list.isEmpty()){
                    QMessageBox::critical(this,tr("Ошибка удаления"),tr("Список удаления пуст!"));
                } else {
                    idx = list.first();
                    int Row = idx.row();
                    modelDoctor->removeRow(Row);
                }
       }
       break;
       case 1: { list  = this->reason_tableView->selectionModel()->selectedIndexes();
                if(list.isEmpty()){
                    QMessageBox::critical(this,tr("Ошибка удаления"),tr("Список удаления пуст!"));
                } else {
                    idx = list.first();
                    int Row = idx.row();
                    modelReason->removeRow(Row);
                }
       }
       break;
       case 2:  { list  = this->brend_tableView->selectionModel()->selectedIndexes();
                 if(list.isEmpty()){
                    QMessageBox::critical(this,tr("Ошибка удаления"),tr("Список удаления пуст!"));
                 } else {
                    idx = list.first();
                    int Row = idx.row();
                    modelBrend->removeRow(Row);
                 }
       }
       break;
       case 3:  { list  = this->goods_tableView->selectionModel()->selectedIndexes();
                 if(list.isEmpty()){
                    QMessageBox::critical(this,tr("Ошибка удаления"),tr("Список удаления пуст!"));
                 } else {
                    idx = list.first();
                    int Row = idx.row();
                    modelGoods->removeRow(Row);
                 }
       }
       break;
       case 4: { list  = this->agent_care_tableView->selectionModel()->selectedIndexes();
                if(list.isEmpty()){
                    QMessageBox::critical(this,tr("Ошибка удаления"),tr("Список удаления пуст!"));
                } else {
                    idx = list.first();
                    int Row = idx.row();
                    modelCare_agent->removeRow(Row);
                }
       }
       break;
    }
}

//Отмена в справочнике
void MainWindow::on_cansel_directory_pushButton_clicked()
{
    switch(this->tabWidget_2->currentIndex()){
       case 0: modelDoctor->revertAll(); break;
       case 1: modelReason->revertAll(); break;
       case 2: modelBrend->revertAll(); break;
       case 3: modelGoods->revertAll(); break;
       case 4: modelCare_agent->revertAll(); break;
    }
}

//Добавление в дисконте
void MainWindow::on_add_discount_pushButton_clicked()
{
    QSqlRecord rec;
    modelDiscount->insertRecord(-1,rec);
}

//Удаление в дисконте
void MainWindow::on_delete_discount_pushButton_clicked()
{
    QModelIndexList list;
    QModelIndex idx;
    list  = this->discount_tableView->selectionModel()->selectedIndexes();
    if(list.isEmpty()){
         QMessageBox::critical(this,tr("Ошибка удаления"),tr("Список удаления пуст!"));
    } else {
        idx = list.first();
        int Row = idx.row();
        modelDiscount->removeRow(Row);
    }
}

//Подтверждение в дисконте
void MainWindow::on_accept_discount_pushButton_clicked()
{
    modelDiscount->submitAll();
}

//Отмена в дисконте
void MainWindow::on_cansel_pushButton_clicked()
{
    modelDiscount->revertAll();
}

//Удаление Клиента
//Добавить очистку визитов, после удаление клиента!!
void MainWindow::on_delete_client_pushButton_clicked()
{
    QModelIndexList list;
    QModelIndex idx;
    list  = this->client_tableView->selectionModel()->selectedIndexes();
    if(list.isEmpty()){
        QMessageBox::critical(this,tr("Ошибка удаления"),tr("Список удаления пуст!"));
    } else {
        if(QMessageBox::question(0, tr("Удаление"), tr("Удаление клиента повлечет удаление всех визитов данного клиента. Продолжить?"), QMessageBox::Yes | QMessageBox::No , QMessageBox::Yes )== QMessageBox::Yes)
        {
            idx = list.first();
            int Row = idx.row();
            QSqlRecord rec = modelClient->record(Row);
            QSqlQuery q_visit;
            q_visit.prepare("DELETE FROM \"visit_date\" WHERE client_id = ?");
            q_visit.addBindValue(rec.value(0).toInt());
            q_visit.exec();
            QSqlQuery q_client;
            q_client.prepare("DELETE FROM \"client\" WHERE id = ?");
            q_client.addBindValue(rec.value(0).toInt());
            q_client.exec();
            Update();
        }
    }
}

//Подтверждение в табл клиент
void MainWindow::on_accept_client_pushButton_clicked()
{
    modelClient->submitAll();
}

//Удаление в табл визит
void MainWindow::on_delete_visit_pushButton_clicked()
{
    QModelIndexList list  = this->visit_tableView->selectionModel()->selectedIndexes();
    if(!list.isEmpty())
    {
        if(QMessageBox::question(0, tr("Удаление"), tr("Удалить эту запись?"), QMessageBox::Yes | QMessageBox::No , QMessageBox::Yes )== QMessageBox::Yes)
        {
            QModelIndex idx = list.first();
            QSqlRecord rec = visitQueryModel->record(idx.row());
            QSqlQuery q;
            q.prepare("DELETE FROM \"visit_date\" WHERE id = ?");
            q.addBindValue(rec.value(0).toInt());
            q.exec();
            updateVisitsTable();
        }
    }
}

//Поиск клиента - НЕ РАБОТАЕТ :(
void MainWindow::on_search_lineEdit_textChanged(const QString &arg1)
{
//    if(this->search_checkBox->isChecked())
//    {
//        modelClient->setFilter("SELECT FROM client WHERE name LIKE '%"+this->search_lineEdit->text()+"%'");
//        Update();
//    }
}

void MainWindow::updateVisitsTable(){
    QModelIndexList list  = this->client_tableView->selectionModel()->selectedIndexes();
    if(!list.isEmpty())
    {
        QModelIndex idx = list.first();
        QSqlRecord rec = modelClient->record(idx.row());
        visitQueryModel->setQuery("SELECT id, visit_date  FROM visit_date WHERE client_id = "+rec.value(0).toString()+";");
        visitQueryModel->setHeaderData(1,Qt::Horizontal, tr("Дата визита"));
        this->visit_tableView->setModel(visitQueryModel);
        this->visit_tableView->resizeColumnsToContents();
        this->visit_tableView->resizeRowsToContents();
        this->visit_tableView->setColumnHidden(0, true);
    }
}

//Изменение информации по визиту по кнопке
void MainWindow::on_change_visit_pushButton_clicked()
{

}

//Изменение информации по визиту по двойному щелчку
void MainWindow::on_visit_tableView_doubleClicked(const QModelIndex &index)
{
    QSqlRecord rec = visitQueryModel->record(index.row());
    int id = rec.value(0).toInt();
    int id_client = rec.value(2).toInt();
    visit_info *visit = new visit_info(this, id_client, id, &db);
    connect(visit, &visit_info::accepted, this, &MainWindow::updateVisitsTable);
    visit->show();
}
