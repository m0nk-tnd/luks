#include "mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
  QMainWindow(parent)
{
  setupUi(this);

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

  QSqlTableModel *model = new QSqlTableModel(0, db);
  model->setTable("client");
  model->setHeaderData(0, Qt::Horizontal, tr("Id"));
  model->setHeaderData(1, Qt::Horizontal, tr("Name"));
  model->select();

  this->tableView->setModel(model);
  this->tableView->show();
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
