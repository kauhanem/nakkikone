#-------------------------------------------------
#
# Project created by QtCreator 2016-08-28T02:44:31
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = NakkiKone
TEMPLATE = app


SOURCES +=\
        nakkikone.cc \
    event.cc \
    main.cc \
    nakki.cc \
    nakkiworker.cc

HEADERS  += nakkikone.hh \
    event.hh \
    nakki.hh \
    nakkiworker.hh

FORMS    += nakkikone.ui
