#ifndef VISIT_INFO_H
#define VISIT_INFO_H

#include <QMainWindow>

namespace Ui {
class visit_info;
}

class visit_info : public QMainWindow
{
    Q_OBJECT

public:
    explicit visit_info(QWidget *parent = 0);
    ~visit_info();

private:
    Ui::visit_info *ui;
};

#endif // VISIT_INFO_H
