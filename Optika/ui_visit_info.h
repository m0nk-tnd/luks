/********************************************************************************
** Form generated from reading UI file 'visit_info.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VISIT_INFO_H
#define UI_VISIT_INFO_H

#include <QtCore/QDate>
#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_visit_info
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_11;
    QLabel *label_21;
    QDateEdit *visit_dateEdit;
    QSpacerItem *horizontalSpacer_4;
    QFrame *line_2;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout;
    QLabel *label_22;
    QComboBox *reason_comboBox;
    QLabel *label_33;
    QComboBox *brend_comboBox;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_23;
    QComboBox *doctor_comboBox;
    QLabel *label_24;
    QComboBox *care_agent_comboBox;
    QFrame *line;
    QHBoxLayout *horizontalLayout_10;
    QSpacerItem *horizontalSpacer_3;
    QLabel *label;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_2;
    QLineEdit *od_vis_lineEdit;
    QLabel *label_4;
    QLineEdit *od_sph_lineEdit;
    QLabel *label_7;
    QLineEdit *od_cyl_lineEdit;
    QLabel *label_9;
    QLineEdit *od_axis_lineEdit;
    QLabel *label_11;
    QTextEdit *od_comments_textEdit;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_3;
    QLineEdit *os_vis_lineEdit;
    QLabel *label_5;
    QLineEdit *os_sph_lineEdit;
    QLabel *label_6;
    QLineEdit *os_cyl_lineEdit;
    QLabel *label_8;
    QLineEdit *os_axis_lineEdit;
    QLabel *label_10;
    QTextEdit *os_comments_textEdit;
    QFrame *line_3;
    QTabWidget *tabWidget;
    QWidget *tab;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_9;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_13;
    QLineEdit *od_sph_mkl_lineEdit;
    QLabel *label_15;
    QLineEdit *od_cyl_mkl_lineEdit;
    QLabel *label_19;
    QLineEdit *od_axis_mkl_lineEdit;
    QLabel *label_17;
    QLineEdit *bc_mlk_lineEdit;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_18;
    QLineEdit *os_sph_mkl_lineEdit;
    QLabel *label_14;
    QLineEdit *os_cyl_mkl_lineEdit;
    QLabel *label_16;
    QLineEdit *os_axis_mkl_lineEdit;
    QLabel *label_12;
    QLineEdit *dpp_mkl_lineEdit;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_20;
    QTextEdit *bms_mlk_textEdit;
    QWidget *tab_2;
    QHBoxLayout *horizontalLayout_16;
    QVBoxLayout *verticalLayout_5;
    QHBoxLayout *horizontalLayout_12;
    QLabel *label_30;
    QLineEdit *od_sph_ochki_lineEdit;
    QLabel *label_29;
    QLineEdit *od_cyl_ochki_lineEdit;
    QLabel *label_31;
    QLineEdit *od_axis_ochki_lineEdit;
    QHBoxLayout *horizontalLayout_13;
    QLabel *label_25;
    QLineEdit *os_sph_ochki_lineEdit;
    QLabel *label_28;
    QLineEdit *os_cyl_ochki_lineEdit;
    QLabel *label_26;
    QLineEdit *os_axis_ochki_lineEdit;
    QHBoxLayout *horizontalLayout_14;
    QSpacerItem *horizontalSpacer_5;
    QLabel *label_27;
    QLineEdit *Dpp_ochki_lineEdit;
    QHBoxLayout *horizontalLayout_15;
    QLabel *label_32;
    QTextEdit *comments_ochki_textEdit;
    QHBoxLayout *horizontalLayout_5;
    QSpacerItem *horizontalSpacer;
    QPushButton *add_pushButton;
    QPushButton *cancel_pushButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *visit_info)
    {
        if (visit_info->objectName().isEmpty())
            visit_info->setObjectName(QStringLiteral("visit_info"));
        visit_info->resize(587, 649);
        centralwidget = new QWidget(visit_info);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        verticalLayout_4 = new QVBoxLayout(centralwidget);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setObjectName(QStringLiteral("horizontalLayout_11"));
        label_21 = new QLabel(centralwidget);
        label_21->setObjectName(QStringLiteral("label_21"));

        horizontalLayout_11->addWidget(label_21);

        visit_dateEdit = new QDateEdit(centralwidget);
        visit_dateEdit->setObjectName(QStringLiteral("visit_dateEdit"));
        visit_dateEdit->setMinimumDateTime(QDateTime(QDate(2010, 1, 1), QTime(0, 0, 0)));
        visit_dateEdit->setMaximumDate(QDate(2030, 12, 31));
        visit_dateEdit->setMinimumDate(QDate(2010, 1, 1));
        visit_dateEdit->setCalendarPopup(true);

        horizontalLayout_11->addWidget(visit_dateEdit);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_11->addItem(horizontalSpacer_4);


        verticalLayout_4->addLayout(horizontalLayout_11);

        line_2 = new QFrame(centralwidget);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);

        verticalLayout_4->addWidget(line_2);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label_22 = new QLabel(centralwidget);
        label_22->setObjectName(QStringLiteral("label_22"));

        horizontalLayout->addWidget(label_22);

        reason_comboBox = new QComboBox(centralwidget);
        reason_comboBox->setObjectName(QStringLiteral("reason_comboBox"));

        horizontalLayout->addWidget(reason_comboBox);

        label_33 = new QLabel(centralwidget);
        label_33->setObjectName(QStringLiteral("label_33"));

        horizontalLayout->addWidget(label_33);

        brend_comboBox = new QComboBox(centralwidget);
        brend_comboBox->setObjectName(QStringLiteral("brend_comboBox"));

        horizontalLayout->addWidget(brend_comboBox);


        verticalLayout_3->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_23 = new QLabel(centralwidget);
        label_23->setObjectName(QStringLiteral("label_23"));

        horizontalLayout_2->addWidget(label_23);

        doctor_comboBox = new QComboBox(centralwidget);
        doctor_comboBox->setObjectName(QStringLiteral("doctor_comboBox"));

        horizontalLayout_2->addWidget(doctor_comboBox);

        label_24 = new QLabel(centralwidget);
        label_24->setObjectName(QStringLiteral("label_24"));

        horizontalLayout_2->addWidget(label_24);

        care_agent_comboBox = new QComboBox(centralwidget);
        care_agent_comboBox->setObjectName(QStringLiteral("care_agent_comboBox"));

        horizontalLayout_2->addWidget(care_agent_comboBox);


        verticalLayout_3->addLayout(horizontalLayout_2);


        verticalLayout_4->addLayout(verticalLayout_3);

        line = new QFrame(centralwidget);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout_4->addWidget(line);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName(QStringLiteral("horizontalLayout_10"));
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_10->addItem(horizontalSpacer_3);

        label = new QLabel(centralwidget);
        label->setObjectName(QStringLiteral("label"));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        label->setTextFormat(Qt::AutoText);
        label->setScaledContents(false);
        label->setMargin(1);
        label->setIndent(-1);
        label->setOpenExternalLinks(false);

        horizontalLayout_10->addWidget(label);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_10->addItem(horizontalSpacer_2);


        verticalLayout_4->addLayout(horizontalLayout_10);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout_3->addWidget(label_2);

        od_vis_lineEdit = new QLineEdit(centralwidget);
        od_vis_lineEdit->setObjectName(QStringLiteral("od_vis_lineEdit"));

        horizontalLayout_3->addWidget(od_vis_lineEdit);

        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QStringLiteral("label_4"));

        horizontalLayout_3->addWidget(label_4);

        od_sph_lineEdit = new QLineEdit(centralwidget);
        od_sph_lineEdit->setObjectName(QStringLiteral("od_sph_lineEdit"));

        horizontalLayout_3->addWidget(od_sph_lineEdit);

        label_7 = new QLabel(centralwidget);
        label_7->setObjectName(QStringLiteral("label_7"));

        horizontalLayout_3->addWidget(label_7);

        od_cyl_lineEdit = new QLineEdit(centralwidget);
        od_cyl_lineEdit->setObjectName(QStringLiteral("od_cyl_lineEdit"));

        horizontalLayout_3->addWidget(od_cyl_lineEdit);

        label_9 = new QLabel(centralwidget);
        label_9->setObjectName(QStringLiteral("label_9"));

        horizontalLayout_3->addWidget(label_9);

        od_axis_lineEdit = new QLineEdit(centralwidget);
        od_axis_lineEdit->setObjectName(QStringLiteral("od_axis_lineEdit"));

        horizontalLayout_3->addWidget(od_axis_lineEdit);

        label_11 = new QLabel(centralwidget);
        label_11->setObjectName(QStringLiteral("label_11"));

        horizontalLayout_3->addWidget(label_11);

        od_comments_textEdit = new QTextEdit(centralwidget);
        od_comments_textEdit->setObjectName(QStringLiteral("od_comments_textEdit"));

        horizontalLayout_3->addWidget(od_comments_textEdit);


        verticalLayout_4->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout_4->addWidget(label_3);

        os_vis_lineEdit = new QLineEdit(centralwidget);
        os_vis_lineEdit->setObjectName(QStringLiteral("os_vis_lineEdit"));

        horizontalLayout_4->addWidget(os_vis_lineEdit);

        label_5 = new QLabel(centralwidget);
        label_5->setObjectName(QStringLiteral("label_5"));

        horizontalLayout_4->addWidget(label_5);

        os_sph_lineEdit = new QLineEdit(centralwidget);
        os_sph_lineEdit->setObjectName(QStringLiteral("os_sph_lineEdit"));

        horizontalLayout_4->addWidget(os_sph_lineEdit);

        label_6 = new QLabel(centralwidget);
        label_6->setObjectName(QStringLiteral("label_6"));

        horizontalLayout_4->addWidget(label_6);

        os_cyl_lineEdit = new QLineEdit(centralwidget);
        os_cyl_lineEdit->setObjectName(QStringLiteral("os_cyl_lineEdit"));

        horizontalLayout_4->addWidget(os_cyl_lineEdit);

        label_8 = new QLabel(centralwidget);
        label_8->setObjectName(QStringLiteral("label_8"));

        horizontalLayout_4->addWidget(label_8);

        os_axis_lineEdit = new QLineEdit(centralwidget);
        os_axis_lineEdit->setObjectName(QStringLiteral("os_axis_lineEdit"));

        horizontalLayout_4->addWidget(os_axis_lineEdit);

        label_10 = new QLabel(centralwidget);
        label_10->setObjectName(QStringLiteral("label_10"));

        horizontalLayout_4->addWidget(label_10);

        os_comments_textEdit = new QTextEdit(centralwidget);
        os_comments_textEdit->setObjectName(QStringLiteral("os_comments_textEdit"));

        horizontalLayout_4->addWidget(os_comments_textEdit);


        verticalLayout_4->addLayout(horizontalLayout_4);

        line_3 = new QFrame(centralwidget);
        line_3->setObjectName(QStringLiteral("line_3"));
        line_3->setFrameShape(QFrame::HLine);
        line_3->setFrameShadow(QFrame::Sunken);

        verticalLayout_4->addWidget(line_3);

        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        verticalLayout_2 = new QVBoxLayout(tab);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QStringLiteral("horizontalLayout_9"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        label_13 = new QLabel(tab);
        label_13->setObjectName(QStringLiteral("label_13"));

        horizontalLayout_6->addWidget(label_13);

        od_sph_mkl_lineEdit = new QLineEdit(tab);
        od_sph_mkl_lineEdit->setObjectName(QStringLiteral("od_sph_mkl_lineEdit"));

        horizontalLayout_6->addWidget(od_sph_mkl_lineEdit);

        label_15 = new QLabel(tab);
        label_15->setObjectName(QStringLiteral("label_15"));

        horizontalLayout_6->addWidget(label_15);

        od_cyl_mkl_lineEdit = new QLineEdit(tab);
        od_cyl_mkl_lineEdit->setObjectName(QStringLiteral("od_cyl_mkl_lineEdit"));

        horizontalLayout_6->addWidget(od_cyl_mkl_lineEdit);

        label_19 = new QLabel(tab);
        label_19->setObjectName(QStringLiteral("label_19"));

        horizontalLayout_6->addWidget(label_19);

        od_axis_mkl_lineEdit = new QLineEdit(tab);
        od_axis_mkl_lineEdit->setObjectName(QStringLiteral("od_axis_mkl_lineEdit"));

        horizontalLayout_6->addWidget(od_axis_mkl_lineEdit);

        label_17 = new QLabel(tab);
        label_17->setObjectName(QStringLiteral("label_17"));

        horizontalLayout_6->addWidget(label_17);

        bc_mlk_lineEdit = new QLineEdit(tab);
        bc_mlk_lineEdit->setObjectName(QStringLiteral("bc_mlk_lineEdit"));

        horizontalLayout_6->addWidget(bc_mlk_lineEdit);


        verticalLayout->addLayout(horizontalLayout_6);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        label_18 = new QLabel(tab);
        label_18->setObjectName(QStringLiteral("label_18"));

        horizontalLayout_7->addWidget(label_18);

        os_sph_mkl_lineEdit = new QLineEdit(tab);
        os_sph_mkl_lineEdit->setObjectName(QStringLiteral("os_sph_mkl_lineEdit"));

        horizontalLayout_7->addWidget(os_sph_mkl_lineEdit);

        label_14 = new QLabel(tab);
        label_14->setObjectName(QStringLiteral("label_14"));

        horizontalLayout_7->addWidget(label_14);

        os_cyl_mkl_lineEdit = new QLineEdit(tab);
        os_cyl_mkl_lineEdit->setObjectName(QStringLiteral("os_cyl_mkl_lineEdit"));

        horizontalLayout_7->addWidget(os_cyl_mkl_lineEdit);

        label_16 = new QLabel(tab);
        label_16->setObjectName(QStringLiteral("label_16"));

        horizontalLayout_7->addWidget(label_16);

        os_axis_mkl_lineEdit = new QLineEdit(tab);
        os_axis_mkl_lineEdit->setObjectName(QStringLiteral("os_axis_mkl_lineEdit"));

        horizontalLayout_7->addWidget(os_axis_mkl_lineEdit);

        label_12 = new QLabel(tab);
        label_12->setObjectName(QStringLiteral("label_12"));

        horizontalLayout_7->addWidget(label_12);

        dpp_mkl_lineEdit = new QLineEdit(tab);
        dpp_mkl_lineEdit->setObjectName(QStringLiteral("dpp_mkl_lineEdit"));

        horizontalLayout_7->addWidget(dpp_mkl_lineEdit);


        verticalLayout->addLayout(horizontalLayout_7);


        horizontalLayout_9->addLayout(verticalLayout);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        label_20 = new QLabel(tab);
        label_20->setObjectName(QStringLiteral("label_20"));

        horizontalLayout_8->addWidget(label_20);

        bms_mlk_textEdit = new QTextEdit(tab);
        bms_mlk_textEdit->setObjectName(QStringLiteral("bms_mlk_textEdit"));

        horizontalLayout_8->addWidget(bms_mlk_textEdit);


        horizontalLayout_9->addLayout(horizontalLayout_8);


        verticalLayout_2->addLayout(horizontalLayout_9);

        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        horizontalLayout_16 = new QHBoxLayout(tab_2);
        horizontalLayout_16->setObjectName(QStringLiteral("horizontalLayout_16"));
        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setObjectName(QStringLiteral("horizontalLayout_12"));
        label_30 = new QLabel(tab_2);
        label_30->setObjectName(QStringLiteral("label_30"));

        horizontalLayout_12->addWidget(label_30);

        od_sph_ochki_lineEdit = new QLineEdit(tab_2);
        od_sph_ochki_lineEdit->setObjectName(QStringLiteral("od_sph_ochki_lineEdit"));

        horizontalLayout_12->addWidget(od_sph_ochki_lineEdit);

        label_29 = new QLabel(tab_2);
        label_29->setObjectName(QStringLiteral("label_29"));

        horizontalLayout_12->addWidget(label_29);

        od_cyl_ochki_lineEdit = new QLineEdit(tab_2);
        od_cyl_ochki_lineEdit->setObjectName(QStringLiteral("od_cyl_ochki_lineEdit"));

        horizontalLayout_12->addWidget(od_cyl_ochki_lineEdit);

        label_31 = new QLabel(tab_2);
        label_31->setObjectName(QStringLiteral("label_31"));

        horizontalLayout_12->addWidget(label_31);

        od_axis_ochki_lineEdit = new QLineEdit(tab_2);
        od_axis_ochki_lineEdit->setObjectName(QStringLiteral("od_axis_ochki_lineEdit"));

        horizontalLayout_12->addWidget(od_axis_ochki_lineEdit);


        verticalLayout_5->addLayout(horizontalLayout_12);

        horizontalLayout_13 = new QHBoxLayout();
        horizontalLayout_13->setObjectName(QStringLiteral("horizontalLayout_13"));
        label_25 = new QLabel(tab_2);
        label_25->setObjectName(QStringLiteral("label_25"));

        horizontalLayout_13->addWidget(label_25);

        os_sph_ochki_lineEdit = new QLineEdit(tab_2);
        os_sph_ochki_lineEdit->setObjectName(QStringLiteral("os_sph_ochki_lineEdit"));

        horizontalLayout_13->addWidget(os_sph_ochki_lineEdit);

        label_28 = new QLabel(tab_2);
        label_28->setObjectName(QStringLiteral("label_28"));

        horizontalLayout_13->addWidget(label_28);

        os_cyl_ochki_lineEdit = new QLineEdit(tab_2);
        os_cyl_ochki_lineEdit->setObjectName(QStringLiteral("os_cyl_ochki_lineEdit"));

        horizontalLayout_13->addWidget(os_cyl_ochki_lineEdit);

        label_26 = new QLabel(tab_2);
        label_26->setObjectName(QStringLiteral("label_26"));

        horizontalLayout_13->addWidget(label_26);

        os_axis_ochki_lineEdit = new QLineEdit(tab_2);
        os_axis_ochki_lineEdit->setObjectName(QStringLiteral("os_axis_ochki_lineEdit"));

        horizontalLayout_13->addWidget(os_axis_ochki_lineEdit);


        verticalLayout_5->addLayout(horizontalLayout_13);

        horizontalLayout_14 = new QHBoxLayout();
        horizontalLayout_14->setObjectName(QStringLiteral("horizontalLayout_14"));
        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_14->addItem(horizontalSpacer_5);

        label_27 = new QLabel(tab_2);
        label_27->setObjectName(QStringLiteral("label_27"));

        horizontalLayout_14->addWidget(label_27);

        Dpp_ochki_lineEdit = new QLineEdit(tab_2);
        Dpp_ochki_lineEdit->setObjectName(QStringLiteral("Dpp_ochki_lineEdit"));

        horizontalLayout_14->addWidget(Dpp_ochki_lineEdit);


        verticalLayout_5->addLayout(horizontalLayout_14);


        horizontalLayout_16->addLayout(verticalLayout_5);

        horizontalLayout_15 = new QHBoxLayout();
        horizontalLayout_15->setObjectName(QStringLiteral("horizontalLayout_15"));
        label_32 = new QLabel(tab_2);
        label_32->setObjectName(QStringLiteral("label_32"));

        horizontalLayout_15->addWidget(label_32);

        comments_ochki_textEdit = new QTextEdit(tab_2);
        comments_ochki_textEdit->setObjectName(QStringLiteral("comments_ochki_textEdit"));

        horizontalLayout_15->addWidget(comments_ochki_textEdit);


        horizontalLayout_16->addLayout(horizontalLayout_15);

        tabWidget->addTab(tab_2, QString());

        verticalLayout_4->addWidget(tabWidget);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer);

        add_pushButton = new QPushButton(centralwidget);
        add_pushButton->setObjectName(QStringLiteral("add_pushButton"));

        horizontalLayout_5->addWidget(add_pushButton);

        cancel_pushButton = new QPushButton(centralwidget);
        cancel_pushButton->setObjectName(QStringLiteral("cancel_pushButton"));

        horizontalLayout_5->addWidget(cancel_pushButton);


        verticalLayout_4->addLayout(horizontalLayout_5);

        visit_info->setCentralWidget(centralwidget);
        tabWidget->raise();
        line->raise();
        line_2->raise();
        line_3->raise();
        menubar = new QMenuBar(visit_info);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 587, 21));
        visit_info->setMenuBar(menubar);
        statusbar = new QStatusBar(visit_info);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        visit_info->setStatusBar(statusbar);

        retranslateUi(visit_info);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(visit_info);
    } // setupUi

    void retranslateUi(QMainWindow *visit_info)
    {
        visit_info->setWindowTitle(QApplication::translate("visit_info", "\320\236\321\201\320\274\320\276\321\202\321\200", 0));
        label_21->setText(QApplication::translate("visit_info", "\320\224\320\260\321\202\320\260 \320\262\320\270\320\267\320\270\321\202\320\260", 0));
        label_22->setText(QApplication::translate("visit_info", "\320\237\321\200\320\270\321\207\320\270\320\275\320\260 \320\276\320\261\321\200\320\260\321\211\320\265\320\275\320\270\321\217", 0));
        label_33->setText(QApplication::translate("visit_info", "\320\221\321\200\320\265\320\275\320\264", 0));
        label_23->setText(QApplication::translate("visit_info", "\320\222\321\200\320\260\321\207", 0));
        label_24->setText(QApplication::translate("visit_info", "\320\241\321\200\320\265\320\264\321\201\321\202\320\262\320\276 \321\203\321\205\320\276\320\264\320\260", 0));
        label->setText(QApplication::translate("visit_info", "\320\236\321\201\320\274\320\276\321\202\321\200", 0));
        label_2->setText(QApplication::translate("visit_info", "VisOD:", 0));
        label_4->setText(QApplication::translate("visit_info", "sph:", 0));
        label_7->setText(QApplication::translate("visit_info", "cyl:", 0));
        label_9->setText(QApplication::translate("visit_info", "axis:", 0));
        label_11->setText(QApplication::translate("visit_info", "\320\232\320\276\320\274\320\274\320\265\320\275\321\202\320\260\321\200\320\270\320\271", 0));
        label_3->setText(QApplication::translate("visit_info", "VisOS:", 0));
        label_5->setText(QApplication::translate("visit_info", "sph:", 0));
        label_6->setText(QApplication::translate("visit_info", "cyl:", 0));
        label_8->setText(QApplication::translate("visit_info", "asix:", 0));
        label_10->setText(QApplication::translate("visit_info", "\320\232\320\276\320\274\320\274\320\265\320\275\321\202\320\260\321\200\320\270\320\271", 0));
        label_13->setText(QApplication::translate("visit_info", "OD Sph:", 0));
        label_15->setText(QApplication::translate("visit_info", "Cyl:", 0));
        label_19->setText(QApplication::translate("visit_info", "axis:", 0));
        label_17->setText(QApplication::translate("visit_info", "BC:", 0));
        label_18->setText(QApplication::translate("visit_info", "OS Sph:", 0));
        label_14->setText(QApplication::translate("visit_info", "Cyl:", 0));
        label_16->setText(QApplication::translate("visit_info", "axis:", 0));
        label_12->setText(QApplication::translate("visit_info", "Dpp:", 0));
        label_20->setText(QApplication::translate("visit_info", "\320\221\320\234\320\241", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("visit_info", "\320\234\320\233\320\232", 0));
        label_30->setText(QApplication::translate("visit_info", "OD Sph:", 0));
        label_29->setText(QApplication::translate("visit_info", "Cyl:", 0));
        label_31->setText(QApplication::translate("visit_info", "axis:", 0));
        label_25->setText(QApplication::translate("visit_info", "OS Sph:", 0));
        label_28->setText(QApplication::translate("visit_info", "Cyl:", 0));
        label_26->setText(QApplication::translate("visit_info", "axis:", 0));
        label_27->setText(QApplication::translate("visit_info", "Dpp:", 0));
        label_32->setText(QApplication::translate("visit_info", "\320\237\321\200\320\270\320\274\320\265\321\207\320\260\320\275\320\270\321\217", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("visit_info", "\320\236\321\207\320\272\320\270", 0));
        add_pushButton->setText(QApplication::translate("visit_info", "\320\236\320\272", 0));
        cancel_pushButton->setText(QApplication::translate("visit_info", "\320\236\321\202\320\274\320\265\320\275\320\270\321\202\321\214", 0));
    } // retranslateUi

};

namespace Ui {
    class visit_info: public Ui_visit_info {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VISIT_INFO_H
