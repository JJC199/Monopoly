#-------------------------------------------------
#
# Project created by QtCreator 2016-05-03T18:24:36
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Monopoly
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    player.cpp \
    property.cpp \
    gamelogic.cpp

HEADERS  += mainwindow.h \
    player.h \
    property.h \
    gamelogic.h

FORMS    += mainwindow.ui
