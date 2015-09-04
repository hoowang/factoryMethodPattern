TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    abstractfactory.cpp \
    abstractproduct.cpp \
    producta.cpp \
    productb.cpp \
    factorya.cpp \
    factoryb.cpp

include(deployment.pri)
qtcAddDeployment()

HEADERS += \
    abstractfactory.h \
    abstractproduct.h \
    producta.h \
    productb.h \
    factorya.h \
    factoryb.h

