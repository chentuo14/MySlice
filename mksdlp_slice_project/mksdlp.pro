#-------------------------------------------------
#
# Project created by QtCreator 2018-06-29T09:11:15
#
#-------------------------------------------------

QT       += core gui
QT       += svg
QT       += opengl
QT       += network
QT       += concurrent



TARGET = MKSDHOST
TEMPLATE = app

TRANSLATIONS+=cn.ts\
            en.ts


SOURCES += main.cpp\
        mainwindow.cpp \
    m3dviewer.cpp \
    modelloader.cpp \
    modeldata.cpp \
    slice.cpp \
    loadingbar.cpp \
    outputdata.cpp \
    previewdlg.cpp \
    mcanvas.cpp \
    rightpanel.cpp \
    msupport.cpp \
    mtools.cpp \
    nrightpanel.cpp \
    rightlabel.cpp \
    msbar.cpp \
    iconlabel.cpp \
    numberedit.cpp \
    mdialog.cpp \
    mtitlebar.cpp \
    mprogressbar.cpp \
    updatethread.cpp \
    mbutton.cpp \
    supportthread.cpp \
    dlplog.cpp \
    minilzo.c

HEADERS  += mainwindow.h \
    m3dviewer.h \
    modelloader.h \
    modeldata.h \
    slice.h \
    loadingbar.h \
    outputdata.h \
    previewdlg.h \
    mcanvas.h \
    rightpanel.h \
    msupport.h \
    mtools.h \
    nrightpanel.h \
    rightlabel.h \
    msbar.h \
    iconlabel.h \
    numberedit.h \
    mdialog.h \
    mtitlebar.h \
    mprogressbar.h \
    updatethread.h \
    mbutton.h \
    supportthread.h \
    dlplog.h \
    lzoconf.h \
    lzodefs.h \
    minilzo.h

FORMS    += mainwindow.ui

#unix:!macx: LIBS += -lGLU
#unix:!macx: LIBS += -lz

#QMAKE_CXXFLAGS += -std=c++11

RESOURCES += \
    icon.qrc

LIBS += -lglut32

#zlib
win32:CONFIG(release, debug|release): LIBS += -L$$PWD/'../lib&include/zlib-result-x64/' -lzlibstat
else:win32:CONFIG(debug, debug|release): LIBS += -L$$PWD/'../lib&include/zlib-result-x64/' -lzlibstatd

INCLUDEPATH += $$PWD/'../lib&include/zlib-result-x64'
DEPENDPATH += $$PWD/'../lib&include/zlib-result-x64'

#quzaip
win32:CONFIG(release, debug|release): LIBS += -L$$PWD/'../lib&include/quzip-result-x64/' -lquazip
else:win32:CONFIG(debug, debug|release): LIBS += -L$$PWD/'../lib&include/quzip-result-x64/' -lquazipd

INCLUDEPATH += $$PWD/'../lib&include/quzip-result-x64'
DEPENDPATH += $$PWD/'../lib&include/quzip-result-x64'
