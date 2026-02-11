CONFIG -= qt

TEMPLATE = lib
DEFINES += FINVOICE3_LIBRARY
TARGET = finvoice3

CONFIG += c++17
CONFIG += static

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    finvoice3.cpp

HEADERS += \
    lib_global.h \
    finvoice3.h

# Default rules for deployment.
unix {
    target.path = /usr/lib
}
!isEmpty(target.path): INSTALLS += target

unix: CONFIG += link_pkgconfig
unix: PKGCONFIG += libxml++-2.6
