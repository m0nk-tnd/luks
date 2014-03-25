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
  this->client_tableView->setColumnHidden(2, true);
  this->client_tableView->setColumnHidden(3, true);
  this->client_tableView->show();

//  modelDoctor = new QSqlTableModel(0, db);
//  modelDoctor->setTable("doctor");
//  modelDoctor->setHeaderData(0, Qt::Horizontal, tr("id"));
//  modelDoctor->setHeaderData(1, Qt::Horizontal, tr("Врач"));
//  modelDoctor->select();

//  this->doctor_tableView->setModel(modelDoctor);
//  this->doctor_tableView->setColumnHidden(0, true);
//  this->doctor_tableView->show();

//  modelReason = new QSqlTableModel(0, db);
//  modelReason->setTable("reason");
//  modelReason->setHeaderData(0, Qt::Horizontal, tr("id"));
//  modelReason->setHeaderData(1, Qt::Horizontal, tr("Причина"));
//  modelReason->select();

//  this->reason_tableView->setModel(modelClient);
//  this->reason_tableView->setColumnHidden(0, true);
//  this->reason_tableView->show();

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
