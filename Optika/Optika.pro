#-------------------------------------------------
#
# Project created by QtCreator 2014-03-22T18:08:27
#
#-------------------------------------------------

QT       += core gui sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Optika
TEMPLATE = app

SOURCES += main.cpp\
        mainwindow.cpp \
    dbparameters.cpp \
    client_info.cpp \
    visit_info.cpp

HEADERS  += mainwindow.h \
    dbparameters.h \
    client_info.h \
    visit_info.h

FORMS    += mainwindow.ui \
    dbparameters.ui \
    client_info.ui \
    visit_info.ui

RESOURCES += \
    resource.qrc


