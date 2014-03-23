#include "mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
  QMainWindow(parent)
{
  setupUi(this);


  QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
  db.setDatabaseName("luks_db.sqlite");
  if(!db.open()){
	qDebug() << "Error";
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
