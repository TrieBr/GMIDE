#-------------------------------------------------
#
# Project created by QtCreator 2013-12-08T16:20:38
#
#-------------------------------------------------

QT       += core gui xml xmlpatterns

CONFIG += c++11

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = GMIDE
TEMPLATE = app


SOURCES += main.cpp\
        MainWindow.cpp \
    GMResource.cpp \
    GMProject.cpp \
    GMResource_Room.cpp \
    Workspace.cpp \
    GMResource_Sprite.cpp \
    GMResource_Sound.cpp \
    GMResource_Background.cpp \
    GMResource_Path.cpp \
    GMResource_Script.cpp \
    GMResource_Shader.cpp \
    GMResource_Font.cpp \
    GMResource_TimeLine.cpp \
    GMResource_Object.cpp \
    GMResource_IncludedFile.cpp \
    ResourceEditor_Room.cpp \
    WorkspaceEditorTabCluster.cpp \
    ResourceEditor.cpp \
    ResourceEditor_Sprite.cpp

HEADERS  += MainWindow.h \
    GMResource.h \
    GMProject.h \
    GMResource_Room.h \
    Workspace.h \
    GMResource_Sprite.h \
    GMResourceNode.h \
    GMResource_Sound.h \
    GMResource_Background.h \
    GMResource_Path.h \
    GMResource_Script.h \
    GMResource_Shader.h \
    GMResource_Font.h \
    GMResource_TimeLine.h \
    GMResource_Object.h \
    GMResource_IncludedFile.h \
    ResourceEditor_Room.h \
    WorkspaceEditorTabCluster.h \
    ResourceEditor.h \
    ResourceEditor_Sprite.h

FORMS    += mainwindow.ui \
    resourceeditor_room.ui \
    workspaceeditortabcluster.ui \
    resourceeditor_sprite.ui

RESOURCES = skin.qrc
