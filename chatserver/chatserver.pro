QT       += core gui sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

SOURCES += \
    clientssqltablemodel.cpp \
    main.cpp \
    mainwindow.cpp

HEADERS += \
    clientssqltablemodel.h \
    mainwindow.h

FORMS += \
    mainwindow.ui

TRANSLATIONS += \
    chatserver_ru_RU.ts
CONFIG += lrelease
CONFIG += embed_translations

qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
