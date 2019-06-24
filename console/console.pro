include(../defaults.pri)

INCLUDEPATH += $$PWD/../controllers

TEMPLATE = app
CONFIG += console

LIBS += -L../lib -llibcore \
        #-L../lib -llibctrls

SOURCES += *.cpp

HEADERS += *.hpp \
    input.hpp
