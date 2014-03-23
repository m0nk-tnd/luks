#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "ui_mainwindow.h"
#include <QtSql>
#include <dbparameters.h>

class MainWindow : public QMainWindow, private Ui::MainWindow
{
  Q_OBJECT

public:
  explicit MainWindow(QWidget *parent = 0);

private:
  QSqlDatabase db;
  QString setParamsFirstTime();

private slots:
  void on_action_triggered();
};

#endif // MAINWINDOW_H
