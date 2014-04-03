#ifndef VISIT_INFO_H
#define VISIT_INFO_H

#include <QMainWindow>
#include <QtSql>
#include <QDebug>
#include <QMessageBox>

namespace Ui {
class visit_info;
}

class visit_info : public QMainWindow
{
    Q_OBJECT

public:
	explicit visit_info(QWidget *parent = 0, int id_client = 0, int id = 0, QSqlDatabase *db1 = 0, bool copy = false);
    ~visit_info();

private slots:
    void on_add_pushButton_clicked();
    void on_cancel_pushButton_clicked();
    void on_od_sph_lineEdit_editingFinished();
    void on_od_cyl_lineEdit_editingFinished();
    void on_os_sph_lineEdit_editingFinished();
    void on_os_cyl_lineEdit_editingFinished();
    void on_od_sph_ochki_lineEdit_editingFinished();
    void on_od_cyl_ochki_lineEdit_editingFinished();
    void on_os_sph_ochki_lineEdit_editingFinished();
    void on_os_cyl_ochki_lineEdit_editingFinished();
    void on_bc_lineEdit_editingFinished();
    void on_dia_lineEdit_editingFinished();
    void on_od_sph_mkl_lineEdit_editingFinished();
    void on_od_cyl_mkl_lineEdit_editingFinished();
    void on_bc_mlk_lineEdit_editingFinished();
    void on_os_sph_mkl_lineEdit_editingFinished();
    void on_os_cyl_mkl_lineEdit_editingFinished();
    void on_od_r1_lineEdit_editingFinished();
    void on_od_r2_lineEdit_editingFinished();
    void on_os_r1_lineEdit_editingFinished();
    void on_os_r2_lineEdit_editingFinished();

private:
    int id_client;
    int id;
    QSqlDatabase db;
    Ui::visit_info *ui;
    bool copy;

    void Double1FieldValid(QLineEdit*, bool sign = false);
    void Double2FieldValid(QLineEdit*, bool sign = false);
signals:
    void accepted();
};

#endif // VISIT_INFO_H
