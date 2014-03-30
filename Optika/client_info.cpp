#include "client_info.h"
#include "ui_client_info.h"

client_info::client_info(QWidget *parent, int id_client) :
    QDialog(parent),
    ui(new Ui::client_info)
{
    this->id_client=id_client;
    ui->setupUi(this);

    if(id_client != -1){
        QSqlQuery q;
        q.prepare("SELECT name, birthday, phone FROM client WHERE id = ?");
        q.addBindValue(id_client);
        q.exec();
        q.first();
        ui->name_lineEdit->setText(q.value(0).toString());
        QString birthday = q.value(1).toString();
        QDate dt = QDate::fromString(birthday, "dd.MM.yyyy");
        ui->dateEdit->setDate(dt);
        ui->phone_lineEdit->setText(q.value(2).toString());
        client_info::setWindowTitle("Изменение информации");
    }
}

client_info::~client_info()
{
    delete ui;
}

void client_info::on_buttonBox_accepted()
{
    if(id_client != -1){
        QSqlQuery q;
        q.prepare("UPDATE client SET name = ?, birthday = ?, phone = ? WHERE id = ?");
        q.addBindValue(ui->name_lineEdit->text());
        q.addBindValue(ui->dateEdit->date().toString("dd.MM.yyyy"));
        q.addBindValue(ui->phone_lineEdit->text());
        q.addBindValue(id_client);
        q.exec();
    }
    else{
        QSqlQuery q;
        q.prepare("INSERT INTO client(name, birthday, phone) values(?,?,?)");
        q.addBindValue(ui->name_lineEdit->text());
        q.addBindValue(ui->dateEdit->date().toString("dd.MM.yyyy"));
        q.addBindValue(ui->phone_lineEdit->text());
        q.exec();
    }
    emit this->ownAccepted();
    close();
}
