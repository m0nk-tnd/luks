/********************************************************************************
** Form generated from reading UI file 'client_info.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CLIENT_INFO_H
#define UI_CLIENT_INFO_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_client_info
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label;
    QSpacerItem *horizontalSpacer_3;
    QLineEdit *name_lineEdit;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QSpacerItem *horizontalSpacer;
    QDateEdit *dateEdit;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_3;
    QSpacerItem *horizontalSpacer_5;
    QLineEdit *phone_lineEdit;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer_4;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *client_info)
    {
        if (client_info->objectName().isEmpty())
            client_info->setObjectName(QStringLiteral("client_info"));
        client_info->resize(283, 234);
        QFont font;
        font.setPointSize(9);
        client_info->setFont(font);
        verticalLayout = new QVBoxLayout(client_info);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label = new QLabel(client_info);
        label->setObjectName(QStringLiteral("label"));
        QFont font1;
        font1.setBold(true);
        font1.setWeight(75);
        label->setFont(font1);

        horizontalLayout_3->addWidget(label);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_3);


        verticalLayout->addLayout(horizontalLayout_3);

        name_lineEdit = new QLineEdit(client_info);
        name_lineEdit->setObjectName(QStringLiteral("name_lineEdit"));

        verticalLayout->addWidget(name_lineEdit);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label_2 = new QLabel(client_info);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setFont(font1);

        horizontalLayout->addWidget(label_2);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        verticalLayout->addLayout(horizontalLayout);

        dateEdit = new QDateEdit(client_info);
        dateEdit->setObjectName(QStringLiteral("dateEdit"));

        verticalLayout->addWidget(dateEdit);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        label_3 = new QLabel(client_info);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setFont(font1);

        horizontalLayout_5->addWidget(label_3);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_5);


        verticalLayout->addLayout(horizontalLayout_5);

        phone_lineEdit = new QLineEdit(client_info);
        phone_lineEdit->setObjectName(QStringLiteral("phone_lineEdit"));

        verticalLayout->addWidget(phone_lineEdit);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_4);

        buttonBox = new QDialogButtonBox(client_info);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setMaximumSize(QSize(16777214, 16777215));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        buttonBox->setCenterButtons(false);

        horizontalLayout_4->addWidget(buttonBox);


        verticalLayout->addLayout(horizontalLayout_4);


        retranslateUi(client_info);
        QObject::connect(buttonBox, SIGNAL(accepted()), client_info, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), client_info, SLOT(reject()));

        QMetaObject::connectSlotsByName(client_info);
    } // setupUi

    void retranslateUi(QDialog *client_info)
    {
        client_info->setWindowTitle(QApplication::translate("client_info", "\320\224\320\276\320\261\320\260\320\262\320\273\320\265\320\275\320\270\320\265 \320\272\320\273\320\270\320\265\320\275\321\202\320\260", 0));
        label->setText(QApplication::translate("client_info", "\320\244\320\230\320\236", 0));
        label_2->setText(QApplication::translate("client_info", "\320\224\320\260\321\202\320\260 \321\200\320\276\320\266\320\264\320\265\320\275\320\270\321\217", 0));
        label_3->setText(QApplication::translate("client_info", "\320\232\320\276\320\275\321\202\320\260\320\272\321\202\320\275\320\260\321\217 \320\270\320\275\321\204\320\276\321\200\320\274\320\260\321\206\320\270\321\217", 0));
    } // retranslateUi

};

namespace Ui {
    class client_info: public Ui_client_info {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CLIENT_INFO_H
