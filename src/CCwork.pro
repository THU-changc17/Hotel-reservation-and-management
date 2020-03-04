#-------------------------------------------------
#
# Project created by QtCreator 2018-07-26T20:38:49
#
#-------------------------------------------------

QT       += core gui
QT       += sql  xml
QT       +=widgets
RC_ICONS +=myico.ico
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = CCwork
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which has been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0


SOURCES += \
        main.cpp \
        widget.cpp \
    logindialog.cpp \
    regdialog.cpp \
    checkindialog.cpp \
    data_object.cpp \
    orderdialog.cpp \
    createhotel.cpp \
    hotelmanage.cpp \
    modifyhotel.cpp \
    newhotel.cpp \
    platform.cpp \
    myorder.cpp \
    orderlist.cpp \
    photodialog.cpp

HEADERS += \
        widget.h \
    logindialog.h \
    all_headers.h \
    regdialog.h \
    connection.h \
    checkindialog.h \
    data_object.h \
    orderdialog.h \
    createhotel.h \
    hotelmanage.h \
    modifyhotel.h \
    newhotel.h \
    platform.h \
    myorder.h \
    orderlist.h \
    photodialog.h

FORMS += \
        widget.ui \
    logindialog.ui \
    regdialog.ui \
    checkindialog.ui \
    orderdialog.ui \
    createhotel.ui \
    hotelmanage.ui \
    modifyhotel.ui \
    newhotel.ui \
    platform.ui \
    myorder.ui \
    orderlist.ui \
    photodialog.ui

RESOURCES += \
    res.qrc
