QT       += core gui
QT += sql

QT += core gui charts
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11
CONFIG += console

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    connection.cpp \
    dialogahmed.cpp \
    evenement.cpp \
    main.cpp \
    mainwindow.cpp \
    pack.cpp \
    service.cpp

HEADERS += \
    connection.h \
    dialogahmed.h \
    evenement.h \
    mainwindow.h \
    pack.h \
    service.h

FORMS += \
    dialogahmed.ui \
    mainwindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    img.qrc \
    imgb.qrc