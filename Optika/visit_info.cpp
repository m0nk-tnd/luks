#include "visit_info.h"
#include "ui_visit_info.h"

visit_info::visit_info(QWidget *parent, int id_client) :
    QMainWindow(parent),
    ui(new Ui::visit_info)
{
    this->id_client=id_client;
    ui->setupUi(this);
    ui->visit_dateEdit->setDate(QDate::currentDate());


}

visit_info::~visit_info()
{
    delete ui;
}

void visit_info::on_add_pushButton_clicked()
{
    QSqlQuery q;
    q.prepare("INSERT INTO visit_date(visit_date, user_id) values(?,?)");
    q.addBindValue(ui->visit_dateEdit->date().toString("dd.MM.yyyy"));
    q.addBindValue(id_client);
    q.exec();
    close();
}
