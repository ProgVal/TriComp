######################################################################
# Automatically generated by qmake (3.0) lun. nov. 17 16:52:53 2014
######################################################################

TEMPLATE = app
TARGET = interface
INCLUDEPATH += . parser

# Input
HEADERS += editor.h \
           mainwindow.h \
           newknitdialog.h \
           representation.h \
           ui_mainwindow.h \
           ui_newknitdialog.h \
           parser/parser.h
FORMS += mainwindow.ui newknitdialog.ui
LEXSOURCES += parser/lexer.l
SOURCES += editor.cpp \
           main.cpp \
           mainwindow.cpp \
           newknitdialog.cpp \
           representation.cpp \
           parser/lexer.cc \
           parser/parser.cc
RESOURCES += ressources.qrc

QMAKE_CXXFLAGS += -std=c++11 -lfl -lm

QT += widgets
