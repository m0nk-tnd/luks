#include "dbparameters.h"

dbParameters::dbParameters(QWidget *parent) :
  QDialog(parent)
{
  setupUi(this);
  oldPath = "";
  QFile file("./params.conf");
  if(!file.open(QIODevice::ReadOnly | QIODevice::Text)){
	this->close();
  }
  else{
	QTextStream in(&file);
	if(!in.atEnd()){
	  oldPath = in.readLine();
	}
	file.close();
  }
  this->lineEdit->setText(oldPath);
}

void dbParameters::on_buttonBox_accepted()
{
  QString newVal = this->lineEdit->text();
  if(oldPath != newVal){	//ничего не поменялось - выходим
	this->close();
  }
  QFile file("./params.conf");
  if(!file.open(QIODevice::WriteOnly | QIODevice::Text)){
	return;
  }
  QTextStream out(&file);
  out << newVal;
  file.close();
  emit dbChanged(newVal);
}

void dbParameters::on_buttonBox_rejected()
{
	this->close();
}

void dbParameters::on_pushButton_clicked()
{
  QString path = QFileDialog::getOpenFileName(0,QObject::tr("Укажите файл базы данных"),
											  QDir::homePath(), QObject::tr("Файл SQLite (*.sqlite);;Все файлы (*.*)"));
  this->lineEdit->setText(path);
}
