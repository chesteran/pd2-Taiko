#-------------------------------------------------
#
# Project created by QtCreator 2016-05-09T20:57:59
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = taiko
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    ttaiko_start.cpp

HEADERS  += mainwindow.h \
    ttaiko_start.h

FORMS    += mainwindow.ui \
    ttaiko_start.ui

RESOURCES += \
    pics.qrc
