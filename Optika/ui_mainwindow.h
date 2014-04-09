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
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *action;
    QAction *action_2;
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout_6;
    QTabWidget *tabWidget;
    QWidget *tab;
    QVBoxLayout *verticalLayout_5;
    QHBoxLayout *horizontalLayout_5;
    QHBoxLayout *horizontalLayout_3;
    QLabel *search_label;
    QLineEdit *search_lineEdit;
    QSpacerItem *horizontalSpacer;
    QHBoxLayout *horizontalLayout_4;
    QVBoxLayout *verticalLayout_3;
    QVBoxLayout *verticalLayout;
    QLabel *client_label;
    QTableView *client_tableView;
    QHBoxLayout *horizontalLayout;
    QPushButton *add_client_pushButton;
    QPushButton *change_client_pushButton;
    QPushButton *delete_client_pushButton;
    QSpacerItem *horizontalSpacer_2;
    QVBoxLayout *verticalLayout_4;
    QVBoxLayout *verticalLayout_2;
    QLabel *visit_label;
    QTableView *visit_tableView;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *add_visit_pushButton;
    QPushButton *change_visit_pushButton;
    QPushButton *delete_visit_pushButton;
    QWidget *tab_2;
    QHBoxLayout *horizontalLayout_7;
    QVBoxLayout *verticalLayout_7;
    QLineEdit *search_discount_lineEdit;
    QTableView *discount_tableView;
    QHBoxLayout *horizontalLayout_6;
    QPushButton *add_discount_pushButton;
    QPushButton *delete_discount_pushButton;
    QPushButton *accept_discount_pushButton;
    QPushButton *cansel_pushButton;
    QVBoxLayout *verticalLayout_8;
    QLabel *label_6;
    QPushButton *pushButton;
    QWidget *tab_3;
    QHBoxLayout *horizontalLayout_14;
    QVBoxLayout *verticalLayout_9;
    QTabWidget *tabWidget_2;
    QWidget *tab_4;
    QHBoxLayout *horizontalLayout_12;
    QHBoxLayout *horizontalLayout_11;
    QTableView *doctors_tableView;
    QLabel *label;
    QWidget *tab_8;
    QHBoxLayout *horizontalLayout_15;
    QHBoxLayout *horizontalLayout_13;
    QTableView *reason_tableView;
    QLabel *label_2;
    QWidget *tab_7;
    QHBoxLayout *horizontalLayout_16;
    QTableView *brend_tableView;
    QLabel *label_3;
    QWidget *tab_5;
    QHBoxLayout *horizontalLayout_10;
    QHBoxLayout *horizontalLayout_9;
    QTableView *goods_tableView;
    QLabel *label_4;
    QWidget *tab_6;
    QHBoxLayout *horizontalLayout_18;
    QHBoxLayout *horizontalLayout_17;
    QTableView *agent_care_tableView;
    QLabel *label_5;
    QHBoxLayout *horizontalLayout_8;
    QPushButton *add_directory_pushButton;
    QPushButton *delete_directory_pushButton;
    QPushButton *accept_directory_pushButton;
    QPushButton *cansel_directory_pushButton;
    QMenuBar *menuBar;
    QMenu *menu;
    QMenu *menu_2;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(787, 527);
        QFont font;
        font.setPointSize(9);
        MainWindow->setFont(font);
        QIcon icon;
        icon.addFile(QStringLiteral(":/icon/icon-glasses.png"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        action = new QAction(MainWindow);
        action->setObjectName(QStringLiteral("action"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/icon/icon-configure.png"), QSize(), QIcon::Normal, QIcon::Off);
        action->setIcon(icon1);
        action_2 = new QAction(MainWindow);
        action_2->setObjectName(QStringLiteral("action_2"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/icon/icon-dev.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        action_2->setIcon(icon2);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        verticalLayout_6 = new QVBoxLayout(centralWidget);
        verticalLayout_6->setSpacing(6);
        verticalLayout_6->setContentsMargins(11, 11, 11, 11);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        QFont font1;
        font1.setBold(true);
        font1.setWeight(75);
        tabWidget->setFont(font1);
        tabWidget->setTabPosition(QTabWidget::North);
        tabWidget->setUsesScrollButtons(true);
        tabWidget->setDocumentMode(false);
        tabWidget->setTabsClosable(false);
        tabWidget->setMovable(false);
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        verticalLayout_5 = new QVBoxLayout(tab);
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setContentsMargins(11, 11, 11, 11);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        search_label = new QLabel(tab);
        search_label->setObjectName(QStringLiteral("search_label"));
        search_label->setPixmap(QPixmap(QString::fromUtf8(":/icon/icon_loupe.gif")));

        horizontalLayout_3->addWidget(search_label);

        search_lineEdit = new QLineEdit(tab);
        search_lineEdit->setObjectName(QStringLiteral("search_lineEdit"));
        search_lineEdit->setFrame(true);

        horizontalLayout_3->addWidget(search_lineEdit);


        horizontalLayout_5->addLayout(horizontalLayout_3);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::MinimumExpanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer);


        verticalLayout_5->addLayout(horizontalLayout_5);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        client_label = new QLabel(tab);
        client_label->setObjectName(QStringLiteral("client_label"));
        client_label->setFont(font);

        verticalLayout->addWidget(client_label);

        client_tableView = new QTableView(tab);
        client_tableView->setObjectName(QStringLiteral("client_tableView"));
        client_tableView->setFont(font);
        client_tableView->setAlternatingRowColors(true);
        client_tableView->setSortingEnabled(true);

        verticalLayout->addWidget(client_tableView);


        verticalLayout_3->addLayout(verticalLayout);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        add_client_pushButton = new QPushButton(tab);
        add_client_pushButton->setObjectName(QStringLiteral("add_client_pushButton"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/icon/icon-plus.gif"), QSize(), QIcon::Normal, QIcon::Off);
        add_client_pushButton->setIcon(icon3);

        horizontalLayout->addWidget(add_client_pushButton);

        change_client_pushButton = new QPushButton(tab);
        change_client_pushButton->setObjectName(QStringLiteral("change_client_pushButton"));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/icon/icon-write.png"), QSize(), QIcon::Normal, QIcon::Off);
        change_client_pushButton->setIcon(icon4);

        horizontalLayout->addWidget(change_client_pushButton);

        delete_client_pushButton = new QPushButton(tab);
        delete_client_pushButton->setObjectName(QStringLiteral("delete_client_pushButton"));
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/icon/icon-delete.gif"), QSize(), QIcon::Normal, QIcon::Off);
        delete_client_pushButton->setIcon(icon5);

        horizontalLayout->addWidget(delete_client_pushButton);


        verticalLayout_3->addLayout(horizontalLayout);


        horizontalLayout_4->addLayout(verticalLayout_3);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Preferred, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_2);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        visit_label = new QLabel(tab);
        visit_label->setObjectName(QStringLiteral("visit_label"));

        verticalLayout_2->addWidget(visit_label);

        visit_tableView = new QTableView(tab);
        visit_tableView->setObjectName(QStringLiteral("visit_tableView"));
        visit_tableView->setAlternatingRowColors(true);

        verticalLayout_2->addWidget(visit_tableView);


        verticalLayout_4->addLayout(verticalLayout_2);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        add_visit_pushButton = new QPushButton(tab);
        add_visit_pushButton->setObjectName(QStringLiteral("add_visit_pushButton"));
        add_visit_pushButton->setIcon(icon3);

        horizontalLayout_2->addWidget(add_visit_pushButton);

        change_visit_pushButton = new QPushButton(tab);
        change_visit_pushButton->setObjectName(QStringLiteral("change_visit_pushButton"));
        change_visit_pushButton->setIcon(icon4);

        horizontalLayout_2->addWidget(change_visit_pushButton);

        delete_visit_pushButton = new QPushButton(tab);
        delete_visit_pushButton->setObjectName(QStringLiteral("delete_visit_pushButton"));
        delete_visit_pushButton->setIcon(icon5);

        horizontalLayout_2->addWidget(delete_visit_pushButton);


        verticalLayout_4->addLayout(horizontalLayout_2);


        horizontalLayout_4->addLayout(verticalLayout_4);


        verticalLayout_5->addLayout(horizontalLayout_4);

        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        horizontalLayout_7 = new QHBoxLayout(tab_2);
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setSpacing(6);
        verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));
        search_discount_lineEdit = new QLineEdit(tab_2);
        search_discount_lineEdit->setObjectName(QStringLiteral("search_discount_lineEdit"));

        verticalLayout_7->addWidget(search_discount_lineEdit);

        discount_tableView = new QTableView(tab_2);
        discount_tableView->setObjectName(QStringLiteral("discount_tableView"));
        discount_tableView->setAlternatingRowColors(true);

        verticalLayout_7->addWidget(discount_tableView);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        add_discount_pushButton = new QPushButton(tab_2);
        add_discount_pushButton->setObjectName(QStringLiteral("add_discount_pushButton"));
        add_discount_pushButton->setIcon(icon3);

        horizontalLayout_6->addWidget(add_discount_pushButton);

        delete_discount_pushButton = new QPushButton(tab_2);
        delete_discount_pushButton->setObjectName(QStringLiteral("delete_discount_pushButton"));
        delete_discount_pushButton->setIcon(icon5);

        horizontalLayout_6->addWidget(delete_discount_pushButton);

        accept_discount_pushButton = new QPushButton(tab_2);
        accept_discount_pushButton->setObjectName(QStringLiteral("accept_discount_pushButton"));
        QIcon icon6;
        icon6.addFile(QStringLiteral(":/icon/icon-check.png"), QSize(), QIcon::Normal, QIcon::Off);
        accept_discount_pushButton->setIcon(icon6);

        horizontalLayout_6->addWidget(accept_discount_pushButton);

        cansel_pushButton = new QPushButton(tab_2);
        cansel_pushButton->setObjectName(QStringLiteral("cansel_pushButton"));
        QIcon icon7;
        icon7.addFile(QStringLiteral(":/icon/icon-cansel.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        cansel_pushButton->setIcon(icon7);

        horizontalLayout_6->addWidget(cansel_pushButton);


        verticalLayout_7->addLayout(horizontalLayout_6);


        horizontalLayout_7->addLayout(verticalLayout_7);

        verticalLayout_8 = new QVBoxLayout();
        verticalLayout_8->setSpacing(6);
        verticalLayout_8->setObjectName(QStringLiteral("verticalLayout_8"));
        label_6 = new QLabel(tab_2);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setPixmap(QPixmap(QString::fromUtf8(":/icon/persent.png")));

        verticalLayout_8->addWidget(label_6);

        pushButton = new QPushButton(tab_2);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        QIcon icon8;
        icon8.addFile(QStringLiteral(":/icon/icon-excel.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton->setIcon(icon8);

        verticalLayout_8->addWidget(pushButton);


        horizontalLayout_7->addLayout(verticalLayout_8);

        tabWidget->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QStringLiteral("tab_3"));
        horizontalLayout_14 = new QHBoxLayout(tab_3);
        horizontalLayout_14->setSpacing(6);
        horizontalLayout_14->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_14->setObjectName(QStringLiteral("horizontalLayout_14"));
        verticalLayout_9 = new QVBoxLayout();
        verticalLayout_9->setSpacing(6);
        verticalLayout_9->setObjectName(QStringLiteral("verticalLayout_9"));
        tabWidget_2 = new QTabWidget(tab_3);
        tabWidget_2->setObjectName(QStringLiteral("tabWidget_2"));
        tab_4 = new QWidget();
        tab_4->setObjectName(QStringLiteral("tab_4"));
        horizontalLayout_12 = new QHBoxLayout(tab_4);
        horizontalLayout_12->setSpacing(6);
        horizontalLayout_12->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_12->setObjectName(QStringLiteral("horizontalLayout_12"));
        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setSpacing(6);
        horizontalLayout_11->setObjectName(QStringLiteral("horizontalLayout_11"));
        doctors_tableView = new QTableView(tab_4);
        doctors_tableView->setObjectName(QStringLiteral("doctors_tableView"));
        doctors_tableView->setAlternatingRowColors(false);

        horizontalLayout_11->addWidget(doctors_tableView);

        label = new QLabel(tab_4);
        label->setObjectName(QStringLiteral("label"));
        label->setPixmap(QPixmap(QString::fromUtf8(":/icon/doctor.png")));

        horizontalLayout_11->addWidget(label);


        horizontalLayout_12->addLayout(horizontalLayout_11);

        tabWidget_2->addTab(tab_4, QString());
        tab_8 = new QWidget();
        tab_8->setObjectName(QStringLiteral("tab_8"));
        horizontalLayout_15 = new QHBoxLayout(tab_8);
        horizontalLayout_15->setSpacing(6);
        horizontalLayout_15->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_15->setObjectName(QStringLiteral("horizontalLayout_15"));
        horizontalLayout_13 = new QHBoxLayout();
        horizontalLayout_13->setSpacing(6);
        horizontalLayout_13->setObjectName(QStringLiteral("horizontalLayout_13"));
        reason_tableView = new QTableView(tab_8);
        reason_tableView->setObjectName(QStringLiteral("reason_tableView"));

        horizontalLayout_13->addWidget(reason_tableView);

        label_2 = new QLabel(tab_8);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setPixmap(QPixmap(QString::fromUtf8(":/icon/stetiscoop.png")));

        horizontalLayout_13->addWidget(label_2);


        horizontalLayout_15->addLayout(horizontalLayout_13);

        tabWidget_2->addTab(tab_8, QString());
        tab_7 = new QWidget();
        tab_7->setObjectName(QStringLiteral("tab_7"));
        horizontalLayout_16 = new QHBoxLayout(tab_7);
        horizontalLayout_16->setSpacing(6);
        horizontalLayout_16->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_16->setObjectName(QStringLiteral("horizontalLayout_16"));
        brend_tableView = new QTableView(tab_7);
        brend_tableView->setObjectName(QStringLiteral("brend_tableView"));

        horizontalLayout_16->addWidget(brend_tableView);

        label_3 = new QLabel(tab_7);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setPixmap(QPixmap(QString::fromUtf8(":/icon/brend.png")));

        horizontalLayout_16->addWidget(label_3);

        tabWidget_2->addTab(tab_7, QString());
        tab_5 = new QWidget();
        tab_5->setObjectName(QStringLiteral("tab_5"));
        horizontalLayout_10 = new QHBoxLayout(tab_5);
        horizontalLayout_10->setSpacing(6);
        horizontalLayout_10->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_10->setObjectName(QStringLiteral("horizontalLayout_10"));
        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setSpacing(6);
        horizontalLayout_9->setObjectName(QStringLiteral("horizontalLayout_9"));
        goods_tableView = new QTableView(tab_5);
        goods_tableView->setObjectName(QStringLiteral("goods_tableView"));

        horizontalLayout_9->addWidget(goods_tableView);

        label_4 = new QLabel(tab_5);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setPixmap(QPixmap(QString::fromUtf8(":/icon/ochki.png")));

        horizontalLayout_9->addWidget(label_4);


        horizontalLayout_10->addLayout(horizontalLayout_9);

        tabWidget_2->addTab(tab_5, QString());
        tab_6 = new QWidget();
        tab_6->setObjectName(QStringLiteral("tab_6"));
        horizontalLayout_18 = new QHBoxLayout(tab_6);
        horizontalLayout_18->setSpacing(6);
        horizontalLayout_18->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_18->setObjectName(QStringLiteral("horizontalLayout_18"));
        horizontalLayout_17 = new QHBoxLayout();
        horizontalLayout_17->setSpacing(6);
        horizontalLayout_17->setObjectName(QStringLiteral("horizontalLayout_17"));
        agent_care_tableView = new QTableView(tab_6);
        agent_care_tableView->setObjectName(QStringLiteral("agent_care_tableView"));
        agent_care_tableView->setAlternatingRowColors(false);

        horizontalLayout_17->addWidget(agent_care_tableView);

        label_5 = new QLabel(tab_6);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setPixmap(QPixmap(QString::fromUtf8(":/icon/care.png")));

        horizontalLayout_17->addWidget(label_5);


        horizontalLayout_18->addLayout(horizontalLayout_17);

        tabWidget_2->addTab(tab_6, QString());

        verticalLayout_9->addWidget(tabWidget_2);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setSpacing(6);
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        add_directory_pushButton = new QPushButton(tab_3);
        add_directory_pushButton->setObjectName(QStringLiteral("add_directory_pushButton"));
        add_directory_pushButton->setIcon(icon3);

        horizontalLayout_8->addWidget(add_directory_pushButton);

        delete_directory_pushButton = new QPushButton(tab_3);
        delete_directory_pushButton->setObjectName(QStringLiteral("delete_directory_pushButton"));
        delete_directory_pushButton->setIcon(icon5);

        horizontalLayout_8->addWidget(delete_directory_pushButton);

        accept_directory_pushButton = new QPushButton(tab_3);
        accept_directory_pushButton->setObjectName(QStringLiteral("accept_directory_pushButton"));
        accept_directory_pushButton->setIcon(icon6);

        horizontalLayout_8->addWidget(accept_directory_pushButton);

        cansel_directory_pushButton = new QPushButton(tab_3);
        cansel_directory_pushButton->setObjectName(QStringLiteral("cansel_directory_pushButton"));
        cansel_directory_pushButton->setIcon(icon7);

        horizontalLayout_8->addWidget(cansel_directory_pushButton);


        verticalLayout_9->addLayout(horizontalLayout_8);


        horizontalLayout_14->addLayout(verticalLayout_9);

        tabWidget->addTab(tab_3, QString());

        verticalLayout_6->addWidget(tabWidget);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 787, 21));
        menu = new QMenu(menuBar);
        menu->setObjectName(QStringLiteral("menu"));
        menu_2 = new QMenu(menuBar);
        menu_2->setObjectName(QStringLiteral("menu_2"));
        MainWindow->setMenuBar(menuBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menu->menuAction());
        menuBar->addAction(menu_2->menuAction());
        menu->addAction(action);
        menu_2->addAction(action_2);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(0);
        tabWidget_2->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "\320\236\320\277\321\202\320\270\320\272\320\260 \"\320\233\321\216\320\272\321\201\"", 0));
        action->setText(QApplication::translate("MainWindow", "\320\235\320\260\321\201\321\202\321\200\320\276\320\271\320\272\320\270 \321\201\320\276\320\265\320\264\320\270\320\275\320\265\320\275\320\270\321\217", 0));
        action_2->setText(QApplication::translate("MainWindow", "\320\240\320\260\320\267\321\200\320\260\320\261\320\276\321\202\321\207\320\270\320\272\320\270", 0));
        search_label->setText(QString());
        search_lineEdit->setPlaceholderText(QApplication::translate("MainWindow", "\320\237\320\276\320\270\321\201\320\272...", 0));
        client_label->setText(QApplication::translate("MainWindow", "\320\221\320\260\320\267\320\260 \320\272\320\273\320\270\320\265\320\275\321\202", 0));
        add_client_pushButton->setText(QApplication::translate("MainWindow", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214 \320\272\320\273\320\270\320\265\320\275\321\202\320\260", 0));
        change_client_pushButton->setText(QApplication::translate("MainWindow", "\320\230\320\267\320\274\320\265\320\275\320\270\321\202\321\214", 0));
        delete_client_pushButton->setText(QApplication::translate("MainWindow", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214", 0));
        visit_label->setText(QApplication::translate("MainWindow", "\320\224\320\260\321\202\321\213 \320\277\320\276\321\201\320\265\321\211\320\265\320\275\320\270\321\217", 0));
        add_visit_pushButton->setText(QApplication::translate("MainWindow", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214 \320\277\320\276\321\201\320\265\321\211\320\265\320\275\320\270\320\265", 0));
        change_visit_pushButton->setText(QApplication::translate("MainWindow", "\320\230\320\267\320\274\320\265\320\275\320\270\321\202\321\214", 0));
        delete_visit_pushButton->setText(QApplication::translate("MainWindow", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214 ", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("MainWindow", "\320\237\320\276\321\201\320\265\321\211\320\265\320\275\320\270\321\217", 0));
        search_discount_lineEdit->setPlaceholderText(QApplication::translate("MainWindow", "\320\237\320\276\320\270\321\201\320\272...", 0));
        add_discount_pushButton->setText(QApplication::translate("MainWindow", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214", 0));
        delete_discount_pushButton->setText(QApplication::translate("MainWindow", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214", 0));
        accept_discount_pushButton->setText(QApplication::translate("MainWindow", "\320\237\320\276\320\264\321\202\320\262\320\265\321\200\320\264\320\270\321\202\321\214", 0));
        cansel_pushButton->setText(QApplication::translate("MainWindow", "\320\236\321\202\320\274\320\265\320\275\320\270\321\202\321\214", 0));
        label_6->setText(QString());
        pushButton->setText(QApplication::translate("MainWindow", "\320\227\320\260\320\263\321\200\321\203\320\267\320\270\321\202\321\214 \320\270\320\267 Excel", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("MainWindow", "\320\224\320\270\321\201\320\272\320\276\320\275\321\202\320\275\320\260\321\217 \321\201\320\270\321\201\321\202\320\265\320\274\320\260", 0));
        label->setText(QString());
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_4), QApplication::translate("MainWindow", "\320\222\321\200\320\260\321\207", 0));
        label_2->setText(QString());
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_8), QApplication::translate("MainWindow", "\320\237\321\200\320\270\321\207\320\270\320\275\320\260 \320\276\320\261\321\200\320\260\321\211\320\265\320\275\320\270\321\217", 0));
        label_3->setText(QString());
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_7), QApplication::translate("MainWindow", "\320\221\321\200\320\265\320\275\320\264", 0));
        label_4->setText(QString());
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_5), QApplication::translate("MainWindow", "\320\235\320\260\320\270\320\274\320\265\320\275\320\276\320\262\320\260\320\275\320\270\320\265 \321\202\320\276\320\262\320\260\321\200\320\260", 0));
        label_5->setText(QString());
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_6), QApplication::translate("MainWindow", "\320\241\321\200\320\265\320\264\321\201\321\202\320\262\320\276 \321\203\321\205\320\276\320\264\320\260", 0));
        add_directory_pushButton->setText(QApplication::translate("MainWindow", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214", 0));
        delete_directory_pushButton->setText(QApplication::translate("MainWindow", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214", 0));
        accept_directory_pushButton->setText(QApplication::translate("MainWindow", "\320\237\320\276\320\264\321\202\320\262\320\265\321\200\320\264\320\270\321\202\321\214", 0));
        cansel_directory_pushButton->setText(QApplication::translate("MainWindow", "\320\236\321\202\320\274\320\265\320\275\320\270\321\202\321\214", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("MainWindow", "\320\241\320\277\321\200\320\260\320\262\320\276\321\207\320\275\320\270\320\272", 0));
        menu->setTitle(QApplication::translate("MainWindow", "\320\244\320\260\320\271\320\273", 0));
        menu_2->setTitle(QApplication::translate("MainWindow", "\320\236 \320\277\321\200\320\276\320\263\321\200\320\260\320\274\320\274\320\265", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
