#ifndef VISIT_INFO_H
#define VISIT_INFO_H

#include <QMainWindow>
#include <QtSql>
#include <QDebug>

namespace Ui {
class visit_info;
}

class visit_info : public QMainWindow
{
    Q_OBJECT

public:
    explicit visit_info(QWidget *parent = 0, int id_client = 0, int id = 0, QSqlDatabase *db1 = 0);
    ~visit_info();

private slots:
    void on_add_pushButton_clicked();

    void on_cancel_pushButton_clicked();

private:
    int id_client;
    int id;
    QSqlDatabase db;
    Ui::visit_info *ui;
signals:
    void accepted();
};

#endif // VISIT_INFO_H
