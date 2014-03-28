#include "client_info.h"
#include "ui_client_info.h"

client_info::client_info(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::client_info)
{
    ui->setupUi(this);
}

client_info::~client_info()
{
    delete ui;
}

void client_info::on_buttonBox_accepted()
{
    QSqlQuery q;
    q.prepare("INSERT INTO client(name, birthday, phone) values(?,?,?)");
    q.addBindValue(ui->name_lineEdit->text());
    q.addBindValue(ui->dateEdit->date().toString("dd.MM.yyyy"));
    q.addBindValue(ui->phone_lineEdit->text());
    q.exec();
    emit this->ownAccepted();
    close();
}
