#include "visit_info.h"
#include "ui_visit_info.h"

visit_info::visit_info(QWidget *parent, int id_client, int id, QSqlDatabase *db1) :
    QMainWindow(parent),
    ui(new Ui::visit_info)
{
    this->id_client=id_client;
    this->id=id;
    this->db = *db1;
    ui->setupUi(this);
    ui->visit_dateEdit->setDate(QDate::currentDate());

    QSqlTableModel *M = new QSqlTableModel(0, db);
    M->setTable("doctor");
    M->select();
    ui->doctor_comboBox->setModel(M);
    ui->doctor_comboBox->setModelColumn(1);

    QSqlTableModel *M1 = new QSqlTableModel(0, db);
    M1->setTable("reason");
    M1->select();
    ui->reason_comboBox->setModel(M1);
    ui->reason_comboBox->setModelColumn(1);

    QSqlTableModel *M2 = new QSqlTableModel(0, db);
    M2->setTable("brend");
    M2->select();
    ui->brend_comboBox->setModel(M2);
    ui->brend_comboBox->setModelColumn(1);

    QSqlTableModel *M3 = new QSqlTableModel(0, db);
    M3->setTable("care_agent");
    M3->select();
    ui->care_agent_comboBox->setModel(M3);
    ui->care_agent_comboBox->setModelColumn(1);

    QSqlTableModel *M4 = new QSqlTableModel(0, db);
    M4->setTable("goods");
    M4->select();
    ui->goods_comboBox->setModel(M4);
    ui->goods_comboBox->setModelColumn(1);




    if(id != -1){       
        //doctor
        QSqlQuery q;
        q.prepare("SELECT doctor_id FROM visit_date WHERE id = ?");
        q.addBindValue(id);
        q.exec();
        q.first();
        QString doctor_id = q.value(0).toString();
        q.prepare("SELECT name FROM doctor WHERE id = ?");
        q.addBindValue(doctor_id);
        q.exec();
        q.first();
        ui->doctor_comboBox->setCurrentIndex(ui->doctor_comboBox->findText(q.value(0).toString()));

        //reason
        q.prepare("SELECT reason_id FROM visit_date WHERE id = ?");
        q.addBindValue(id);
        q.exec();
        q.first();
        QString reason_id = q.value(0).toString();
        q.prepare("SELECT name FROM reason WHERE id = ?");
        q.addBindValue(reason_id);
        q.exec();
        q.first();
        ui->reason_comboBox->setCurrentIndex(ui->reason_comboBox->findText(q.value(0).toString()));

        //brend
        q.prepare("SELECT brend_id FROM visit_date WHERE id = ?");
        q.addBindValue(id);
        q.exec();
        q.first();
        QString brend_id = q.value(0).toString();
        q.prepare("SELECT name FROM brend WHERE id = ?");
        q.addBindValue(brend_id);
        q.exec();
        q.first();
        ui->brend_comboBox->setCurrentIndex(ui->brend_comboBox->findText(q.value(0).toString()));

        //care_agent
        q.prepare("SELECT care_agent_id FROM visit_date WHERE id = ?");
        q.addBindValue(id);
        q.exec();
        q.first();
        QString care_agent_id = q.value(0).toString();
        q.prepare("SELECT name FROM care_agent WHERE id = ?");
        q.addBindValue(care_agent_id);
        q.exec();
        q.first();
        ui->care_agent_comboBox->setCurrentIndex(ui->care_agent_comboBox->findText(q.value(0).toString()));

        //goods
        q.prepare("SELECT goods_id FROM visit_date WHERE id = ?");
        q.addBindValue(id);
        q.exec();
        q.first();
        QString goods_id = q.value(0).toString();
        q.prepare("SELECT name FROM goods WHERE id = ?");
        q.addBindValue(goods_id);
        q.exec();
        q.first();
        ui->goods_comboBox->setCurrentIndex(ui->goods_comboBox->findText(q.value(0).toString()));

        q.prepare("SELECT visit_date FROM visit_date WHERE id = ?");
        q.addBindValue(id);
        q.exec();
        q.first();
        QString visit_date = q.value(0).toString();
        QDate dt = QDate::fromString(visit_date, "dd.MM.yyyy");
        ui->visit_dateEdit->setDate(dt);
    }

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
    emit this->accepted();
    close();
}
