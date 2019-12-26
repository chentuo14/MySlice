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
    MySettingDlg/dlgmachinesetting.cpp \
    MySettingDlg/dlgslicesetting.cpp \
    MySettingDlg/dlgsupportsetting.cpp

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
    MySettingDlg/dlgmachinesetting.h \
    MySettingDlg/dlgslicesetting.h \
    MySettingDlg/dlgsupportsetting.h

FORMS    += mainwindow.ui \
    MySettingDlg/dlgmachinesetting.ui \
    MySettingDlg/dlgslicesetting.ui \
    MySettingDlg/dlgsupportsetting.ui

unix:!macx: LIBS += -lGLU
unix:!macx: LIBS += -lz

QMAKE_CXXFLAGS += -std=c++11

RESOURCES += \
    icon.qrc

#win32: LIBS += -L$$PWD/../quazip-master/quazip/release/ -lquazip

#INCLUDEPATH += $$PWD/../quazip-master/quazip
#DEPENDPATH += $$PWD/../quazip-master/quazip

#win32-g++: PRE_TARGETDEPS += $$PWD/../quazip-master/quazip/release/libquazip.a

unix:!macx: LIBS += -L$$PWD/../../../../../../lib/ -lquazip

INCLUDEPATH += $$PWD/../../../../../../include/quazip
DEPENDPATH += $$PWD/../../../../../../include/quazip

#zlib
win32:CONFIG(release, debug|release): LIBS += -L$$PWD/../../../../../../usr/lib/x86_64-linux-gnu/release/ -lz
else:win32:CONFIG(debug, debug|release): LIBS += -L$$PWD/../../../../../../usr/lib/x86_64-linux-gnu/debug/ -lz
else:unix: LIBS += -L$$PWD/../../../../../../usr/lib/x86_64-linux-gnu/ -lz

INCLUDEPATH += $$PWD/../../../../../../usr/lib/x86_64-linux-gnu
DEPENDPATH += $$PWD/../../../../../../usr/lib/x86_64-linux-gnu
