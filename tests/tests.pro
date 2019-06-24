include(../defaults.pri)

TEMPLATE = app
CONFIG += console

LIBS += -L../lib -llibcore

SOURCES += *.cpp

HEADERS += \
    catch.hpp \
