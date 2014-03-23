#ifndef DBPARAMETERS_H
#define DBPARAMETERS_H

#include "ui_dbparameters.h"
#include <QFileDialog>
#include <QFile>
#include <QTextStream>

class dbParameters : public QDialog, private Ui::dbParameters
{
  Q_OBJECT

public:
  explicit dbParameters(QWidget *parent = 0);

private:
  QString oldPath;

private slots:
  void on_buttonBox_accepted();
  void on_buttonBox_rejected();
  void on_pushButton_clicked();
};

#endif // DBPARAMETERS_H
