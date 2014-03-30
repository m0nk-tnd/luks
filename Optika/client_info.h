#ifndef CLIENT_INFO_H
#define CLIENT_INFO_H

#include <QDialog>
#include <QtSql>

namespace Ui {
class client_info;
}

class client_info : public QDialog
{
    Q_OBJECT

public:
    explicit client_info(QWidget *parent = 0, int id_client = 0);
    ~client_info();

private slots:
    void on_buttonBox_accepted();

private:
    int id_client;
    Ui::client_info *ui;

signals:
    void ownAccepted();

};

#endif // CLIENT_INFO_H
