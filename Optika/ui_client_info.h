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
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>

QT_BEGIN_NAMESPACE

class Ui_client_info
{
public:
    QDialogButtonBox *buttonBox;
    QLineEdit *lineEdit;
    QDateEdit *dateEdit;
    QLineEdit *lineEdit_2;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;

    void setupUi(QDialog *client_info)
    {
        if (client_info->objectName().isEmpty())
            client_info->setObjectName(QStringLiteral("client_info"));
        client_info->resize(264, 300);
        buttonBox = new QDialogButtonBox(client_info);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(80, 250, 161, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        lineEdit = new QLineEdit(client_info);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(20, 40, 231, 20));
        dateEdit = new QDateEdit(client_info);
        dateEdit->setObjectName(QStringLiteral("dateEdit"));
        dateEdit->setGeometry(QRect(20, 90, 110, 22));
        lineEdit_2 = new QLineEdit(client_info);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(20, 140, 231, 20));
        label = new QLabel(client_info);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(20, 20, 46, 13));
        label_2 = new QLabel(client_info);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(20, 70, 111, 16));
        label_3 = new QLabel(client_info);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(20, 120, 131, 16));

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
