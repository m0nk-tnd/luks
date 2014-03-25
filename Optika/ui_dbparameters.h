/********************************************************************************
** Form generated from reading UI file 'dbparameters.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DBPARAMETERS_H
#define UI_DBPARAMETERS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_dbParameters
{
public:
    QDialogButtonBox *buttonBox;
    QLabel *label;
    QLineEdit *lineEdit;
    QPushButton *pushButton;

    void setupUi(QDialog *dbParameters)
    {
        if (dbParameters->objectName().isEmpty())
            dbParameters->setObjectName(QStringLiteral("dbParameters"));
        dbParameters->resize(413, 300);
        buttonBox = new QDialogButtonBox(dbParameters);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(30, 240, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        label = new QLabel(dbParameters);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 20, 221, 16));
        lineEdit = new QLineEdit(dbParameters);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(10, 50, 371, 20));
        pushButton = new QPushButton(dbParameters);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(10, 80, 201, 23));

        retranslateUi(dbParameters);
        QObject::connect(buttonBox, SIGNAL(accepted()), dbParameters, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), dbParameters, SLOT(reject()));

        QMetaObject::connectSlotsByName(dbParameters);
    } // setupUi

    void retranslateUi(QDialog *dbParameters)
    {
        dbParameters->setWindowTitle(QApplication::translate("dbParameters", "Dialog", 0));
        label->setText(QApplication::translate("dbParameters", "\320\237\321\203\321\202\321\214 \320\272 \321\204\320\260\320\271\320\273\321\203 \320\221\320\260\320\267\321\213 \320\264\320\260\320\275\320\275\321\213\321\205", 0));
        pushButton->setText(QApplication::translate("dbParameters", "\320\243\320\272\320\260\320\267\320\260\321\202\321\214 \321\204\320\260\320\271\320\273", 0));
    } // retranslateUi

};

namespace Ui {
    class dbParameters: public Ui_dbParameters {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DBPARAMETERS_H
