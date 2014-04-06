#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "ui_mainwindow.h"
#include <QtSql>
#include <dbparameters.h>
#include <developers.h>
#include <client_info.h>
#include <visit_info.h>
#include <QMessageBox>


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
  QSqlQueryModel *visitQueryModel;
  QString clientFilter;
  QString discountFilter;

  void updateVisitsTable();
  void resizeTables();
  bool OpenTable(QSqlTableModel*& model, QTableView* table, const QString& tableName);
  void Update();
  void resizeEvent(QResizeEvent* event);
  void changeDB(QString);

private slots:
  void on_action_triggered();
  void on_add_client_pushButton_clicked();
  void on_add_visit_pushButton_clicked();
  void on_client_tableView_clicked(const QModelIndex &index);
  void on_add_directory_pushButton_clicked();
  void on_accept_directory_pushButton_clicked();
  void on_delete_directory_pushButton_clicked();
  void on_cansel_directory_pushButton_clicked();
  void on_add_discount_pushButton_clicked();
  void on_delete_discount_pushButton_clicked();
  void on_accept_discount_pushButton_clicked();
  void on_cansel_pushButton_clicked();
  void on_delete_client_pushButton_clicked();
  void on_delete_visit_pushButton_clicked();
  void on_search_lineEdit_textChanged(const QString &arg1);
  void on_change_visit_pushButton_clicked();
  void on_visit_tableView_doubleClicked(const QModelIndex &index);
  void on_pushButton_clicked();
  void on_change_client_pushButton_clicked();
  void on_client_tableView_doubleClicked(const QModelIndex &index);
  void on_tabWidget_currentChanged(int index);
  void on_tabWidget_2_currentChanged(int index);
  void on_search_discount_lineEdit_textChanged(const QString &arg1);
  void on_action_2_triggered();
};

#endif // MAINWINDOW_H
void on_search_discount_lineEdit_textChanged(const QString &arg1);
