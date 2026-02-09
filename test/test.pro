TEMPLATE = app
CONFIG -= qt
CONFIG -= app_bundle
CONFIG += console

CONFIG += c++11
SOURCES = tst_finvoice3.cpp \
        main.cpp

CATCH2_MAIN=0

include(catch-common.pri)
