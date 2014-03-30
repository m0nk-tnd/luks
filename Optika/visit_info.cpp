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

    //Если изменение, выводим данные из бд
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

        q.prepare("SELECT od_vis, od_sph, od_cyl, od_axis, od_comments, od_r1, od_r2, bc, dia, dpp, \
                  os_vis, os_sph, os_cyl, os_axis, os_comments, os_r1, os_r2, od_sph_mkl, od_cyl_mkl, \
                  od_axis_mkl, os_sph_mkl, os_cyl_mkl, os_axis_mkl, bc_mkl, bms_mkl, dpp_mkl, od_sph_ochki,\
                  od_cyl_ochki, od_axis_ochki, os_sph_ochki, os_cyl_ochki, os_axis_ochki, dpp_ochki, comments_ochki \
                  FROM visit_date WHERE id = ?");

        q.addBindValue(id);
        q.exec();
        q.first();

        //Осмотр
        ui->od_vis_lineEdit->setText(q.value(0).toString());
        ui->od_sph_lineEdit->setText(q.value(1).toString());
        ui->od_cyl_lineEdit->setText(q.value(2).toString());
        ui->od_axis_lineEdit->setText(q.value(3).toString());
        ui->od_comments_textEdit->setText(q.value(4).toString());

        ui->od_r1_lineEdit->setText(q.value(5).toString());
        ui->od_r2_lineEdit->setText(q.value(6).toString());
        ui->bc_lineEdit->setText(q.value(7).toString());
        ui->dia_lineEdit->setText(q.value(8).toString());
        ui->dpp_lineEdit->setText(q.value(9).toString());

        ui->os_vis_lineEdit->setText(q.value(10).toString());
        ui->os_sph_lineEdit->setText(q.value(11).toString());
        ui->os_cyl_lineEdit->setText(q.value(12).toString());
        ui->os_axis_lineEdit->setText(q.value(13).toString());

        ui->os_comments_textEdit->setText(q.value(14).toString());
        ui->os_r1_lineEdit->setText(q.value(15).toString());
        ui->os_r2_lineEdit->setText(q.value(16).toString());

        //Линзы
        ui->od_sph_mkl_lineEdit->setText(q.value(17).toString());
        ui->od_cyl_mkl_lineEdit->setText(q.value(18).toString());
        ui->od_axis_mkl_lineEdit->setText(q.value(19).toString());
        ui->os_sph_mkl_lineEdit->setText(q.value(20).toString());
        ui->os_cyl_mkl_lineEdit->setText(q.value(21).toString());
        ui->os_axis_mkl_lineEdit->setText(q.value(22).toString());
        ui->bc_mlk_lineEdit->setText(q.value(23).toString());
        ui->bms_mlk_textEdit->setText(q.value(24).toString());
        ui->dpp_mkl_lineEdit->setText(q.value(25).toString());

        //Очки
        ui->od_sph_ochki_lineEdit->setText(q.value(26).toString());
        ui->od_cyl_ochki_lineEdit->setText(q.value(27).toString());
        ui->od_axis_ochki_lineEdit->setText(q.value(28).toString());
        ui->os_sph_ochki_lineEdit->setText(q.value(29).toString());
        ui->os_cyl_ochki_lineEdit->setText(q.value(30).toString());
        ui->os_axis_ochki_lineEdit->setText(q.value(31).toString());
        ui->dpp_ochki_lineEdit->setText(q.value(32).toString());
        ui->comments_ochki_textEdit->setText(q.value(33).toString());


        q.prepare("SELECT name FROM client WHERE id = ?");
        q.addBindValue(id_client);
        q.exec();
        q.first();
        visit_info::setWindowTitle("Информация по клиенту: " + q.value(0).toString());
    }

}

visit_info::~visit_info()
{
    delete ui;
}

//Добавить инсерт всех полей
void visit_info::on_add_pushButton_clicked()
{
    QSqlQuery q;
    QSqlQuery q_temp;
    QString temp;

    //Апдейт записей
    if(id != -1){
        q.prepare("UPDATE visit_date SET visit_date = ?, doctor_id = ?, reason_id = ?, brend_id = ?,\
                  care_agent_id = ?, goods_id = ?, od_vis = ?, od_sph = ?, od_cyl = ?, od_axis = ?, od_comments = ?, od_r1 = ?, \
                  od_r2 = ?, bc = ?, dia = ?, dpp = ?, os_vis = ?, os_sph = ?, os_cyl = ?, os_axis = ?, os_comments = ?,  os_r1 = ?, \
                  os_r2 = ?, od_sph_mkl = ?, od_cyl_mkl = ?, od_axis_mkl = ?, os_sph_mkl = ?, os_cyl_mkl = ?, os_axis_mkl = ?,\
                  bc_mkl = ?, bms_mkl = ?, dpp_mkl = ?, od_sph_ochki = ?, od_cyl_ochki = ?, od_axis_ochki = ?, os_sph_ochki = ?, \
                  os_cyl_ochki = ?, os_axis_ochki = ?, dpp_ochki = ?, comments_ochki = ? WHERE id = ?;");

        q.addBindValue(ui->visit_dateEdit->date().toString("dd.MM.yyyy"));

        temp = ui->doctor_comboBox->currentText();
        q_temp.prepare("SELECT id FROM doctor WHERE name = ?");
        q_temp.addBindValue(temp);
        q_temp.exec();
        q_temp.first();
        QString doctor_id = q_temp.value(0).toString();
        q.addBindValue(doctor_id);

        temp = ui->reason_comboBox->currentText();
        q_temp.prepare("SELECT id FROM reason WHERE name = ?");
        q_temp.addBindValue(temp);
        q_temp.exec();
        q_temp.first();
        QString reason_id = q_temp.value(0).toString();
        q.addBindValue(reason_id);

        temp = ui->brend_comboBox->currentText();
        q_temp.prepare("SELECT id FROM brend WHERE name = ?");
        q_temp.addBindValue(temp);
        q_temp.exec();
        q_temp.first();
        QString brend_id = q_temp.value(0).toString();
        q.addBindValue(brend_id);

        temp = ui->care_agent_comboBox->currentText();
        q_temp.prepare("SELECT id FROM care_agent WHERE name = ?");
        q_temp.addBindValue(temp);
        q_temp.exec();
        q_temp.first();
        QString care_agent_id = q_temp.value(0).toString();
        q.addBindValue(care_agent_id);

        temp = ui->goods_comboBox->currentText();
        q_temp.prepare("SELECT id FROM goods WHERE name = ?");
        q_temp.addBindValue(temp);
        q_temp.exec();
        q_temp.first();
        QString goods_id = q_temp.value(0).toString();
        q.addBindValue(goods_id);

        q.addBindValue(ui->od_vis_lineEdit->text());
        q.addBindValue(ui->od_sph_lineEdit->text());
        q.addBindValue(ui->od_cyl_lineEdit->text());
        q.addBindValue(ui->od_axis_lineEdit->text());
        q.addBindValue(ui->od_comments_textEdit->toPlainText());
        q.addBindValue(ui->od_r1_lineEdit->text());
        q.addBindValue(ui->od_r2_lineEdit->text());
        q.addBindValue(ui->bc_lineEdit->text());
        q.addBindValue(ui->dia_lineEdit->text());
        q.addBindValue(ui->dpp_lineEdit->text());
        q.addBindValue(ui->os_vis_lineEdit->text());
        q.addBindValue(ui->os_sph_lineEdit->text());
        q.addBindValue(ui->os_cyl_lineEdit->text());
        q.addBindValue(ui->os_axis_lineEdit->text());
        q.addBindValue(ui->os_comments_textEdit->toPlainText());
        q.addBindValue(ui->os_r1_lineEdit->text());
        q.addBindValue(ui->os_r2_lineEdit->text());

        q.addBindValue(ui->od_sph_mkl_lineEdit->text());
        q.addBindValue(ui->od_cyl_mkl_lineEdit->text());
        q.addBindValue(ui->od_axis_mkl_lineEdit->text());
        q.addBindValue(ui->os_sph_mkl_lineEdit->text());
        q.addBindValue(ui->os_cyl_mkl_lineEdit->text());
        q.addBindValue(ui->os_axis_mkl_lineEdit->text());
        q.addBindValue(ui->bc_mlk_lineEdit->text());
        q.addBindValue(ui->bms_mlk_textEdit->toPlainText());
        q.addBindValue(ui->dpp_mkl_lineEdit->text());

        q.addBindValue(ui->od_sph_ochki_lineEdit->text());
        q.addBindValue(ui->od_cyl_ochki_lineEdit->text());
        q.addBindValue(ui->od_axis_ochki_lineEdit->text());
        q.addBindValue(ui->os_sph_ochki_lineEdit->text());
        q.addBindValue(ui->os_cyl_ochki_lineEdit->text());
        q.addBindValue(ui->os_axis_ochki_lineEdit->text());
        q.addBindValue(ui->dpp_ochki_lineEdit->text());
        q.addBindValue(ui->comments_ochki_textEdit->toPlainText());

        q.addBindValue(id);
        q.exec();

        //qDebug() << q.lastError();
    }
    else{
        q.prepare("INSERT INTO visit_date(visit_date, client_id, doctor_id, reason_id, brend_id, \
                  care_agent_id, goods_id, od_vis, od_sph, od_cyl, od_axis, od_comments, od_r1, \
                  od_r2, bc, dia, dpp, os_vis, os_sph, os_cyl, os_axis, os_comments,  os_r1, \
                  os_r2, od_sph_mkl, od_cyl_mkl, od_axis_mkl, os_sph_mkl, os_cyl_mkl, os_axis_mkl,\
                  bc_mkl, bms_mkl, dpp_mkl, od_sph_ochki, od_cyl_ochki, od_axis_ochki, os_sph_ochki, \
                  os_cyl_ochki, os_axis_ochki, dpp_ochki, comments_ochki) \
                values(?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?,\
                       ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?)");

        q.addBindValue(ui->visit_dateEdit->date().toString("dd.MM.yyyy"));
        q.addBindValue(id_client);

        temp = ui->doctor_comboBox->currentText();
        q_temp.prepare("SELECT id FROM doctor WHERE name = ?");
        q_temp.addBindValue(temp);
        q_temp.exec();
        q_temp.first();
        QString doctor_id = q_temp.value(0).toString();
        q.addBindValue(doctor_id);

        temp = ui->reason_comboBox->currentText();
        q_temp.prepare("SELECT id FROM reason WHERE name = ?");
        q_temp.addBindValue(temp);
        q_temp.exec();
        q_temp.first();
        QString reason_id = q_temp.value(0).toString();
        q.addBindValue(reason_id);

        temp = ui->brend_comboBox->currentText();
        q_temp.prepare("SELECT id FROM brend WHERE name = ?");
        q_temp.addBindValue(temp);
        q_temp.exec();
        q_temp.first();
        QString brend_id = q_temp.value(0).toString();
        q.addBindValue(brend_id);

        temp = ui->care_agent_comboBox->currentText();
        q_temp.prepare("SELECT id FROM care_agent WHERE name = ?");
        q_temp.addBindValue(temp);
        q_temp.exec();
        q_temp.first();
        QString care_agent_id = q_temp.value(0).toString();
        q.addBindValue(care_agent_id);

        temp = ui->goods_comboBox->currentText();
        q_temp.prepare("SELECT id FROM goods WHERE name = ?");
        q_temp.addBindValue(temp);
        q_temp.exec();
        q_temp.first();
        QString goods_id = q_temp.value(0).toString();
        q.addBindValue(goods_id);

        q.addBindValue(ui->od_vis_lineEdit->text());
        q.addBindValue(ui->od_sph_lineEdit->text());
        q.addBindValue(ui->od_cyl_lineEdit->text());
        q.addBindValue(ui->od_axis_lineEdit->text());
        q.addBindValue(ui->od_comments_textEdit->toPlainText());
        q.addBindValue(ui->od_r1_lineEdit->text());
        q.addBindValue(ui->od_r2_lineEdit->text());
        q.addBindValue(ui->bc_lineEdit->text());
        q.addBindValue(ui->dia_lineEdit->text());
        q.addBindValue(ui->dpp_lineEdit->text());
        q.addBindValue(ui->os_vis_lineEdit->text());
        q.addBindValue(ui->os_sph_lineEdit->text());
        q.addBindValue(ui->os_cyl_lineEdit->text());
        q.addBindValue(ui->os_axis_lineEdit->text());
        q.addBindValue(ui->os_comments_textEdit->toPlainText());
        q.addBindValue(ui->os_r1_lineEdit->text());
        q.addBindValue(ui->os_r2_lineEdit->text());

        q.addBindValue(ui->od_sph_mkl_lineEdit->text());
        q.addBindValue(ui->od_cyl_mkl_lineEdit->text());
        q.addBindValue(ui->od_axis_mkl_lineEdit->text());
        q.addBindValue(ui->os_sph_mkl_lineEdit->text());
        q.addBindValue(ui->os_cyl_mkl_lineEdit->text());
        q.addBindValue(ui->os_axis_mkl_lineEdit->text());
        q.addBindValue(ui->bc_mlk_lineEdit->text());
        q.addBindValue(ui->bms_mlk_textEdit->toPlainText());
        q.addBindValue(ui->dpp_mkl_lineEdit->text());

        q.addBindValue(ui->od_sph_ochki_lineEdit->text());
        q.addBindValue(ui->od_cyl_ochki_lineEdit->text());
        q.addBindValue(ui->od_axis_ochki_lineEdit->text());
        q.addBindValue(ui->os_sph_ochki_lineEdit->text());
        q.addBindValue(ui->os_cyl_ochki_lineEdit->text());
        q.addBindValue(ui->os_axis_ochki_lineEdit->text());
        q.addBindValue(ui->dpp_ochki_lineEdit->text());
        q.addBindValue(ui->comments_ochki_textEdit->toPlainText());

        q.exec();
    }

    emit this->accepted();
    close();
}

void visit_info::on_cancel_pushButton_clicked()
{
    close();
}
