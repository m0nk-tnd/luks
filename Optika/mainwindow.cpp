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

  modelClient = new QSqlTableModel(0, db);
  modelClient->setTable("client");
  modelClient->setHeaderData(0, Qt::Horizontal, tr("id"));
  modelClient->setHeaderData(1, Qt::Horizontal, tr("ФИО"));
  modelClient->setHeaderData(2, Qt::Horizontal, tr("Дата рождения"));
  modelClient->setHeaderData(3, Qt::Horizontal, tr("Телефон"));
  modelClient->select();

  this->client_tableView->setModel(modelClient);
  this->client_tableView->setColumnHidden(0, true);
  this->client_tableView->resizeColumnsToContents();
  this->client_tableView->show();

  modelDiscount = new QSqlTableModel(0, db);
  modelDiscount->setTable("discount");
  modelDiscount->setHeaderData(0, Qt::Horizontal, tr("id"));
  modelDiscount->setHeaderData(1, Qt::Horizontal, tr("Номер карты"));
  modelDiscount->setHeaderData(2, Qt::Horizontal, tr("Скидка"));
  modelDiscount->select();

  this->discount_tableView->setModel(modelDiscount);
  this->discount_tableView->setColumnHidden(0, true);
  this->discount_tableView->resizeColumnsToContents();
  this->discount_tableView->show();

  modelDoctor = new QSqlTableModel(0, db);
  modelDoctor->setTable("doctor");
  modelDoctor->setHeaderData(0, Qt::Horizontal, tr("id"));
  modelDoctor->setHeaderData(1, Qt::Horizontal, tr("Врач"));
  modelDoctor->select();

  this->doctors_tableView->setModel(modelDoctor);
  this->doctors_tableView->setColumnHidden(0, true);
  this->doctors_tableView->resizeColumnsToContents();
  this->doctors_tableView->show();

  modelReason = new QSqlTableModel(0, db);
  modelReason->setTable("reason");
  modelReason->setHeaderData(0, Qt::Horizontal, tr("id"));
  modelReason->setHeaderData(1, Qt::Horizontal, tr("Причина"));
  modelReason->select();

  this->reason_tableView->setModel(modelReason);
  this->reason_tableView->setColumnHidden(0, true);
  this->reason_tableView->resizeColumnsToContents();
  this->reason_tableView->show();

  modelBrend = new QSqlTableModel(0, db);
  modelBrend->setTable("brend");
  modelBrend->setHeaderData(0, Qt::Horizontal, tr("id"));
  modelBrend->setHeaderData(1, Qt::Horizontal, tr("Бренд"));
  modelBrend->select();

  this->brend_tableView->setModel(modelBrend);
  this->brend_tableView->setColumnHidden(0, true);
  this->brend_tableView->resizeColumnsToContents();
  this->brend_tableView->show();

  modelCare_agent = new QSqlTableModel(0, db);
  modelCare_agent->setTable("care_agent");
  modelCare_agent->setHeaderData(0, Qt::Horizontal, tr("id"));
  modelCare_agent->setHeaderData(1, Qt::Horizontal, tr("Средства ухода"));
  modelCare_agent->select();

  this->agent_care_tableView->setModel(modelCare_agent);
  this->agent_care_tableView->setColumnHidden(0, true);
  this->agent_care_tableView->resizeColumnsToContents();
  this->agent_care_tableView->show();

  modelGoods = new QSqlTableModel(0, db);
  modelGoods->setTable("goods");
  modelGoods->setHeaderData(0, Qt::Horizontal, tr("id"));
  modelGoods->setHeaderData(1, Qt::Horizontal, tr("Наименование товара"));
  modelGoods->select();

  this->goods_tableView->setModel(modelGoods);
  this->goods_tableView->setColumnHidden(0, true);
  this->goods_tableView->resizeColumnsToContents();
  this->goods_tableView->show();
}

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

void MainWindow::on_add_client_pushButton_clicked()
{
    client_info *client = new client_info(this);
    client->setModal(true);
    client->show();
}

void MainWindow::on_add_visit_pushButton_clicked()
{
    visit_info *visit = new visit_info(this);
    visit->show();
}
