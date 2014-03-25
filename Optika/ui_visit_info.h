/********************************************************************************
** Form generated from reading UI file 'visit_info.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VISIT_INFO_H
#define UI_VISIT_INFO_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_visit_info
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QLabel *label_2;
    QLineEdit *od_vis_lineEdit;
    QLabel *label_3;
    QLineEdit *os_vis_lineEdit;
    QLabel *label_4;
    QLabel *label_5;
    QLineEdit *od_sph_lineEdit;
    QLineEdit *os_sph_lineEdit;
    QLabel *label_6;
    QLabel *label_7;
    QLineEdit *od_cyl_lineEdit;
    QLineEdit *os_cyl_lineEdit;
    QLabel *label_8;
    QLabel *label_9;
    QLineEdit *od_axis_lineEdit;
    QLineEdit *os_axis_lineEdit;
    QLabel *label_10;
    QLabel *label_11;
    QTextEdit *od_comments_textEdit;
    QTextEdit *os_comments_textEdit;
    QTabWidget *tabWidget;
    QWidget *tab;
    QLabel *label_12;
    QLineEdit *os_sph_mkl_lineEdit;
    QLabel *label_13;
    QLabel *label_14;
    QLineEdit *od_axis_mkl_lineEdit;
    QLabel *label_15;
    QLabel *label_16;
    QLineEdit *od_cyl_mkl_lineEdit;
    QLineEdit *os_cyl_mkl_lineEdit;
    QLabel *label_17;
    QLineEdit *os_axis_mkl_lineEdit;
    QLabel *label_18;
    QLabel *label_19;
    QLineEdit *bc_mlk_lineEdit;
    QLineEdit *dpp_mkl_lineEdit;
    QLineEdit *od_sph_mkl_lineEdit;
    QLabel *label_20;
    QTextEdit *bms_mlk_textEdit;
    QWidget *tab_2;
    QLabel *label_25;
    QLineEdit *od_axis_ochki_lineEdit;
    QLabel *label_26;
    QLabel *label_27;
    QLabel *label_28;
    QLineEdit *od_sph_ochki_lineEdit;
    QLabel *label_29;
    QLineEdit *os_cyl_ochki_lineEdit;
    QLabel *label_30;
    QLineEdit *os_axis_ochki_lineEdit;
    QLabel *label_31;
    QLineEdit *os_sph_ochki_lineEdit;
    QLabel *label_32;
    QTextEdit *comments_ochki_textEdit;
    QLineEdit *od_cyl_ochki_lineEdit;
    QLineEdit *Dpp_ochki_lineEdit;
    QLabel *label_21;
    QDateEdit *visit_dateEdit;
    QLabel *label_22;
    QLabel *label_23;
    QLabel *label_24;
    QComboBox *reason_comboBox;
    QComboBox *doctor_comboBox;
    QComboBox *care_agent_comboBox;
    QPushButton *add_pushButton;
    QPushButton *cancel_pushButton;
    QLabel *label_33;
    QComboBox *brend_comboBox;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *visit_info)
    {
        if (visit_info->objectName().isEmpty())
            visit_info->setObjectName(QStringLiteral("visit_info"));
        visit_info->resize(806, 513);
        centralwidget = new QWidget(visit_info);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        label = new QLabel(centralwidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(380, 110, 41, 21));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(30, 150, 46, 21));
        od_vis_lineEdit = new QLineEdit(centralwidget);
        od_vis_lineEdit->setObjectName(QStringLiteral("od_vis_lineEdit"));
        od_vis_lineEdit->setGeometry(QRect(70, 150, 51, 20));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(30, 210, 46, 21));
        os_vis_lineEdit = new QLineEdit(centralwidget);
        os_vis_lineEdit->setObjectName(QStringLiteral("os_vis_lineEdit"));
        os_vis_lineEdit->setGeometry(QRect(70, 210, 51, 20));
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(130, 150, 31, 16));
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(130, 210, 31, 16));
        od_sph_lineEdit = new QLineEdit(centralwidget);
        od_sph_lineEdit->setObjectName(QStringLiteral("od_sph_lineEdit"));
        od_sph_lineEdit->setGeometry(QRect(160, 150, 61, 20));
        os_sph_lineEdit = new QLineEdit(centralwidget);
        os_sph_lineEdit->setObjectName(QStringLiteral("os_sph_lineEdit"));
        os_sph_lineEdit->setGeometry(QRect(160, 210, 61, 20));
        label_6 = new QLabel(centralwidget);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(240, 210, 31, 16));
        label_7 = new QLabel(centralwidget);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(240, 150, 31, 16));
        od_cyl_lineEdit = new QLineEdit(centralwidget);
        od_cyl_lineEdit->setObjectName(QStringLiteral("od_cyl_lineEdit"));
        od_cyl_lineEdit->setGeometry(QRect(270, 150, 61, 20));
        os_cyl_lineEdit = new QLineEdit(centralwidget);
        os_cyl_lineEdit->setObjectName(QStringLiteral("os_cyl_lineEdit"));
        os_cyl_lineEdit->setGeometry(QRect(270, 210, 61, 20));
        label_8 = new QLabel(centralwidget);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(350, 210, 31, 16));
        label_9 = new QLabel(centralwidget);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(350, 150, 31, 16));
        od_axis_lineEdit = new QLineEdit(centralwidget);
        od_axis_lineEdit->setObjectName(QStringLiteral("od_axis_lineEdit"));
        od_axis_lineEdit->setGeometry(QRect(380, 150, 61, 20));
        os_axis_lineEdit = new QLineEdit(centralwidget);
        os_axis_lineEdit->setObjectName(QStringLiteral("os_axis_lineEdit"));
        os_axis_lineEdit->setGeometry(QRect(380, 210, 61, 20));
        label_10 = new QLabel(centralwidget);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(460, 210, 71, 16));
        label_11 = new QLabel(centralwidget);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(460, 150, 71, 16));
        od_comments_textEdit = new QTextEdit(centralwidget);
        od_comments_textEdit->setObjectName(QStringLiteral("od_comments_textEdit"));
        od_comments_textEdit->setGeometry(QRect(550, 150, 231, 41));
        os_comments_textEdit = new QTextEdit(centralwidget);
        os_comments_textEdit->setObjectName(QStringLiteral("os_comments_textEdit"));
        os_comments_textEdit->setGeometry(QRect(550, 200, 231, 41));
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(30, 260, 751, 151));
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        label_12 = new QLabel(tab);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setGeometry(QRect(340, 80, 31, 16));
        os_sph_mkl_lineEdit = new QLineEdit(tab);
        os_sph_mkl_lineEdit->setObjectName(QStringLiteral("os_sph_mkl_lineEdit"));
        os_sph_mkl_lineEdit->setGeometry(QRect(60, 80, 51, 20));
        label_13 = new QLabel(tab);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setGeometry(QRect(10, 20, 46, 21));
        label_14 = new QLabel(tab);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setGeometry(QRect(120, 80, 31, 16));
        od_axis_mkl_lineEdit = new QLineEdit(tab);
        od_axis_mkl_lineEdit->setObjectName(QStringLiteral("od_axis_mkl_lineEdit"));
        od_axis_mkl_lineEdit->setGeometry(QRect(260, 20, 61, 20));
        label_15 = new QLabel(tab);
        label_15->setObjectName(QStringLiteral("label_15"));
        label_15->setGeometry(QRect(120, 20, 31, 16));
        label_16 = new QLabel(tab);
        label_16->setObjectName(QStringLiteral("label_16"));
        label_16->setGeometry(QRect(230, 80, 31, 16));
        od_cyl_mkl_lineEdit = new QLineEdit(tab);
        od_cyl_mkl_lineEdit->setObjectName(QStringLiteral("od_cyl_mkl_lineEdit"));
        od_cyl_mkl_lineEdit->setGeometry(QRect(150, 20, 61, 20));
        os_cyl_mkl_lineEdit = new QLineEdit(tab);
        os_cyl_mkl_lineEdit->setObjectName(QStringLiteral("os_cyl_mkl_lineEdit"));
        os_cyl_mkl_lineEdit->setGeometry(QRect(150, 80, 61, 20));
        label_17 = new QLabel(tab);
        label_17->setObjectName(QStringLiteral("label_17"));
        label_17->setGeometry(QRect(340, 20, 31, 20));
        os_axis_mkl_lineEdit = new QLineEdit(tab);
        os_axis_mkl_lineEdit->setObjectName(QStringLiteral("os_axis_mkl_lineEdit"));
        os_axis_mkl_lineEdit->setGeometry(QRect(260, 80, 61, 20));
        label_18 = new QLabel(tab);
        label_18->setObjectName(QStringLiteral("label_18"));
        label_18->setGeometry(QRect(10, 80, 46, 21));
        label_19 = new QLabel(tab);
        label_19->setObjectName(QStringLiteral("label_19"));
        label_19->setGeometry(QRect(230, 20, 31, 16));
        bc_mlk_lineEdit = new QLineEdit(tab);
        bc_mlk_lineEdit->setObjectName(QStringLiteral("bc_mlk_lineEdit"));
        bc_mlk_lineEdit->setGeometry(QRect(370, 20, 61, 20));
        dpp_mkl_lineEdit = new QLineEdit(tab);
        dpp_mkl_lineEdit->setObjectName(QStringLiteral("dpp_mkl_lineEdit"));
        dpp_mkl_lineEdit->setGeometry(QRect(370, 80, 61, 20));
        od_sph_mkl_lineEdit = new QLineEdit(tab);
        od_sph_mkl_lineEdit->setObjectName(QStringLiteral("od_sph_mkl_lineEdit"));
        od_sph_mkl_lineEdit->setGeometry(QRect(60, 20, 51, 20));
        label_20 = new QLabel(tab);
        label_20->setObjectName(QStringLiteral("label_20"));
        label_20->setGeometry(QRect(470, 20, 31, 21));
        bms_mlk_textEdit = new QTextEdit(tab);
        bms_mlk_textEdit->setObjectName(QStringLiteral("bms_mlk_textEdit"));
        bms_mlk_textEdit->setGeometry(QRect(520, 20, 211, 81));
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        label_25 = new QLabel(tab_2);
        label_25->setObjectName(QStringLiteral("label_25"));
        label_25->setGeometry(QRect(10, 80, 46, 21));
        od_axis_ochki_lineEdit = new QLineEdit(tab_2);
        od_axis_ochki_lineEdit->setObjectName(QStringLiteral("od_axis_ochki_lineEdit"));
        od_axis_ochki_lineEdit->setGeometry(QRect(260, 20, 61, 20));
        label_26 = new QLabel(tab_2);
        label_26->setObjectName(QStringLiteral("label_26"));
        label_26->setGeometry(QRect(230, 80, 31, 16));
        label_27 = new QLabel(tab_2);
        label_27->setObjectName(QStringLiteral("label_27"));
        label_27->setGeometry(QRect(340, 80, 31, 16));
        label_28 = new QLabel(tab_2);
        label_28->setObjectName(QStringLiteral("label_28"));
        label_28->setGeometry(QRect(120, 80, 31, 16));
        od_sph_ochki_lineEdit = new QLineEdit(tab_2);
        od_sph_ochki_lineEdit->setObjectName(QStringLiteral("od_sph_ochki_lineEdit"));
        od_sph_ochki_lineEdit->setGeometry(QRect(60, 20, 51, 20));
        label_29 = new QLabel(tab_2);
        label_29->setObjectName(QStringLiteral("label_29"));
        label_29->setGeometry(QRect(120, 20, 31, 16));
        os_cyl_ochki_lineEdit = new QLineEdit(tab_2);
        os_cyl_ochki_lineEdit->setObjectName(QStringLiteral("os_cyl_ochki_lineEdit"));
        os_cyl_ochki_lineEdit->setGeometry(QRect(150, 80, 61, 20));
        label_30 = new QLabel(tab_2);
        label_30->setObjectName(QStringLiteral("label_30"));
        label_30->setGeometry(QRect(10, 20, 46, 21));
        os_axis_ochki_lineEdit = new QLineEdit(tab_2);
        os_axis_ochki_lineEdit->setObjectName(QStringLiteral("os_axis_ochki_lineEdit"));
        os_axis_ochki_lineEdit->setGeometry(QRect(260, 80, 61, 20));
        label_31 = new QLabel(tab_2);
        label_31->setObjectName(QStringLiteral("label_31"));
        label_31->setGeometry(QRect(230, 20, 31, 16));
        os_sph_ochki_lineEdit = new QLineEdit(tab_2);
        os_sph_ochki_lineEdit->setObjectName(QStringLiteral("os_sph_ochki_lineEdit"));
        os_sph_ochki_lineEdit->setGeometry(QRect(60, 80, 51, 20));
        label_32 = new QLabel(tab_2);
        label_32->setObjectName(QStringLiteral("label_32"));
        label_32->setGeometry(QRect(440, 20, 71, 21));
        comments_ochki_textEdit = new QTextEdit(tab_2);
        comments_ochki_textEdit->setObjectName(QStringLiteral("comments_ochki_textEdit"));
        comments_ochki_textEdit->setGeometry(QRect(520, 20, 211, 81));
        od_cyl_ochki_lineEdit = new QLineEdit(tab_2);
        od_cyl_ochki_lineEdit->setObjectName(QStringLiteral("od_cyl_ochki_lineEdit"));
        od_cyl_ochki_lineEdit->setGeometry(QRect(150, 20, 61, 20));
        Dpp_ochki_lineEdit = new QLineEdit(tab_2);
        Dpp_ochki_lineEdit->setObjectName(QStringLiteral("Dpp_ochki_lineEdit"));
        Dpp_ochki_lineEdit->setGeometry(QRect(370, 80, 61, 20));
        tabWidget->addTab(tab_2, QString());
        label_21 = new QLabel(centralwidget);
        label_21->setObjectName(QStringLiteral("label_21"));
        label_21->setGeometry(QRect(20, 10, 91, 21));
        visit_dateEdit = new QDateEdit(centralwidget);
        visit_dateEdit->setObjectName(QStringLiteral("visit_dateEdit"));
        visit_dateEdit->setGeometry(QRect(109, 10, 131, 22));
        label_22 = new QLabel(centralwidget);
        label_22->setObjectName(QStringLiteral("label_22"));
        label_22->setGeometry(QRect(260, 10, 111, 21));
        label_23 = new QLabel(centralwidget);
        label_23->setObjectName(QStringLiteral("label_23"));
        label_23->setGeometry(QRect(20, 50, 46, 21));
        label_24 = new QLabel(centralwidget);
        label_24->setObjectName(QStringLiteral("label_24"));
        label_24->setGeometry(QRect(260, 50, 101, 16));
        reason_comboBox = new QComboBox(centralwidget);
        reason_comboBox->setObjectName(QStringLiteral("reason_comboBox"));
        reason_comboBox->setGeometry(QRect(380, 10, 171, 22));
        doctor_comboBox = new QComboBox(centralwidget);
        doctor_comboBox->setObjectName(QStringLiteral("doctor_comboBox"));
        doctor_comboBox->setGeometry(QRect(70, 50, 171, 22));
        care_agent_comboBox = new QComboBox(centralwidget);
        care_agent_comboBox->setObjectName(QStringLiteral("care_agent_comboBox"));
        care_agent_comboBox->setGeometry(QRect(380, 50, 171, 22));
        add_pushButton = new QPushButton(centralwidget);
        add_pushButton->setObjectName(QStringLiteral("add_pushButton"));
        add_pushButton->setGeometry(QRect(610, 430, 75, 23));
        cancel_pushButton = new QPushButton(centralwidget);
        cancel_pushButton->setObjectName(QStringLiteral("cancel_pushButton"));
        cancel_pushButton->setGeometry(QRect(700, 430, 75, 23));
        label_33 = new QLabel(centralwidget);
        label_33->setObjectName(QStringLiteral("label_33"));
        label_33->setGeometry(QRect(570, 10, 46, 21));
        brend_comboBox = new QComboBox(centralwidget);
        brend_comboBox->setObjectName(QStringLiteral("brend_comboBox"));
        brend_comboBox->setGeometry(QRect(618, 10, 171, 22));
        visit_info->setCentralWidget(centralwidget);
        menubar = new QMenuBar(visit_info);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 806, 21));
        visit_info->setMenuBar(menubar);
        statusbar = new QStatusBar(visit_info);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        visit_info->setStatusBar(statusbar);

        retranslateUi(visit_info);

        tabWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(visit_info);
    } // setupUi

    void retranslateUi(QMainWindow *visit_info)
    {
        visit_info->setWindowTitle(QApplication::translate("visit_info", "\320\236\321\201\320\274\320\276\321\202\321\200", 0));
        label->setText(QApplication::translate("visit_info", "\320\236\321\201\320\274\320\276\321\202\321\200", 0));
        label_2->setText(QApplication::translate("visit_info", "VisOD:", 0));
        label_3->setText(QApplication::translate("visit_info", "VisOS:", 0));
        label_4->setText(QApplication::translate("visit_info", "sph:", 0));
        label_5->setText(QApplication::translate("visit_info", "sph:", 0));
        label_6->setText(QApplication::translate("visit_info", "cyl:", 0));
        label_7->setText(QApplication::translate("visit_info", "cyl:", 0));
        label_8->setText(QApplication::translate("visit_info", "asix:", 0));
        label_9->setText(QApplication::translate("visit_info", "axis:", 0));
        label_10->setText(QApplication::translate("visit_info", "\320\232\320\276\320\274\320\274\320\265\320\275\321\202\320\260\321\200\320\270\320\271", 0));
        label_11->setText(QApplication::translate("visit_info", "\320\232\320\276\320\274\320\274\320\265\320\275\321\202\320\260\321\200\320\270\320\271", 0));
        label_12->setText(QApplication::translate("visit_info", "Dpp:", 0));
        label_13->setText(QApplication::translate("visit_info", "OD Sph:", 0));
        label_14->setText(QApplication::translate("visit_info", "Cyl:", 0));
        label_15->setText(QApplication::translate("visit_info", "Cyl:", 0));
        label_16->setText(QApplication::translate("visit_info", "axis:", 0));
        label_17->setText(QApplication::translate("visit_info", "BC:", 0));
        label_18->setText(QApplication::translate("visit_info", "OS Sph:", 0));
        label_19->setText(QApplication::translate("visit_info", "axis:", 0));
        label_20->setText(QApplication::translate("visit_info", "\320\221\320\234\320\241", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("visit_info", "\320\234\320\233\320\232", 0));
        label_25->setText(QApplication::translate("visit_info", "OS Sph:", 0));
        label_26->setText(QApplication::translate("visit_info", "axis:", 0));
        label_27->setText(QApplication::translate("visit_info", "Dpp:", 0));
        label_28->setText(QApplication::translate("visit_info", "Cyl:", 0));
        label_29->setText(QApplication::translate("visit_info", "Cyl:", 0));
        label_30->setText(QApplication::translate("visit_info", "OD Sph:", 0));
        label_31->setText(QApplication::translate("visit_info", "axis:", 0));
        label_32->setText(QApplication::translate("visit_info", "\320\237\321\200\320\270\320\274\320\265\321\207\320\260\320\275\320\270\321\217", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("visit_info", "\320\236\321\207\320\272\320\270", 0));
        label_21->setText(QApplication::translate("visit_info", "\320\224\320\260\321\202\320\260 \320\262\320\270\320\267\320\270\321\202\320\260", 0));
        label_22->setText(QApplication::translate("visit_info", "\320\237\321\200\320\270\321\207\320\270\320\275\320\260 \320\276\320\261\321\200\320\260\321\211\320\265\320\275\320\270\321\217", 0));
        label_23->setText(QApplication::translate("visit_info", "\320\222\321\200\320\260\321\207", 0));
        label_24->setText(QApplication::translate("visit_info", "\320\241\321\200\320\265\320\264\321\201\321\202\320\262\320\276 \321\203\321\205\320\276\320\264\320\260", 0));
        add_pushButton->setText(QApplication::translate("visit_info", "\320\236\320\272", 0));
        cancel_pushButton->setText(QApplication::translate("visit_info", "\320\236\321\202\320\274\320\265\320\275\320\270\321\202\321\214", 0));
        label_33->setText(QApplication::translate("visit_info", "\320\221\321\200\320\265\320\275\320\264", 0));
    } // retranslateUi

};

namespace Ui {
    class visit_info: public Ui_visit_info {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VISIT_INFO_H
