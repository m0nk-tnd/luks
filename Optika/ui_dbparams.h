/********************************************************************************
** Form generated from reading UI file 'dbparams.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DBPARAMS_H
#define UI_DBPARAMS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DBParams
{
public:
    QPushButton *pushButton;
    QLineEdit *lineEdit;
    QLabel *label;

    void setupUi(QWidget *DBParams)
    {
        if (DBParams->objectName().isEmpty())
            DBParams->setObjectName(QStringLiteral("DBParams"));
        DBParams->resize(400, 300);
        pushButton = new QPushButton(DBParams);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(10, 60, 211, 23));
        lineEdit = new QLineEdit(DBParams);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(10, 30, 351, 20));
        label = new QLabel(DBParams);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 10, 271, 16));

        retranslateUi(DBParams);

        QMetaObject::connectSlotsByName(DBParams);
    } // setupUi

    void retranslateUi(QWidget *DBParams)
    {
        DBParams->setWindowTitle(QApplication::translate("DBParams", "Form", 0));
        pushButton->setText(QApplication::translate("DBParams", "\321\203\320\272\320\260\320\267\320\260\321\202\321\214 \321\204\320\260\320\271\320\273", 0));
        label->setText(QApplication::translate("DBParams", "\320\237\321\203\321\202\321\214 \320\272 \321\204\320\260\320\271\320\273\321\203 \321\201 \320\221\320\260\320\267\320\276\320\271 \320\224\320\260\320\275\320\275\321\213\321\205", 0));
    } // retranslateUi

};

namespace Ui {
    class DBParams: public Ui_DBParams {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DBPARAMS_H
