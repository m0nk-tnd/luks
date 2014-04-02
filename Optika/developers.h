#ifndef DEVELOPERS_H
#define DEVELOPERS_H

#include <QDialog>

namespace Ui {
class developers;
}

class developers : public QDialog
{
    Q_OBJECT

public:
    explicit developers(QWidget *parent = 0);
    ~developers();

private:
    Ui::developers *ui;
};

#endif // DEVELOPERS_H
