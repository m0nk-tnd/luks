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
#include <QtWidgets/QSplitter>
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
    QVBoxLayout *verticalLayout_6;
    QFrame *frame;
    QVBoxLayout *verticalLayout;
    QSplitter *splitter;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label_35;
    QLabel *label_21;
    QDateEdit *visit_dateEdit;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_22;
    QComboBox *reason_comboBox;
    QFrame *line;
    QHBoxLayout *horizontalLayout_7;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_23;
    QComboBox *doctor_comboBox;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_33;
    QComboBox *brend_comboBox;
    QHBoxLayout *horizontalLayout_8;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_34;
    QComboBox *goods_comboBox;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_24;
    QComboBox *care_agent_comboBox;
    QFrame *frame_2;
    QHBoxLayout *horizontalLayout_27;
    QVBoxLayout *verticalLayout_2;
    QLabel *label;
    QHBoxLayout *horizontalLayout_9;
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
    QHBoxLayout *horizontalLayout_10;
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
    QFrame *frame_3;
    QHBoxLayout *horizontalLayout_28;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_43;
    QHBoxLayout *horizontalLayout_15;
    QHBoxLayout *horizontalLayout_11;
    QLabel *label_36;
    QLineEdit *od_r1_lineEdit;
    QLabel *label_37;
    QLineEdit *od_r2_lineEdit;
    QHBoxLayout *horizontalLayout_13;
    QLabel *label_40;
    QLineEdit *bc_lineEdit;
    QLabel *label_41;
    QLineEdit *dia_lineEdit;
    QHBoxLayout *horizontalLayout_16;
    QHBoxLayout *horizontalLayout_12;
    QLabel *label_39;
    QLineEdit *os_r1_lineEdit;
    QLabel *label_38;
    QLineEdit *os_r2_lineEdit;
    QHBoxLayout *horizontalLayout_14;
    QLabel *label_42;
    QLineEdit *dpp_lineEdit;
    QTabWidget *tabWidget;
    QWidget *tab;
    QHBoxLayout *horizontalLayout_21;
    QHBoxLayout *horizontalLayout_20;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_17;
    QLabel *label_13;
    QLineEdit *od_sph_mkl_lineEdit;
    QLabel *label_15;
    QLineEdit *od_cyl_mkl_lineEdit;
    QLabel *label_19;
    QLineEdit *od_axis_mkl_lineEdit;
    QLabel *label_17;
    QLineEdit *bc_mlk_lineEdit;
    QHBoxLayout *horizontalLayout_18;
    QLabel *label_18;
    QLineEdit *os_sph_mkl_lineEdit;
    QLabel *label_14;
    QLineEdit *os_cyl_mkl_lineEdit;
    QLabel *label_16;
    QLineEdit *os_axis_mkl_lineEdit;
    QLabel *label_12;
    QLineEdit *dpp_mkl_lineEdit;
    QHBoxLayout *horizontalLayout_19;
    QLabel *label_20;
    QTextEdit *bms_mlk_textEdit;
    QWidget *tab_2;
    QHBoxLayout *horizontalLayout_26;
    QHBoxLayout *horizontalLayout_25;
    QVBoxLayout *verticalLayout_5;
    QHBoxLayout *horizontalLayout_22;
    QLabel *label_30;
    QLineEdit *od_sph_ochki_lineEdit;
    QLabel *label_29;
    QLineEdit *od_cyl_ochki_lineEdit;
    QLabel *label_31;
    QLineEdit *od_axis_ochki_lineEdit;
    QHBoxLayout *horizontalLayout_23;
    QLabel *label_25;
    QLineEdit *os_sph_ochki_lineEdit;
    QLabel *label_28;
    QLineEdit *os_cyl_ochki_lineEdit;
    QLabel *label_26;
    QLineEdit *os_axis_ochki_lineEdit;
    QHBoxLayout *horizontalLayout_24;
    QLabel *label_27;
    QLineEdit *dpp_ochki_lineEdit;
    QLabel *label_32;
    QTextEdit *comments_ochki_textEdit;
    QSpacerItem *verticalSpacer_2;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_29;
    QPushButton *add_pushButton;
    QPushButton *cancel_pushButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *visit_info)
    {
        if (visit_info->objectName().isEmpty())
            visit_info->setObjectName(QStringLiteral("visit_info"));
        visit_info->resize(698, 647);
        QFont font;
        font.setPointSize(9);
        visit_info->setFont(font);
        QIcon icon;
        icon.addFile(QStringLiteral(":/icon/icon-face-glasses.png"), QSize(), QIcon::Normal, QIcon::Off);
        visit_info->setWindowIcon(icon);
        centralwidget = new QWidget(visit_info);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        verticalLayout_6 = new QVBoxLayout(centralwidget);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        frame = new QFrame(centralwidget);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setFrameShape(QFrame::Box);
        frame->setFrameShadow(QFrame::Raised);
        verticalLayout = new QVBoxLayout(frame);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        splitter = new QSplitter(frame);
        splitter->setObjectName(QStringLiteral("splitter"));
        splitter->setOrientation(Qt::Horizontal);
        layoutWidget = new QWidget(splitter);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label_35 = new QLabel(layoutWidget);
        label_35->setObjectName(QStringLiteral("label_35"));
        label_35->setPixmap(QPixmap(QString::fromUtf8(":/icon/icon-calendar.png")));

        horizontalLayout->addWidget(label_35);

        label_21 = new QLabel(layoutWidget);
        label_21->setObjectName(QStringLiteral("label_21"));
        QFont font1;
        font1.setBold(true);
        font1.setWeight(75);
        label_21->setFont(font1);

        horizontalLayout->addWidget(label_21);

        visit_dateEdit = new QDateEdit(layoutWidget);
        visit_dateEdit->setObjectName(QStringLiteral("visit_dateEdit"));
        visit_dateEdit->setMinimumDateTime(QDateTime(QDate(2010, 1, 1), QTime(0, 0, 0)));
        visit_dateEdit->setMaximumDate(QDate(2030, 12, 31));
        visit_dateEdit->setMinimumDate(QDate(2010, 1, 1));
        visit_dateEdit->setCalendarPopup(true);

        horizontalLayout->addWidget(visit_dateEdit);

        splitter->addWidget(layoutWidget);
        layoutWidget1 = new QWidget(splitter);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget1);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_22 = new QLabel(layoutWidget1);
        label_22->setObjectName(QStringLiteral("label_22"));
        label_22->setFont(font1);

        horizontalLayout_2->addWidget(label_22);

        reason_comboBox = new QComboBox(layoutWidget1);
        reason_comboBox->setObjectName(QStringLiteral("reason_comboBox"));

        horizontalLayout_2->addWidget(reason_comboBox);

        splitter->addWidget(layoutWidget1);

        verticalLayout->addWidget(splitter);

        line = new QFrame(frame);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_23 = new QLabel(frame);
        label_23->setObjectName(QStringLiteral("label_23"));
        label_23->setFont(font1);

        horizontalLayout_3->addWidget(label_23);

        doctor_comboBox = new QComboBox(frame);
        doctor_comboBox->setObjectName(QStringLiteral("doctor_comboBox"));

        horizontalLayout_3->addWidget(doctor_comboBox);


        horizontalLayout_7->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        label_33 = new QLabel(frame);
        label_33->setObjectName(QStringLiteral("label_33"));
        label_33->setFont(font1);

        horizontalLayout_4->addWidget(label_33);

        brend_comboBox = new QComboBox(frame);
        brend_comboBox->setObjectName(QStringLiteral("brend_comboBox"));

        horizontalLayout_4->addWidget(brend_comboBox);


        horizontalLayout_7->addLayout(horizontalLayout_4);


        verticalLayout->addLayout(horizontalLayout_7);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        label_34 = new QLabel(frame);
        label_34->setObjectName(QStringLiteral("label_34"));
        label_34->setFont(font1);

        horizontalLayout_5->addWidget(label_34);

        goods_comboBox = new QComboBox(frame);
        goods_comboBox->setObjectName(QStringLiteral("goods_comboBox"));

        horizontalLayout_5->addWidget(goods_comboBox);


        horizontalLayout_8->addLayout(horizontalLayout_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        label_24 = new QLabel(frame);
        label_24->setObjectName(QStringLiteral("label_24"));
        label_24->setFont(font1);

        horizontalLayout_6->addWidget(label_24);

        care_agent_comboBox = new QComboBox(frame);
        care_agent_comboBox->setObjectName(QStringLiteral("care_agent_comboBox"));

        horizontalLayout_6->addWidget(care_agent_comboBox);


        horizontalLayout_8->addLayout(horizontalLayout_6);


        verticalLayout->addLayout(horizontalLayout_8);


        verticalLayout_6->addWidget(frame);

        frame_2 = new QFrame(centralwidget);
        frame_2->setObjectName(QStringLiteral("frame_2"));
        frame_2->setFrameShape(QFrame::Box);
        frame_2->setFrameShadow(QFrame::Raised);
        horizontalLayout_27 = new QHBoxLayout(frame_2);
        horizontalLayout_27->setObjectName(QStringLiteral("horizontalLayout_27"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        label = new QLabel(frame_2);
        label->setObjectName(QStringLiteral("label"));
        label->setFont(font1);
        label->setTextFormat(Qt::AutoText);
        label->setScaledContents(false);
        label->setMargin(1);
        label->setIndent(-1);
        label->setOpenExternalLinks(false);

        verticalLayout_2->addWidget(label);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QStringLiteral("horizontalLayout_9"));
        label_2 = new QLabel(frame_2);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout_9->addWidget(label_2);

        od_vis_lineEdit = new QLineEdit(frame_2);
        od_vis_lineEdit->setObjectName(QStringLiteral("od_vis_lineEdit"));
        od_vis_lineEdit->setClearButtonEnabled(false);

        horizontalLayout_9->addWidget(od_vis_lineEdit);

        label_4 = new QLabel(frame_2);
        label_4->setObjectName(QStringLiteral("label_4"));

        horizontalLayout_9->addWidget(label_4);

        od_sph_lineEdit = new QLineEdit(frame_2);
        od_sph_lineEdit->setObjectName(QStringLiteral("od_sph_lineEdit"));

        horizontalLayout_9->addWidget(od_sph_lineEdit);

        label_7 = new QLabel(frame_2);
        label_7->setObjectName(QStringLiteral("label_7"));

        horizontalLayout_9->addWidget(label_7);

        od_cyl_lineEdit = new QLineEdit(frame_2);
        od_cyl_lineEdit->setObjectName(QStringLiteral("od_cyl_lineEdit"));

        horizontalLayout_9->addWidget(od_cyl_lineEdit);

        label_9 = new QLabel(frame_2);
        label_9->setObjectName(QStringLiteral("label_9"));

        horizontalLayout_9->addWidget(label_9);

        od_axis_lineEdit = new QLineEdit(frame_2);
        od_axis_lineEdit->setObjectName(QStringLiteral("od_axis_lineEdit"));

        horizontalLayout_9->addWidget(od_axis_lineEdit);

        label_11 = new QLabel(frame_2);
        label_11->setObjectName(QStringLiteral("label_11"));

        horizontalLayout_9->addWidget(label_11);

        od_comments_textEdit = new QTextEdit(frame_2);
        od_comments_textEdit->setObjectName(QStringLiteral("od_comments_textEdit"));

        horizontalLayout_9->addWidget(od_comments_textEdit);


        verticalLayout_2->addLayout(horizontalLayout_9);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName(QStringLiteral("horizontalLayout_10"));
        label_3 = new QLabel(frame_2);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout_10->addWidget(label_3);

        os_vis_lineEdit = new QLineEdit(frame_2);
        os_vis_lineEdit->setObjectName(QStringLiteral("os_vis_lineEdit"));

        horizontalLayout_10->addWidget(os_vis_lineEdit);

        label_5 = new QLabel(frame_2);
        label_5->setObjectName(QStringLiteral("label_5"));

        horizontalLayout_10->addWidget(label_5);

        os_sph_lineEdit = new QLineEdit(frame_2);
        os_sph_lineEdit->setObjectName(QStringLiteral("os_sph_lineEdit"));

        horizontalLayout_10->addWidget(os_sph_lineEdit);

        label_6 = new QLabel(frame_2);
        label_6->setObjectName(QStringLiteral("label_6"));

        horizontalLayout_10->addWidget(label_6);

        os_cyl_lineEdit = new QLineEdit(frame_2);
        os_cyl_lineEdit->setObjectName(QStringLiteral("os_cyl_lineEdit"));

        horizontalLayout_10->addWidget(os_cyl_lineEdit);

        label_8 = new QLabel(frame_2);
        label_8->setObjectName(QStringLiteral("label_8"));

        horizontalLayout_10->addWidget(label_8);

        os_axis_lineEdit = new QLineEdit(frame_2);
        os_axis_lineEdit->setObjectName(QStringLiteral("os_axis_lineEdit"));

        horizontalLayout_10->addWidget(os_axis_lineEdit);

        label_10 = new QLabel(frame_2);
        label_10->setObjectName(QStringLiteral("label_10"));

        horizontalLayout_10->addWidget(label_10);

        os_comments_textEdit = new QTextEdit(frame_2);
        os_comments_textEdit->setObjectName(QStringLiteral("os_comments_textEdit"));

        horizontalLayout_10->addWidget(os_comments_textEdit);


        verticalLayout_2->addLayout(horizontalLayout_10);


        horizontalLayout_27->addLayout(verticalLayout_2);


        verticalLayout_6->addWidget(frame_2);

        frame_3 = new QFrame(centralwidget);
        frame_3->setObjectName(QStringLiteral("frame_3"));
        frame_3->setFrameShape(QFrame::Box);
        frame_3->setFrameShadow(QFrame::Raised);
        horizontalLayout_28 = new QHBoxLayout(frame_3);
        horizontalLayout_28->setObjectName(QStringLiteral("horizontalLayout_28"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        label_43 = new QLabel(frame_3);
        label_43->setObjectName(QStringLiteral("label_43"));
        label_43->setFont(font1);
        label_43->setTextFormat(Qt::AutoText);
        label_43->setScaledContents(false);
        label_43->setMargin(1);
        label_43->setIndent(-1);
        label_43->setOpenExternalLinks(false);

        verticalLayout_3->addWidget(label_43);

        horizontalLayout_15 = new QHBoxLayout();
        horizontalLayout_15->setObjectName(QStringLiteral("horizontalLayout_15"));
        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setObjectName(QStringLiteral("horizontalLayout_11"));
        label_36 = new QLabel(frame_3);
        label_36->setObjectName(QStringLiteral("label_36"));

        horizontalLayout_11->addWidget(label_36);

        od_r1_lineEdit = new QLineEdit(frame_3);
        od_r1_lineEdit->setObjectName(QStringLiteral("od_r1_lineEdit"));

        horizontalLayout_11->addWidget(od_r1_lineEdit);

        label_37 = new QLabel(frame_3);
        label_37->setObjectName(QStringLiteral("label_37"));

        horizontalLayout_11->addWidget(label_37);

        od_r2_lineEdit = new QLineEdit(frame_3);
        od_r2_lineEdit->setObjectName(QStringLiteral("od_r2_lineEdit"));

        horizontalLayout_11->addWidget(od_r2_lineEdit);


        horizontalLayout_15->addLayout(horizontalLayout_11);

        horizontalLayout_13 = new QHBoxLayout();
        horizontalLayout_13->setObjectName(QStringLiteral("horizontalLayout_13"));
        label_40 = new QLabel(frame_3);
        label_40->setObjectName(QStringLiteral("label_40"));

        horizontalLayout_13->addWidget(label_40);

        bc_lineEdit = new QLineEdit(frame_3);
        bc_lineEdit->setObjectName(QStringLiteral("bc_lineEdit"));

        horizontalLayout_13->addWidget(bc_lineEdit);

        label_41 = new QLabel(frame_3);
        label_41->setObjectName(QStringLiteral("label_41"));

        horizontalLayout_13->addWidget(label_41);

        dia_lineEdit = new QLineEdit(frame_3);
        dia_lineEdit->setObjectName(QStringLiteral("dia_lineEdit"));

        horizontalLayout_13->addWidget(dia_lineEdit);


        horizontalLayout_15->addLayout(horizontalLayout_13);


        verticalLayout_3->addLayout(horizontalLayout_15);

        horizontalLayout_16 = new QHBoxLayout();
        horizontalLayout_16->setObjectName(QStringLiteral("horizontalLayout_16"));
        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setObjectName(QStringLiteral("horizontalLayout_12"));
        label_39 = new QLabel(frame_3);
        label_39->setObjectName(QStringLiteral("label_39"));

        horizontalLayout_12->addWidget(label_39);

        os_r1_lineEdit = new QLineEdit(frame_3);
        os_r1_lineEdit->setObjectName(QStringLiteral("os_r1_lineEdit"));

        horizontalLayout_12->addWidget(os_r1_lineEdit);

        label_38 = new QLabel(frame_3);
        label_38->setObjectName(QStringLiteral("label_38"));

        horizontalLayout_12->addWidget(label_38);

        os_r2_lineEdit = new QLineEdit(frame_3);
        os_r2_lineEdit->setObjectName(QStringLiteral("os_r2_lineEdit"));

        horizontalLayout_12->addWidget(os_r2_lineEdit);


        horizontalLayout_16->addLayout(horizontalLayout_12);

        horizontalLayout_14 = new QHBoxLayout();
        horizontalLayout_14->setObjectName(QStringLiteral("horizontalLayout_14"));
        label_42 = new QLabel(frame_3);
        label_42->setObjectName(QStringLiteral("label_42"));

        horizontalLayout_14->addWidget(label_42);

        dpp_lineEdit = new QLineEdit(frame_3);
        dpp_lineEdit->setObjectName(QStringLiteral("dpp_lineEdit"));

        horizontalLayout_14->addWidget(dpp_lineEdit);


        horizontalLayout_16->addLayout(horizontalLayout_14);


        verticalLayout_3->addLayout(horizontalLayout_16);


        horizontalLayout_28->addLayout(verticalLayout_3);


        verticalLayout_6->addWidget(frame_3);

        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        horizontalLayout_21 = new QHBoxLayout(tab);
        horizontalLayout_21->setObjectName(QStringLiteral("horizontalLayout_21"));
        horizontalLayout_20 = new QHBoxLayout();
        horizontalLayout_20->setObjectName(QStringLiteral("horizontalLayout_20"));
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        horizontalLayout_17 = new QHBoxLayout();
        horizontalLayout_17->setObjectName(QStringLiteral("horizontalLayout_17"));
        label_13 = new QLabel(tab);
        label_13->setObjectName(QStringLiteral("label_13"));

        horizontalLayout_17->addWidget(label_13);

        od_sph_mkl_lineEdit = new QLineEdit(tab);
        od_sph_mkl_lineEdit->setObjectName(QStringLiteral("od_sph_mkl_lineEdit"));

        horizontalLayout_17->addWidget(od_sph_mkl_lineEdit);

        label_15 = new QLabel(tab);
        label_15->setObjectName(QStringLiteral("label_15"));

        horizontalLayout_17->addWidget(label_15);

        od_cyl_mkl_lineEdit = new QLineEdit(tab);
        od_cyl_mkl_lineEdit->setObjectName(QStringLiteral("od_cyl_mkl_lineEdit"));

        horizontalLayout_17->addWidget(od_cyl_mkl_lineEdit);

        label_19 = new QLabel(tab);
        label_19->setObjectName(QStringLiteral("label_19"));

        horizontalLayout_17->addWidget(label_19);

        od_axis_mkl_lineEdit = new QLineEdit(tab);
        od_axis_mkl_lineEdit->setObjectName(QStringLiteral("od_axis_mkl_lineEdit"));

        horizontalLayout_17->addWidget(od_axis_mkl_lineEdit);

        label_17 = new QLabel(tab);
        label_17->setObjectName(QStringLiteral("label_17"));

        horizontalLayout_17->addWidget(label_17);

        bc_mlk_lineEdit = new QLineEdit(tab);
        bc_mlk_lineEdit->setObjectName(QStringLiteral("bc_mlk_lineEdit"));

        horizontalLayout_17->addWidget(bc_mlk_lineEdit);


        verticalLayout_4->addLayout(horizontalLayout_17);

        horizontalLayout_18 = new QHBoxLayout();
        horizontalLayout_18->setObjectName(QStringLiteral("horizontalLayout_18"));
        label_18 = new QLabel(tab);
        label_18->setObjectName(QStringLiteral("label_18"));

        horizontalLayout_18->addWidget(label_18);

        os_sph_mkl_lineEdit = new QLineEdit(tab);
        os_sph_mkl_lineEdit->setObjectName(QStringLiteral("os_sph_mkl_lineEdit"));

        horizontalLayout_18->addWidget(os_sph_mkl_lineEdit);

        label_14 = new QLabel(tab);
        label_14->setObjectName(QStringLiteral("label_14"));

        horizontalLayout_18->addWidget(label_14);

        os_cyl_mkl_lineEdit = new QLineEdit(tab);
        os_cyl_mkl_lineEdit->setObjectName(QStringLiteral("os_cyl_mkl_lineEdit"));

        horizontalLayout_18->addWidget(os_cyl_mkl_lineEdit);

        label_16 = new QLabel(tab);
        label_16->setObjectName(QStringLiteral("label_16"));

        horizontalLayout_18->addWidget(label_16);

        os_axis_mkl_lineEdit = new QLineEdit(tab);
        os_axis_mkl_lineEdit->setObjectName(QStringLiteral("os_axis_mkl_lineEdit"));

        horizontalLayout_18->addWidget(os_axis_mkl_lineEdit);

        label_12 = new QLabel(tab);
        label_12->setObjectName(QStringLiteral("label_12"));

        horizontalLayout_18->addWidget(label_12);

        dpp_mkl_lineEdit = new QLineEdit(tab);
        dpp_mkl_lineEdit->setObjectName(QStringLiteral("dpp_mkl_lineEdit"));

        horizontalLayout_18->addWidget(dpp_mkl_lineEdit);


        verticalLayout_4->addLayout(horizontalLayout_18);


        horizontalLayout_20->addLayout(verticalLayout_4);

        horizontalLayout_19 = new QHBoxLayout();
        horizontalLayout_19->setObjectName(QStringLiteral("horizontalLayout_19"));
        label_20 = new QLabel(tab);
        label_20->setObjectName(QStringLiteral("label_20"));

        horizontalLayout_19->addWidget(label_20);

        bms_mlk_textEdit = new QTextEdit(tab);
        bms_mlk_textEdit->setObjectName(QStringLiteral("bms_mlk_textEdit"));

        horizontalLayout_19->addWidget(bms_mlk_textEdit);


        horizontalLayout_20->addLayout(horizontalLayout_19);


        horizontalLayout_21->addLayout(horizontalLayout_20);

        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        horizontalLayout_26 = new QHBoxLayout(tab_2);
        horizontalLayout_26->setObjectName(QStringLiteral("horizontalLayout_26"));
        horizontalLayout_25 = new QHBoxLayout();
        horizontalLayout_25->setObjectName(QStringLiteral("horizontalLayout_25"));
        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        horizontalLayout_22 = new QHBoxLayout();
        horizontalLayout_22->setObjectName(QStringLiteral("horizontalLayout_22"));
        label_30 = new QLabel(tab_2);
        label_30->setObjectName(QStringLiteral("label_30"));

        horizontalLayout_22->addWidget(label_30);

        od_sph_ochki_lineEdit = new QLineEdit(tab_2);
        od_sph_ochki_lineEdit->setObjectName(QStringLiteral("od_sph_ochki_lineEdit"));

        horizontalLayout_22->addWidget(od_sph_ochki_lineEdit);

        label_29 = new QLabel(tab_2);
        label_29->setObjectName(QStringLiteral("label_29"));

        horizontalLayout_22->addWidget(label_29);

        od_cyl_ochki_lineEdit = new QLineEdit(tab_2);
        od_cyl_ochki_lineEdit->setObjectName(QStringLiteral("od_cyl_ochki_lineEdit"));

        horizontalLayout_22->addWidget(od_cyl_ochki_lineEdit);

        label_31 = new QLabel(tab_2);
        label_31->setObjectName(QStringLiteral("label_31"));

        horizontalLayout_22->addWidget(label_31);

        od_axis_ochki_lineEdit = new QLineEdit(tab_2);
        od_axis_ochki_lineEdit->setObjectName(QStringLiteral("od_axis_ochki_lineEdit"));

        horizontalLayout_22->addWidget(od_axis_ochki_lineEdit);


        verticalLayout_5->addLayout(horizontalLayout_22);

        horizontalLayout_23 = new QHBoxLayout();
        horizontalLayout_23->setObjectName(QStringLiteral("horizontalLayout_23"));
        label_25 = new QLabel(tab_2);
        label_25->setObjectName(QStringLiteral("label_25"));

        horizontalLayout_23->addWidget(label_25);

        os_sph_ochki_lineEdit = new QLineEdit(tab_2);
        os_sph_ochki_lineEdit->setObjectName(QStringLiteral("os_sph_ochki_lineEdit"));

        horizontalLayout_23->addWidget(os_sph_ochki_lineEdit);

        label_28 = new QLabel(tab_2);
        label_28->setObjectName(QStringLiteral("label_28"));

        horizontalLayout_23->addWidget(label_28);

        os_cyl_ochki_lineEdit = new QLineEdit(tab_2);
        os_cyl_ochki_lineEdit->setObjectName(QStringLiteral("os_cyl_ochki_lineEdit"));

        horizontalLayout_23->addWidget(os_cyl_ochki_lineEdit);

        label_26 = new QLabel(tab_2);
        label_26->setObjectName(QStringLiteral("label_26"));

        horizontalLayout_23->addWidget(label_26);

        os_axis_ochki_lineEdit = new QLineEdit(tab_2);
        os_axis_ochki_lineEdit->setObjectName(QStringLiteral("os_axis_ochki_lineEdit"));

        horizontalLayout_23->addWidget(os_axis_ochki_lineEdit);


        verticalLayout_5->addLayout(horizontalLayout_23);


        horizontalLayout_25->addLayout(verticalLayout_5);

        horizontalLayout_24 = new QHBoxLayout();
        horizontalLayout_24->setObjectName(QStringLiteral("horizontalLayout_24"));
        label_27 = new QLabel(tab_2);
        label_27->setObjectName(QStringLiteral("label_27"));

        horizontalLayout_24->addWidget(label_27);

        dpp_ochki_lineEdit = new QLineEdit(tab_2);
        dpp_ochki_lineEdit->setObjectName(QStringLiteral("dpp_ochki_lineEdit"));

        horizontalLayout_24->addWidget(dpp_ochki_lineEdit);

        label_32 = new QLabel(tab_2);
        label_32->setObjectName(QStringLiteral("label_32"));

        horizontalLayout_24->addWidget(label_32);

        comments_ochki_textEdit = new QTextEdit(tab_2);
        comments_ochki_textEdit->setObjectName(QStringLiteral("comments_ochki_textEdit"));

        horizontalLayout_24->addWidget(comments_ochki_textEdit);


        horizontalLayout_25->addLayout(horizontalLayout_24);


        horizontalLayout_26->addLayout(horizontalLayout_25);

        tabWidget->addTab(tab_2, QString());

        verticalLayout_6->addWidget(tabWidget);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_6->addItem(verticalSpacer_2);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_6->addItem(verticalSpacer);

        horizontalLayout_29 = new QHBoxLayout();
        horizontalLayout_29->setObjectName(QStringLiteral("horizontalLayout_29"));
        add_pushButton = new QPushButton(centralwidget);
        add_pushButton->setObjectName(QStringLiteral("add_pushButton"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/icon/icon-check.png"), QSize(), QIcon::Normal, QIcon::Off);
        add_pushButton->setIcon(icon1);

        horizontalLayout_29->addWidget(add_pushButton);

        cancel_pushButton = new QPushButton(centralwidget);
        cancel_pushButton->setObjectName(QStringLiteral("cancel_pushButton"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/icon/icon-cansel.ico"), QSize(), QIcon::Normal, QIcon::Off);
        cancel_pushButton->setIcon(icon2);

        horizontalLayout_29->addWidget(cancel_pushButton);


        verticalLayout_6->addLayout(horizontalLayout_29);

        visit_info->setCentralWidget(centralwidget);
        tabWidget->raise();
        frame->raise();
        frame_2->raise();
        frame_3->raise();
        menubar = new QMenuBar(visit_info);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 698, 21));
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
        label_35->setText(QString());
        label_21->setText(QApplication::translate("visit_info", "\320\224\320\260\321\202\320\260 \320\262\320\270\320\267\320\270\321\202\320\260", 0));
        label_22->setText(QApplication::translate("visit_info", "\320\237\321\200\320\270\321\207\320\270\320\275\320\260 \320\276\320\261\321\200\320\260\321\211\320\265\320\275\320\270\321\217", 0));
        label_23->setText(QApplication::translate("visit_info", "\320\222\321\200\320\260\321\207", 0));
        label_33->setText(QApplication::translate("visit_info", "\320\221\321\200\320\265\320\275\320\264", 0));
        label_34->setText(QApplication::translate("visit_info", "\320\242\320\276\320\262\320\260\321\200", 0));
        label_24->setText(QApplication::translate("visit_info", "\320\241\321\200\320\265\320\264\321\201\321\202\320\262\320\276 \321\203\321\205\320\276\320\264\320\260", 0));
        label->setText(QApplication::translate("visit_info", "\320\236\321\201\320\274\320\276\321\202\321\200", 0));
        label_2->setText(QApplication::translate("visit_info", "VisOD:", 0));
        od_vis_lineEdit->setInputMask(QString());
        label_4->setText(QApplication::translate("visit_info", "sph:", 0));
        od_sph_lineEdit->setInputMask(QApplication::translate("visit_info", "#0.00;_", 0));
        label_7->setText(QApplication::translate("visit_info", "cyl:", 0));
        od_cyl_lineEdit->setInputMask(QApplication::translate("visit_info", "#0.00;_", 0));
        label_9->setText(QApplication::translate("visit_info", "axis:", 0));
        od_axis_lineEdit->setInputMask(QApplication::translate("visit_info", "00;_", 0));
        label_11->setText(QApplication::translate("visit_info", "\320\232\320\276\320\274\320\274\320\265\320\275\321\202\320\260\321\200\320\270\320\271", 0));
        label_3->setText(QApplication::translate("visit_info", "VisOS:", 0));
        os_vis_lineEdit->setInputMask(QApplication::translate("visit_info", "#0.00;_", 0));
        label_5->setText(QApplication::translate("visit_info", "sph:", 0));
        os_sph_lineEdit->setInputMask(QApplication::translate("visit_info", "#0.00;_", 0));
        label_6->setText(QApplication::translate("visit_info", "cyl:", 0));
        os_cyl_lineEdit->setInputMask(QApplication::translate("visit_info", "#0.00;_", 0));
        label_8->setText(QApplication::translate("visit_info", "asix:", 0));
        os_axis_lineEdit->setInputMask(QApplication::translate("visit_info", "00;_", 0));
        label_10->setText(QApplication::translate("visit_info", "\320\232\320\276\320\274\320\274\320\265\320\275\321\202\320\260\321\200\320\270\320\271", 0));
        label_43->setText(QApplication::translate("visit_info", "\320\232\320\265\321\200\320\260\321\202\320\276\320\274\320\265\321\202\321\200\320\270\321\217", 0));
        label_36->setText(QApplication::translate("visit_info", "\320\236D R1", 0));
        od_r1_lineEdit->setInputMask(QApplication::translate("visit_info", "#0.00;_", 0));
        label_37->setText(QApplication::translate("visit_info", "R2", 0));
        od_r2_lineEdit->setInputMask(QApplication::translate("visit_info", "#0.00;_", 0));
        label_40->setText(QApplication::translate("visit_info", "BC", 0));
        bc_lineEdit->setInputMask(QApplication::translate("visit_info", "#0.00;_", 0));
        label_41->setText(QApplication::translate("visit_info", "Dia", 0));
        dia_lineEdit->setInputMask(QApplication::translate("visit_info", "#0.00;_", 0));
        label_39->setText(QApplication::translate("visit_info", "OS R1", 0));
        os_r1_lineEdit->setInputMask(QApplication::translate("visit_info", "#0.00;_", 0));
        label_38->setText(QApplication::translate("visit_info", "R2", 0));
        os_r2_lineEdit->setInputMask(QApplication::translate("visit_info", "#0.00;_", 0));
        label_42->setText(QApplication::translate("visit_info", "Dpp", 0));
        dpp_lineEdit->setInputMask(QString());
        label_13->setText(QApplication::translate("visit_info", "OD Sph:", 0));
        od_sph_mkl_lineEdit->setInputMask(QApplication::translate("visit_info", "#0.00;_", 0));
        label_15->setText(QApplication::translate("visit_info", "Cyl:", 0));
        od_cyl_mkl_lineEdit->setInputMask(QApplication::translate("visit_info", "#0.00;_", 0));
        label_19->setText(QApplication::translate("visit_info", "axis:", 0));
        od_axis_mkl_lineEdit->setInputMask(QApplication::translate("visit_info", "#0.00;_", 0));
        label_17->setText(QApplication::translate("visit_info", "BC:", 0));
        bc_mlk_lineEdit->setInputMask(QApplication::translate("visit_info", "#0.00;_", 0));
        label_18->setText(QApplication::translate("visit_info", "OS Sph:", 0));
        os_sph_mkl_lineEdit->setInputMask(QApplication::translate("visit_info", "#0.00;_", 0));
        label_14->setText(QApplication::translate("visit_info", "Cyl:", 0));
        os_cyl_mkl_lineEdit->setInputMask(QApplication::translate("visit_info", "#0.00;_", 0));
        label_16->setText(QApplication::translate("visit_info", "axis:", 0));
        os_axis_mkl_lineEdit->setInputMask(QApplication::translate("visit_info", "#0.00;_", 0));
        label_12->setText(QApplication::translate("visit_info", "Dpp:", 0));
        dpp_mkl_lineEdit->setInputMask(QApplication::translate("visit_info", "#0.00;_", 0));
        label_20->setText(QApplication::translate("visit_info", "\320\221\320\234\320\241", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("visit_info", "\320\234\320\233\320\232", 0));
        label_30->setText(QApplication::translate("visit_info", "OD Sph:", 0));
        od_sph_ochki_lineEdit->setInputMask(QApplication::translate("visit_info", "#0.00;_", 0));
        label_29->setText(QApplication::translate("visit_info", "Cyl:", 0));
        od_cyl_ochki_lineEdit->setInputMask(QApplication::translate("visit_info", "#0.00;_", 0));
        label_31->setText(QApplication::translate("visit_info", "axis:", 0));
        od_axis_ochki_lineEdit->setInputMask(QApplication::translate("visit_info", "#0.00;_", 0));
        label_25->setText(QApplication::translate("visit_info", "OS Sph:", 0));
        os_sph_ochki_lineEdit->setInputMask(QApplication::translate("visit_info", "#0.00;_", 0));
        label_28->setText(QApplication::translate("visit_info", "Cyl:", 0));
        os_cyl_ochki_lineEdit->setInputMask(QApplication::translate("visit_info", "#0.00;_", 0));
        label_26->setText(QApplication::translate("visit_info", "axis:", 0));
        os_axis_ochki_lineEdit->setInputMask(QApplication::translate("visit_info", "#0.00;_", 0));
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
