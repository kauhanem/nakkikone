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
        mainwindow.cpp \
    event.cpp \
    nakki.cpp \
    date.cpp  \
    time.cpp

HEADERS  += mainwindow.h \
    event.h \
    nakki.h \
    date.h  \
    time.h

FORMS    += mainwindow.ui
