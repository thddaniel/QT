#-------------------------------------------------
#
# Project created by QtCreator 2012-10-26T22:05:29
#
#-------------------------------------------------

QT       += core gui

TARGET = AcountBook
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
        InputWindow.cpp \
    statusbar.cpp \
    querywnd.cpp \
    memberdlg.cpp \
    fixedwnd.cpp \
    mylabel.cpp \
    mygraphwnd.cpp \
    mytoolbutton.cpp \
    mygraphicsitem.cpp

HEADERS  += mainwindow.h \
            InputWindow.h \
    statusbar.h \
    querywnd.h \
    memberdlg.h \
    fixedwnd.h \
    mylabel.h \
    mygraphwnd.h \
    mytoolbutton.h \
    mygraphicsitem.h
QT       += sql
RC_FILE = app.rc
