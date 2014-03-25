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
