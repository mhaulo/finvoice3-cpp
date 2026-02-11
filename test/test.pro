TEMPLATE = app
CONFIG -= qt
CONFIG -= app_bundle
CONFIG += console

CONFIG += c++11
SOURCES = tst_finvoice3.cpp \
        main.cpp

CATCH2_MAIN=0

include(catch-common.pri)

#win32:CONFIG(release, debug|release): LIBS += -L$$OUT_PWD/../lib/release -lfinvoice3
#else:win32:CONFIG(debug, debug|release): LIBS += -L$$OUT_PWD/../lib/debug -lfinvoice3
#else:unix: LIBS += -L$$OUT_PWD/../lib -lfinvoice3

unix: LIBS += $$OUT_PWD/../lib/libfinvoice3.a
win32: LIBS += $$OUT_PWD/../lib/finvoice3.lib

INCLUDEPATH += $$PWD/../lib
DEPENDPATH += $$PWD/../lib
