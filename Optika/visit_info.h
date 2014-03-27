#ifndef VISIT_INFO_H
#define VISIT_INFO_H

#include <QMainWindow>
#include <QtSql>

namespace Ui {
class visit_info;
}

class visit_info : public QMainWindow
{
    Q_OBJECT

public:
    explicit visit_info(QWidget *parent = 0, int id_client = 0);
    ~visit_info();

private slots:
    void on_add_pushButton_clicked();

private:
    int id_client;
    Ui::visit_info *ui;
};

#endif // VISIT_INFO_H
