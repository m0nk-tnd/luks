#include "developers.h"
#include "ui_developers.h"

developers::developers(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::developers)
{
    ui->setupUi(this);
}

developers::~developers()
{
    delete ui;
}
