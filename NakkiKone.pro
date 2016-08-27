#-------------------------------------------------
#
# Project created by QtCreator 2016-08-27T15:36:26
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = NakkiKone
TEMPLATE = app


SOURCES += main.cpp\
    event.cpp \
    nakki.cpp \
    nakkiworker.cpp \
    mainwindow.cpp

HEADERS  += \
    event.h \
    nakki.h \
    nakkiworker.h \
    mainwindow.h

FORMS    += \
    mainwindow.ui

RESOURCES += \
    files.qrc
