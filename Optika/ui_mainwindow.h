/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *action;
    QWidget *centralWidget;
    QTabWidget *tabWidget;
    QWidget *tab;
    QTableView *client_tableView;
    QTableView *visit_tableView;
    QPushButton *add_client_pushButton;
    QPushButton *change_client_pushButton;
    QPushButton *delete_client_pushButton;
    QPushButton *add_visit_pushButton;
    QPushButton *change_visit_pushButton;
    QPushButton *delete_visit_pushButton;
    QLabel *client_label;
    QLabel *visit_label;
    QLineEdit *search_lineEdit;
    QLabel *search_label;
    QWidget *tab_2;
    QTableView *discount_tableView;
    QPushButton *add_discount_pushButton;
    QPushButton *change_discount_pushButton;
    QPushButton *delete_discount_pushButton;
    QLabel *discount_label;
    QWidget *tab_3;
    QTabWidget *tabWidget_2;
    QWidget *tab_4;
    QTableView *doctors_tableView;
    QWidget *tab_8;
    QTableView *reason_tableView;
    QWidget *tab_7;
    QTableView *brend_tableView;
    QWidget *tab_5;
    QTableView *goods_tableView;
    QWidget *tab_6;
    QTableView *agent_care_tableView;
    QPushButton *add_directory_pushButton;
    QPushButton *change_directory_pushButton;
    QPushButton *delete_directory_pushButton;
    QMenuBar *menuBar;
    QMenu *menu;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(736, 452);
        action = new QAction(MainWindow);
        action->setObjectName(QStringLiteral("action"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(10, 10, 711, 381));
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        client_tableView = new QTableView(tab);
        client_tableView->setObjectName(QStringLiteral("client_tableView"));
        client_tableView->setGeometry(QRect(10, 80, 331, 231));
        visit_tableView = new QTableView(tab);
        visit_tableView->setObjectName(QStringLiteral("visit_tableView"));
        visit_tableView->setGeometry(QRect(370, 80, 321, 231));
        add_client_pushButton = new QPushButton(tab);
        add_client_pushButton->setObjectName(QStringLiteral("add_client_pushButton"));
        add_client_pushButton->setGeometry(QRect(20, 320, 75, 23));
        change_client_pushButton = new QPushButton(tab);
        change_client_pushButton->setObjectName(QStringLiteral("change_client_pushButton"));
        change_client_pushButton->setGeometry(QRect(100, 320, 75, 23));
        delete_client_pushButton = new QPushButton(tab);
        delete_client_pushButton->setObjectName(QStringLiteral("delete_client_pushButton"));
        delete_client_pushButton->setGeometry(QRect(180, 320, 75, 23));
        add_visit_pushButton = new QPushButton(tab);
        add_visit_pushButton->setObjectName(QStringLiteral("add_visit_pushButton"));
        add_visit_pushButton->setGeometry(QRect(380, 320, 75, 23));
        change_visit_pushButton = new QPushButton(tab);
        change_visit_pushButton->setObjectName(QStringLiteral("change_visit_pushButton"));
        change_visit_pushButton->setGeometry(QRect(460, 320, 75, 23));
        delete_visit_pushButton = new QPushButton(tab);
        delete_visit_pushButton->setObjectName(QStringLiteral("delete_visit_pushButton"));
        delete_visit_pushButton->setGeometry(QRect(540, 320, 75, 23));
        client_label = new QLabel(tab);
        client_label->setObjectName(QStringLiteral("client_label"));
        client_label->setGeometry(QRect(20, 54, 61, 20));
        visit_label = new QLabel(tab);
        visit_label->setObjectName(QStringLiteral("visit_label"));
        visit_label->setGeometry(QRect(380, 55, 71, 21));
        search_lineEdit = new QLineEdit(tab);
        search_lineEdit->setObjectName(QStringLiteral("search_lineEdit"));
        search_lineEdit->setGeometry(QRect(70, 20, 271, 20));
        search_label = new QLabel(tab);
        search_label->setObjectName(QStringLiteral("search_label"));
        search_label->setGeometry(QRect(20, 20, 41, 21));
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        discount_tableView = new QTableView(tab_2);
        discount_tableView->setObjectName(QStringLiteral("discount_tableView"));
        discount_tableView->setGeometry(QRect(10, 30, 651, 231));
        add_discount_pushButton = new QPushButton(tab_2);
        add_discount_pushButton->setObjectName(QStringLiteral("add_discount_pushButton"));
        add_discount_pushButton->setGeometry(QRect(410, 280, 75, 23));
        change_discount_pushButton = new QPushButton(tab_2);
        change_discount_pushButton->setObjectName(QStringLiteral("change_discount_pushButton"));
        change_discount_pushButton->setGeometry(QRect(490, 280, 75, 23));
        delete_discount_pushButton = new QPushButton(tab_2);
        delete_discount_pushButton->setObjectName(QStringLiteral("delete_discount_pushButton"));
        delete_discount_pushButton->setGeometry(QRect(570, 280, 75, 23));
        discount_label = new QLabel(tab_2);
        discount_label->setObjectName(QStringLiteral("discount_label"));
        discount_label->setGeometry(QRect(20, 3, 71, 20));
        tabWidget->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QStringLiteral("tab_3"));
        tabWidget_2 = new QTabWidget(tab_3);
        tabWidget_2->setObjectName(QStringLiteral("tabWidget_2"));
        tabWidget_2->setGeometry(QRect(10, 20, 651, 241));
        tab_4 = new QWidget();
        tab_4->setObjectName(QStringLiteral("tab_4"));
        doctors_tableView = new QTableView(tab_4);
        doctors_tableView->setObjectName(QStringLiteral("doctors_tableView"));
        doctors_tableView->setGeometry(QRect(10, 10, 621, 192));
        tabWidget_2->addTab(tab_4, QString());
        tab_8 = new QWidget();
        tab_8->setObjectName(QStringLiteral("tab_8"));
        reason_tableView = new QTableView(tab_8);
        reason_tableView->setObjectName(QStringLiteral("reason_tableView"));
        reason_tableView->setGeometry(QRect(10, 10, 621, 192));
        tabWidget_2->addTab(tab_8, QString());
        tab_7 = new QWidget();
        tab_7->setObjectName(QStringLiteral("tab_7"));
        brend_tableView = new QTableView(tab_7);
        brend_tableView->setObjectName(QStringLiteral("brend_tableView"));
        brend_tableView->setGeometry(QRect(10, 10, 621, 192));
        tabWidget_2->addTab(tab_7, QString());
        tab_5 = new QWidget();
        tab_5->setObjectName(QStringLiteral("tab_5"));
        goods_tableView = new QTableView(tab_5);
        goods_tableView->setObjectName(QStringLiteral("goods_tableView"));
        goods_tableView->setGeometry(QRect(10, 10, 621, 192));
        tabWidget_2->addTab(tab_5, QString());
        tab_6 = new QWidget();
        tab_6->setObjectName(QStringLiteral("tab_6"));
        agent_care_tableView = new QTableView(tab_6);
        agent_care_tableView->setObjectName(QStringLiteral("agent_care_tableView"));
        agent_care_tableView->setGeometry(QRect(10, 10, 621, 192));
        tabWidget_2->addTab(tab_6, QString());
        add_directory_pushButton = new QPushButton(tab_3);
        add_directory_pushButton->setObjectName(QStringLiteral("add_directory_pushButton"));
        add_directory_pushButton->setGeometry(QRect(410, 280, 75, 23));
        change_directory_pushButton = new QPushButton(tab_3);
        change_directory_pushButton->setObjectName(QStringLiteral("change_directory_pushButton"));
        change_directory_pushButton->setGeometry(QRect(490, 280, 75, 23));
        delete_directory_pushButton = new QPushButton(tab_3);
        delete_directory_pushButton->setObjectName(QStringLiteral("delete_directory_pushButton"));
        delete_directory_pushButton->setGeometry(QRect(570, 280, 75, 23));
        tabWidget->addTab(tab_3, QString());
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 736, 21));
        menu = new QMenu(menuBar);
        menu->setObjectName(QStringLiteral("menu"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menu->menuAction());
        menu->addAction(action);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(2);
        tabWidget_2->setCurrentIndex(3);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "\320\236\320\277\321\202\320\270\320\272\320\260 \"\320\233\321\216\320\272\321\201\"", 0));
        action->setText(QApplication::translate("MainWindow", "\320\235\320\260\321\201\321\202\321\200\320\276\320\271\320\272\320\270 \321\201\320\276\320\265\320\264\320\270\320\275\320\265\320\275\320\270\321\217", 0));
        add_client_pushButton->setText(QApplication::translate("MainWindow", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214", 0));
        change_client_pushButton->setText(QApplication::translate("MainWindow", "\320\230\320\267\320\274\320\265\320\275\320\270\321\202\321\214", 0));
        delete_client_pushButton->setText(QApplication::translate("MainWindow", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214", 0));
        add_visit_pushButton->setText(QApplication::translate("MainWindow", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214", 0));
        change_visit_pushButton->setText(QApplication::translate("MainWindow", "\320\230\320\267\320\274\320\265\320\275\320\270\321\202\321\214", 0));
        delete_visit_pushButton->setText(QApplication::translate("MainWindow", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214", 0));
        client_label->setText(QApplication::translate("MainWindow", "\320\232\320\273\320\270\320\265\320\275\321\202", 0));
        visit_label->setText(QApplication::translate("MainWindow", "\320\224\320\260\321\202\320\260 \320\262\320\270\320\267\320\270\321\202\320\260", 0));
        search_label->setText(QApplication::translate("MainWindow", "\320\237\320\276\320\270\321\201\320\272", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("MainWindow", "\320\222\320\270\320\267\320\270\321\202\321\213", 0));
        add_discount_pushButton->setText(QApplication::translate("MainWindow", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214", 0));
        change_discount_pushButton->setText(QApplication::translate("MainWindow", "\320\230\320\267\320\274\320\265\320\275\320\270\321\202\321\214", 0));
        delete_discount_pushButton->setText(QApplication::translate("MainWindow", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214", 0));
        discount_label->setText(QApplication::translate("MainWindow", "\320\235\320\276\320\274\320\265\321\200 \320\272\320\260\321\200\321\202\321\213", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("MainWindow", "\320\224\320\270\321\201\320\272\320\276\320\275\321\202", 0));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_4), QApplication::translate("MainWindow", "\320\222\321\200\320\260\321\207", 0));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_8), QApplication::translate("MainWindow", "\320\237\321\200\320\270\321\207\320\270\320\275\320\260 \320\276\320\261\321\200\320\260\321\211\320\265\320\275\320\270\321\217", 0));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_7), QApplication::translate("MainWindow", "\320\221\321\200\320\265\320\275\320\264", 0));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_5), QApplication::translate("MainWindow", "\320\235\320\260\320\270\320\274\320\265\320\275\320\276\320\262\320\260\320\275\320\270\320\265 \321\202\320\276\320\262\320\260\321\200\320\260", 0));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_6), QApplication::translate("MainWindow", "\320\241\321\200\320\265\320\264\321\201\321\202\320\262\320\276 \321\203\321\205\320\276\320\264\320\260", 0));
        add_directory_pushButton->setText(QApplication::translate("MainWindow", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214", 0));
        change_directory_pushButton->setText(QApplication::translate("MainWindow", "\320\230\320\267\320\274\320\265\320\275\320\270\321\202\321\214", 0));
        delete_directory_pushButton->setText(QApplication::translate("MainWindow", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("MainWindow", "\320\241\320\277\321\200\320\260\320\262\320\276\321\207\320\275\320\270\320\272", 0));
        menu->setTitle(QApplication::translate("MainWindow", "\320\244\320\260\320\271\320\273", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
