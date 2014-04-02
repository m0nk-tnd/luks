/********************************************************************************
** Form generated from reading UI file 'developers.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DEVELOPERS_H
#define UI_DEVELOPERS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>

QT_BEGIN_NAMESPACE

class Ui_developers
{
public:
    QFrame *frame;
    QLabel *label;
    QLabel *label_3;
    QLabel *label_4;
    QLineEdit *lineEdit;
    QLabel *label_2;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;

    void setupUi(QDialog *developers)
    {
        if (developers->objectName().isEmpty())
            developers->setObjectName(QStringLiteral("developers"));
        developers->setEnabled(true);
        developers->resize(490, 286);
        developers->setSizeGripEnabled(false);
        frame = new QFrame(developers);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setEnabled(true);
        frame->setGeometry(QRect(10, 10, 471, 261));
        frame->setFrameShape(QFrame::Box);
        frame->setFrameShadow(QFrame::Raised);
        label = new QLabel(frame);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(20, 40, 441, 20));
        QFont font;
        font.setFamily(QStringLiteral("Meiryo UI"));
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        label->setLineWidth(1);
        label->setTextFormat(Qt::PlainText);
        label->setScaledContents(false);
        label->setWordWrap(true);
        label->setMargin(0);
        label_3 = new QLabel(frame);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(20, 20, 91, 16));
        QFont font1;
        font1.setFamily(QStringLiteral("Meiryo"));
        font1.setBold(true);
        font1.setWeight(75);
        label_3->setFont(font1);
        label_4 = new QLabel(frame);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(300, 90, 141, 121));
        label_4->setPixmap(QPixmap(QString::fromUtf8(":/icon/qr-code.gif")));
        lineEdit = new QLineEdit(frame);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(300, 220, 141, 20));
        QFont font2;
        font2.setFamily(QStringLiteral("Meiryo"));
        font2.setPointSize(8);
        font2.setBold(true);
        font2.setWeight(75);
        lineEdit->setFont(font2);
        lineEdit->setFrame(false);
        lineEdit->setReadOnly(true);
        label_2 = new QLabel(frame);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(30, 100, 81, 16));
        QFont font3;
        font3.setBold(true);
        font3.setWeight(75);
        label_2->setFont(font3);
        label_5 = new QLabel(frame);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(50, 120, 171, 16));
        label_6 = new QLabel(frame);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(50, 160, 61, 21));
        label_7 = new QLabel(frame);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(30, 140, 181, 16));
        label_7->setFont(font3);
        label_8 = new QLabel(frame);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(50, 180, 61, 16));

        retranslateUi(developers);

        QMetaObject::connectSlotsByName(developers);
    } // setupUi

    void retranslateUi(QDialog *developers)
    {
        developers->setWindowTitle(QApplication::translate("developers", "\320\240\320\260\320\267\321\200\320\260\320\261\320\276\321\202\321\207\320\270\320\272\320\270", 0));
        label->setText(QApplication::translate("developers", "C\321\202\321\203\320\264\320\270\321\217 \321\201\320\276\320\262\321\200\320\265\320\274\320\265\320\275\320\275\321\213\321\205 \320\270\320\275\321\204\320\276\321\200\320\274\320\260\321\206\320\270\320\276\320\275\320\275\321\213\321\205 \321\202\320\265\321\205\320\275\320\276\320\273\320\276\320\263\320\270\320\271 \"\320\224\321\203\320\274\320\260\320\271 \320\270 \320\224\320\265\320\273\320\260\320\271\"", 0));
        label_3->setText(QApplication::translate("developers", "\320\240\320\260\320\267\321\200\320\260\320\261\320\276\321\202\320\260\320\275\320\276:", 0));
        label_4->setText(QString());
        lineEdit->setText(QApplication::translate("developers", "http://thinkanddo.pro/", 0));
        label_2->setText(QApplication::translate("developers", "\320\236 \320\277\321\200\320\276\320\263\321\200\320\260\320\274\320\274\320\265:", 0));
        label_5->setText(QApplication::translate("developers", "\320\236\320\277\321\202\320\270\320\272\320\260 \320\233\321\216\320\272\321\201. \320\222\320\265\321\200\321\201\320\270\321\217 1.0", 0));
        label_6->setText(QApplication::translate("developers", "Qt 5.2.1 ", 0));
        label_7->setText(QApplication::translate("developers", "\320\242\320\265\321\205\320\275\320\270\321\207\320\265\321\201\320\272\320\270\320\265 \321\205\320\260\321\200\320\260\320\272\321\202\320\265\321\200\320\270\321\201\321\202\320\270\320\272\320\270:", 0));
        label_8->setText(QApplication::translate("developers", "SQLite 3.8.4.1", 0));
    } // retranslateUi

};

namespace Ui {
    class developers: public Ui_developers {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DEVELOPERS_H
