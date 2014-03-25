#include "visit_info.h"
#include "ui_visit_info.h"

visit_info::visit_info(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::visit_info)
{
    ui->setupUi(this);
}

visit_info::~visit_info()
{
    delete ui;
}
