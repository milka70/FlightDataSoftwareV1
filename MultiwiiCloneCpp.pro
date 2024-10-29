QT       += core gui svg
QT       += svgwidgets
QT       += serialport
QT       += widgets

CONFIG += c++17

# Uncomment the following line to disable deprecated APIs before Qt 6.0.0.
# DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000

SOURCES += \
    Functions.cpp \
    main.cpp \
    mainwindow.cpp

HEADERS += \
    Functions.h \
    mainwindow.h

FORMS += \
    mainwindow.ui

include(qfi/qfi.pri)

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
