#-------------------------------------------------
#
# Project created by QtCreator 2013-12-08T16:20:38
#
#-------------------------------------------------

QT       += core gui xml xmlpatterns webkitwidgets

CONFIG += c++11

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = GMIDE
TEMPLATE = app


SOURCES += main.cpp\
        MainWindow.cpp \
    GMAsset.cpp \
    GMProject.cpp \
    GMAsset_Room.cpp \
    Workspace.cpp \
    GMAsset_Sprite.cpp \
    GMAsset_Sound.cpp \
    GMAsset_Background.cpp \
    GMAsset_Path.cpp \
    GMAsset_Script.cpp \
    GMAsset_Shader.cpp \
    GMAsset_Font.cpp \
    GMAsset_TimeLine.cpp \
    GMAsset_Object.cpp \
    GMAsset_IncludedFile.cpp \
    AssetEditor_Room.cpp \
    WorkspaceEditorTabCluster.cpp \
    AssetEditor.cpp \
    AssetEditor_Sprite.cpp \
    QComboBox_NoScroll.cpp \
    WidgetSpriteFrameView.cpp \
    WidgetSpriteFrameView_Frame.cpp \
    AssetEditor_Sound.cpp \
    AssetEditor_Script.cpp \
    Logger.cpp \
    TextEditIODevice.cpp

HEADERS  += MainWindow.h \
    GMAsset.h \
    GMProject.h \
    GMAsset_Room.h \
    Workspace.h \
    GMAsset_Sprite.h \
    GMAssetNode.h \
    GMAsset_Sound.h \
    GMAsset_Background.h \
    GMAsset_Path.h \
    GMAsset_Script.h \
    GMAsset_Shader.h \
    GMAsset_Font.h \
    GMAsset_TimeLine.h \
    GMAsset_Object.h \
    GMAsset_IncludedFile.h \
    AssetEditor_Room.h \
    WorkspaceEditorTabCluster.h \
    AssetEditor.h \
    AssetEditor_Sprite.h \
    QComboBox_NoScroll.h \
    WidgetSpriteFrameView.h \
    WidgetSpriteFrameView_Frame.h \
    AssetEditor_Sound.h \
    AssetEditor_Script.h \
    Logger.h \
    TextEditIODevice.h

FORMS    += mainwindow.ui \
    asseteditor_room.ui \
    workspaceeditortabcluster.ui \
    asseteditor_sprite.ui \
    AssetEditor_Sound.ui \
    AssetEditor_Script.ui

RESOURCES = skin.qrc
