#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "ui_mainwindow.h"
#include <QtSql>
#include <dbparameters.h>
#include <client_info.h>
#include <visit_info.h>

class MainWindow : public QMainWindow, private Ui::MainWindow
{
  Q_OBJECT

public:
  explicit MainWindow(QWidget *parent = 0);

private:
  QSqlDatabase db;
  QString setParamsFirstTime();
  QSqlTableModel *modelClient;
  QSqlTableModel *modelVisit;
  QSqlTableModel *modelDoctor;
  QSqlTableModel *modelReason;
  QSqlTableModel *modelBrend;
  QSqlTableModel *modelCare_agent;
  QSqlTableModel *modelDiscount;
  QSqlTableModel *modelGoods;

private slots:
  void on_action_triggered();
  void on_add_client_pushButton_clicked();
  void on_add_visit_pushButton_clicked();
};

#endif // MAINWINDOW_H
