#-------------------------------------------------
#
# Project created by QtCreator 2017-05-17T20:27:02
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets printsupport

TARGET = LMDB
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which as been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0


SOURCES += main.cpp\
        mainwindow.cpp \
    common/array.cpp \
    common/counter.cpp \
    common/util.cpp \
    domain/entities.cpp \
    domain/validator.cpp \
    repository/repository.cpp \
    repository/watchlist.cpp \
    ui/console.cpp \
    adminmode.cpp \
    usermode.cpp \
    chart.cpp \
    qcustomplot.cpp \
    MovieTableModel.cpp

HEADERS  += mainwindow.h \
    common/array.h \
    common/counter.h \
    common/util.h \
    controller/controller.h \
    domain/entities.h \
    domain/validator.h \
    repository/repository.h \
    repository/watchlist.h \
    ui/console.h \
    adminmode.h \
    usermode.h \
    chart.h \
    qcustomplot.h \
    MovieTableModel.h

FORMS    += mainwindow.ui \
    adminmode.ui \
    usermode.ui \
    chart.ui

DISTFILES += \
    data/movie_database.csv \
    data/movies_backup.csv \
    data/watchlist.csv \
    data/watchlist.html
