/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.1.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDockWidget>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionAdd_Sprite;
    QAction *actionAdd_Sound;
    QAction *actionAdd_Background;
    QAction *actionAdd_Path;
    QAction *actionAdd_Script;
    QAction *actionAdd_Shader;
    QAction *actionAdd_Font;
    QAction *actionAdd_Timeline;
    QAction *actionAdd_Object;
    QAction *actionAdd_Room;
    QAction *actionNew_Project;
    QAction *actionOpen_Project;
    QAction *actionSave_Project;
    QAction *actionRun_Game;
    QAction *actionDebug_Game;
    QAction *actionStop_Game;
    QAction *actionBuild_Application;
    QWidget *centralWidget;
    QGridLayout *gridLayout;
    QFrame *frame;
    QGridLayout *gridLayout_2;
    QFrame *frame_3;
    QGridLayout *gridLayout_3;
    QTabWidget *tabWidget;
    QWidget *tab;
    QWidget *tab_2;
    QMenuBar *menuBar;
    QMenu *menuFile;
    QMenu *menuEdit;
    QMenu *menuResources;
    QMenu *menuHelp;
    QStatusBar *statusBar;
    QDockWidget *dockWidget_resources;
    QWidget *dockWidgetContents_6;
    QGridLayout *gridLayout_4;
    QFrame *frame_2;
    QGridLayout *gridLayout_6;
    QTreeWidget *treeWidget;
    QDockWidget *dockWidget_7;
    QWidget *dockWidgetContents_7;
    QGridLayout *gridLayout_5;
    QTabWidget *tabWidget_2;
    QWidget *tab_3;
    QWidget *tab_4;
    QToolBar *toolBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1140, 567);
        MainWindow->setStyleSheet(QStringLiteral(""));
        actionAdd_Sprite = new QAction(MainWindow);
        actionAdd_Sprite->setObjectName(QStringLiteral("actionAdd_Sprite"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/main/icons/flower.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionAdd_Sprite->setIcon(icon);
        actionAdd_Sound = new QAction(MainWindow);
        actionAdd_Sound->setObjectName(QStringLiteral("actionAdd_Sound"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/main/icons/speaker-volume-none.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionAdd_Sound->setIcon(icon1);
        actionAdd_Background = new QAction(MainWindow);
        actionAdd_Background->setObjectName(QStringLiteral("actionAdd_Background"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/main/icons/picture.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionAdd_Background->setIcon(icon2);
        actionAdd_Path = new QAction(MainWindow);
        actionAdd_Path->setObjectName(QStringLiteral("actionAdd_Path"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/main/icons/arrow-turn-090-left.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionAdd_Path->setIcon(icon3);
        actionAdd_Script = new QAction(MainWindow);
        actionAdd_Script->setObjectName(QStringLiteral("actionAdd_Script"));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/main/icons/document-binary.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionAdd_Script->setIcon(icon4);
        actionAdd_Shader = new QAction(MainWindow);
        actionAdd_Shader->setObjectName(QStringLiteral("actionAdd_Shader"));
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/main/icons/color.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionAdd_Shader->setIcon(icon5);
        actionAdd_Font = new QAction(MainWindow);
        actionAdd_Font->setObjectName(QStringLiteral("actionAdd_Font"));
        QIcon icon6;
        icon6.addFile(QStringLiteral(":/main/icons/ui-label.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionAdd_Font->setIcon(icon6);
        actionAdd_Timeline = new QAction(MainWindow);
        actionAdd_Timeline->setObjectName(QStringLiteral("actionAdd_Timeline"));
        QIcon icon7;
        icon7.addFile(QStringLiteral(":/main/icons/alarm-clock--plus.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionAdd_Timeline->setIcon(icon7);
        actionAdd_Object = new QAction(MainWindow);
        actionAdd_Object->setObjectName(QStringLiteral("actionAdd_Object"));
        QIcon icon8;
        icon8.addFile(QStringLiteral(":/main/icons/block.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionAdd_Object->setIcon(icon8);
        actionAdd_Room = new QAction(MainWindow);
        actionAdd_Room->setObjectName(QStringLiteral("actionAdd_Room"));
        QIcon icon9;
        icon9.addFile(QStringLiteral(":/main/icons/projection-screen--plus.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionAdd_Room->setIcon(icon9);
        actionNew_Project = new QAction(MainWindow);
        actionNew_Project->setObjectName(QStringLiteral("actionNew_Project"));
        QIcon icon10;
        icon10.addFile(QStringLiteral(":/main/icons/document--plus.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionNew_Project->setIcon(icon10);
        actionOpen_Project = new QAction(MainWindow);
        actionOpen_Project->setObjectName(QStringLiteral("actionOpen_Project"));
        QIcon icon11;
        icon11.addFile(QStringLiteral(":/main/icons/folder-horizontal-open.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionOpen_Project->setIcon(icon11);
        actionSave_Project = new QAction(MainWindow);
        actionSave_Project->setObjectName(QStringLiteral("actionSave_Project"));
        QIcon icon12;
        icon12.addFile(QStringLiteral(":/main/icons/disk.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSave_Project->setIcon(icon12);
        actionRun_Game = new QAction(MainWindow);
        actionRun_Game->setObjectName(QStringLiteral("actionRun_Game"));
        QIcon icon13;
        icon13.addFile(QStringLiteral(":/main/icons/control.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionRun_Game->setIcon(icon13);
        actionDebug_Game = new QAction(MainWindow);
        actionDebug_Game->setObjectName(QStringLiteral("actionDebug_Game"));
        QIcon icon14;
        icon14.addFile(QStringLiteral(":/main/icons/bug.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionDebug_Game->setIcon(icon14);
        actionStop_Game = new QAction(MainWindow);
        actionStop_Game->setObjectName(QStringLiteral("actionStop_Game"));
        actionBuild_Application = new QAction(MainWindow);
        actionBuild_Application->setObjectName(QStringLiteral("actionBuild_Application"));
        QIcon icon15;
        icon15.addFile(QStringLiteral(":/main/icons/gear.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionBuild_Application->setIcon(icon15);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(0);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        frame = new QFrame(centralWidget);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setFrameShape(QFrame::NoFrame);
        frame->setFrameShadow(QFrame::Sunken);
        gridLayout_2 = new QGridLayout(frame);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        frame_3 = new QFrame(frame);
        frame_3->setObjectName(QStringLiteral("frame_3"));
        frame_3->setFrameShape(QFrame::NoFrame);
        frame_3->setFrameShadow(QFrame::Raised);
        gridLayout_3 = new QGridLayout(frame_3);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        gridLayout_3->setContentsMargins(0, 2, 0, 0);
        tabWidget = new QTabWidget(frame_3);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        tabWidget->addTab(tab_2, QString());

        gridLayout_3->addWidget(tabWidget, 0, 0, 1, 1);


        gridLayout_2->addWidget(frame_3, 0, 0, 1, 1);


        gridLayout->addWidget(frame, 0, 0, 1, 1);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1140, 21));
        menuBar->setStyleSheet(QStringLiteral(""));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QStringLiteral("menuFile"));
        menuFile->setAutoFillBackground(false);
        menuFile->setStyleSheet(QStringLiteral(""));
        menuEdit = new QMenu(menuBar);
        menuEdit->setObjectName(QStringLiteral("menuEdit"));
        menuResources = new QMenu(menuBar);
        menuResources->setObjectName(QStringLiteral("menuResources"));
        menuHelp = new QMenu(menuBar);
        menuHelp->setObjectName(QStringLiteral("menuHelp"));
        MainWindow->setMenuBar(menuBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        statusBar->setStyleSheet(QStringLiteral(""));
        MainWindow->setStatusBar(statusBar);
        dockWidget_resources = new QDockWidget(MainWindow);
        dockWidget_resources->setObjectName(QStringLiteral("dockWidget_resources"));
        dockWidget_resources->setStyleSheet(QStringLiteral(""));
        dockWidget_resources->setFeatures(QDockWidget::AllDockWidgetFeatures);
        dockWidgetContents_6 = new QWidget();
        dockWidgetContents_6->setObjectName(QStringLiteral("dockWidgetContents_6"));
        gridLayout_4 = new QGridLayout(dockWidgetContents_6);
        gridLayout_4->setSpacing(6);
        gridLayout_4->setContentsMargins(11, 11, 11, 11);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        gridLayout_4->setContentsMargins(0, 0, 0, 0);
        frame_2 = new QFrame(dockWidgetContents_6);
        frame_2->setObjectName(QStringLiteral("frame_2"));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Sunken);
        gridLayout_6 = new QGridLayout(frame_2);
        gridLayout_6->setSpacing(6);
        gridLayout_6->setContentsMargins(11, 11, 11, 11);
        gridLayout_6->setObjectName(QStringLiteral("gridLayout_6"));
        gridLayout_6->setContentsMargins(1, 1, 1, 1);
        treeWidget = new QTreeWidget(frame_2);
        new QTreeWidgetItem(treeWidget);
        new QTreeWidgetItem(treeWidget);
        new QTreeWidgetItem(treeWidget);
        new QTreeWidgetItem(treeWidget);
        new QTreeWidgetItem(treeWidget);
        new QTreeWidgetItem(treeWidget);
        new QTreeWidgetItem(treeWidget);
        new QTreeWidgetItem(treeWidget);
        new QTreeWidgetItem(treeWidget);
        new QTreeWidgetItem(treeWidget);
        new QTreeWidgetItem(treeWidget);
        treeWidget->setObjectName(QStringLiteral("treeWidget"));
        treeWidget->header()->setVisible(false);

        gridLayout_6->addWidget(treeWidget, 0, 0, 1, 1);


        gridLayout_4->addWidget(frame_2, 0, 0, 1, 1);

        dockWidget_resources->setWidget(dockWidgetContents_6);
        MainWindow->addDockWidget(static_cast<Qt::DockWidgetArea>(1), dockWidget_resources);
        dockWidget_7 = new QDockWidget(MainWindow);
        dockWidget_7->setObjectName(QStringLiteral("dockWidget_7"));
        dockWidget_7->setStyleSheet(QStringLiteral(""));
        dockWidgetContents_7 = new QWidget();
        dockWidgetContents_7->setObjectName(QStringLiteral("dockWidgetContents_7"));
        gridLayout_5 = new QGridLayout(dockWidgetContents_7);
        gridLayout_5->setSpacing(6);
        gridLayout_5->setContentsMargins(11, 11, 11, 11);
        gridLayout_5->setObjectName(QStringLiteral("gridLayout_5"));
        gridLayout_5->setContentsMargins(0, 0, 0, 0);
        tabWidget_2 = new QTabWidget(dockWidgetContents_7);
        tabWidget_2->setObjectName(QStringLiteral("tabWidget_2"));
        tab_3 = new QWidget();
        tab_3->setObjectName(QStringLiteral("tab_3"));
        tabWidget_2->addTab(tab_3, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName(QStringLiteral("tab_4"));
        tabWidget_2->addTab(tab_4, QString());

        gridLayout_5->addWidget(tabWidget_2, 0, 0, 1, 1);

        dockWidget_7->setWidget(dockWidgetContents_7);
        MainWindow->addDockWidget(static_cast<Qt::DockWidgetArea>(8), dockWidget_7);
        toolBar = new QToolBar(MainWindow);
        toolBar->setObjectName(QStringLiteral("toolBar"));
        toolBar->setToolButtonStyle(Qt::ToolButtonIconOnly);
        MainWindow->addToolBar(Qt::TopToolBarArea, toolBar);

        menuBar->addAction(menuFile->menuAction());
        menuBar->addAction(menuEdit->menuAction());
        menuBar->addAction(menuResources->menuAction());
        menuBar->addAction(menuHelp->menuAction());
        toolBar->addAction(actionNew_Project);
        toolBar->addAction(actionOpen_Project);
        toolBar->addAction(actionSave_Project);
        toolBar->addSeparator();
        toolBar->addAction(actionBuild_Application);
        toolBar->addSeparator();
        toolBar->addAction(actionRun_Game);
        toolBar->addAction(actionDebug_Game);
        toolBar->addSeparator();
        toolBar->addAction(actionAdd_Sprite);
        toolBar->addAction(actionAdd_Sound);
        toolBar->addAction(actionAdd_Background);
        toolBar->addAction(actionAdd_Path);
        toolBar->addAction(actionAdd_Script);
        toolBar->addAction(actionAdd_Shader);
        toolBar->addAction(actionAdd_Font);
        toolBar->addAction(actionAdd_Timeline);
        toolBar->addAction(actionAdd_Object);
        toolBar->addAction(actionAdd_Room);
        toolBar->addSeparator();

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        actionAdd_Sprite->setText(QApplication::translate("MainWindow", "Add Sprite", 0));
        actionAdd_Sound->setText(QApplication::translate("MainWindow", "Add Sound", 0));
        actionAdd_Background->setText(QApplication::translate("MainWindow", "Add Background", 0));
        actionAdd_Path->setText(QApplication::translate("MainWindow", "Add Path", 0));
        actionAdd_Script->setText(QApplication::translate("MainWindow", "Add Script", 0));
        actionAdd_Shader->setText(QApplication::translate("MainWindow", "Add Shader", 0));
        actionAdd_Font->setText(QApplication::translate("MainWindow", "Add Font", 0));
        actionAdd_Timeline->setText(QApplication::translate("MainWindow", "Add Timeline", 0));
        actionAdd_Object->setText(QApplication::translate("MainWindow", "Add Object", 0));
        actionAdd_Room->setText(QApplication::translate("MainWindow", "Add Room", 0));
        actionNew_Project->setText(QApplication::translate("MainWindow", "New Project", 0));
        actionOpen_Project->setText(QApplication::translate("MainWindow", "Open Project", 0));
        actionSave_Project->setText(QApplication::translate("MainWindow", "Save Project", 0));
        actionRun_Game->setText(QApplication::translate("MainWindow", "Run Game", 0));
        actionDebug_Game->setText(QApplication::translate("MainWindow", "Debug Game", 0));
        actionStop_Game->setText(QApplication::translate("MainWindow", "Stop Game", 0));
        actionBuild_Application->setText(QApplication::translate("MainWindow", "Build Application", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("MainWindow", "Tab 1", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("MainWindow", "Tab 2", 0));
        menuFile->setTitle(QApplication::translate("MainWindow", "File", 0));
        menuEdit->setTitle(QApplication::translate("MainWindow", "Edit", 0));
        menuResources->setTitle(QApplication::translate("MainWindow", "Resources", 0));
        menuHelp->setTitle(QApplication::translate("MainWindow", "Help", 0));
        dockWidget_resources->setWindowTitle(QApplication::translate("MainWindow", "Resources", 0));
        QTreeWidgetItem *___qtreewidgetitem = treeWidget->headerItem();
        ___qtreewidgetitem->setText(0, QApplication::translate("MainWindow", "1", 0));

        const bool __sortingEnabled = treeWidget->isSortingEnabled();
        treeWidget->setSortingEnabled(false);
        QTreeWidgetItem *___qtreewidgetitem1 = treeWidget->topLevelItem(0);
        ___qtreewidgetitem1->setText(0, QApplication::translate("MainWindow", "Sprites", 0));
        QTreeWidgetItem *___qtreewidgetitem2 = treeWidget->topLevelItem(1);
        ___qtreewidgetitem2->setText(0, QApplication::translate("MainWindow", "Sounds", 0));
        QTreeWidgetItem *___qtreewidgetitem3 = treeWidget->topLevelItem(2);
        ___qtreewidgetitem3->setText(0, QApplication::translate("MainWindow", "Backgrounds", 0));
        QTreeWidgetItem *___qtreewidgetitem4 = treeWidget->topLevelItem(3);
        ___qtreewidgetitem4->setText(0, QApplication::translate("MainWindow", "Paths", 0));
        QTreeWidgetItem *___qtreewidgetitem5 = treeWidget->topLevelItem(4);
        ___qtreewidgetitem5->setText(0, QApplication::translate("MainWindow", "Scripts", 0));
        QTreeWidgetItem *___qtreewidgetitem6 = treeWidget->topLevelItem(5);
        ___qtreewidgetitem6->setText(0, QApplication::translate("MainWindow", "Shaders", 0));
        QTreeWidgetItem *___qtreewidgetitem7 = treeWidget->topLevelItem(6);
        ___qtreewidgetitem7->setText(0, QApplication::translate("MainWindow", "Fonts", 0));
        QTreeWidgetItem *___qtreewidgetitem8 = treeWidget->topLevelItem(7);
        ___qtreewidgetitem8->setText(0, QApplication::translate("MainWindow", "Time Lines", 0));
        QTreeWidgetItem *___qtreewidgetitem9 = treeWidget->topLevelItem(8);
        ___qtreewidgetitem9->setText(0, QApplication::translate("MainWindow", "Objects", 0));
        QTreeWidgetItem *___qtreewidgetitem10 = treeWidget->topLevelItem(9);
        ___qtreewidgetitem10->setText(0, QApplication::translate("MainWindow", "Rooms", 0));
        QTreeWidgetItem *___qtreewidgetitem11 = treeWidget->topLevelItem(10);
        ___qtreewidgetitem11->setText(0, QApplication::translate("MainWindow", "Included Files", 0));
        treeWidget->setSortingEnabled(__sortingEnabled);

        dockWidget_7->setWindowTitle(QApplication::translate("MainWindow", "Output", 0));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_3), QApplication::translate("MainWindow", "Tab 1", 0));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_4), QApplication::translate("MainWindow", "Tab 2", 0));
        toolBar->setWindowTitle(QApplication::translate("MainWindow", "toolBar", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
