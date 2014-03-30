#include "mainwindow.h"
#include <QApplication>
#include <QTextCodec>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    //Русские кнопки
    QTranslator qtTranslator;
    qtTranslator.load("qt_ru",QLibraryInfo::location(QLibraryInfo::TranslationsPath));
    a.installTranslator(&qtTranslator);

    MainWindow w;
    w.show();
    return a.exec();
}
