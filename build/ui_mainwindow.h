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
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QTreeView>
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
    QTreeView *treeView;
    QDockWidget *dockWidget_7;
    QWidget *dockWidgetContents_7;
    QGridLayout *gridLayout_5;
    QTabWidget *tabWidget_2;
    QWidget *tab_3;
    QGridLayout *gridLayout_7;
    QPlainTextEdit *plainTextEdit_build_output;
    QWidget *tab_4;
    QGridLayout *gridLayout_8;
    QPlainTextEdit *plainTextEdit_app_output;
    QWidget *tab_5;
    QGridLayout *gridLayout_9;
    QPlainTextEdit *plainTextEdit_issues;
    QWidget *tab_6;
    QGridLayout *gridLayout_10;
    QPlainTextEdit *plainTextEdit_ide_log;
    QWidget *tab_7;
    QGridLayout *gridLayout_11;
    QPlainTextEdit *plainTextEdit_version_control_log;
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
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(1);
        sizePolicy.setVerticalStretch(1);
        sizePolicy.setHeightForWidth(frame->sizePolicy().hasHeightForWidth());
        frame->setSizePolicy(sizePolicy);
        frame->setFrameShape(QFrame::NoFrame);
        frame->setFrameShadow(QFrame::Sunken);
        gridLayout_2 = new QGridLayout(frame);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);

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
        treeView = new QTreeView(frame_2);
        treeView->setObjectName(QStringLiteral("treeView"));
        treeView->setStyleSheet(QLatin1String("QTreeView::branch:has-children:!has-siblings:closed,\n"
" QTreeView::branch:closed:has-children:has-siblings {\n"
"         border-image: none;\n"
"		image: url(:/main/icons/blue-folder-horizontal.png);\n"
" }\n"
"\n"
"QTreeView::branch:open:has-children:!has-siblings,\n"
" QTreeView::branch:open:has-children:has-siblings  {\n"
"         border-image: none;\n"
"		 image: url(:/main/icons/blue-folder-horizontal-open.png);\n"
" }\n"
"QTreeView::branch:has-siblings:!adjoins-item {\n"
"     border-image: url(:/main/icons/stylesheet-vline.png) 0;\n"
" }\n"
"QTreeView::branch:has-siblings:adjoins-item {\n"
"     border-image: url(:/main/icons/stylesheet-branch-more.png) 0;\n"
" }\n"
" QTreeView::branch:!has-children:!has-siblings:adjoins-item {\n"
"     border-image: url(:/main/icons/stylesheet-branch-end.png) 0;\n"
" }\n"
""));
        treeView->setEditTriggers(QAbstractItemView::NoEditTriggers);
        treeView->setDragDropMode(QAbstractItemView::InternalMove);
        treeView->header()->setVisible(false);

        gridLayout_6->addWidget(treeView, 0, 0, 1, 1);


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
        gridLayout_7 = new QGridLayout(tab_3);
        gridLayout_7->setSpacing(6);
        gridLayout_7->setContentsMargins(11, 11, 11, 11);
        gridLayout_7->setObjectName(QStringLiteral("gridLayout_7"));
        gridLayout_7->setContentsMargins(1, 1, 1, 1);
        plainTextEdit_build_output = new QPlainTextEdit(tab_3);
        plainTextEdit_build_output->setObjectName(QStringLiteral("plainTextEdit_build_output"));

        gridLayout_7->addWidget(plainTextEdit_build_output, 0, 0, 1, 1);

        tabWidget_2->addTab(tab_3, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName(QStringLiteral("tab_4"));
        gridLayout_8 = new QGridLayout(tab_4);
        gridLayout_8->setSpacing(6);
        gridLayout_8->setContentsMargins(11, 11, 11, 11);
        gridLayout_8->setObjectName(QStringLiteral("gridLayout_8"));
        gridLayout_8->setContentsMargins(1, 1, 1, 1);
        plainTextEdit_app_output = new QPlainTextEdit(tab_4);
        plainTextEdit_app_output->setObjectName(QStringLiteral("plainTextEdit_app_output"));

        gridLayout_8->addWidget(plainTextEdit_app_output, 0, 0, 1, 1);

        tabWidget_2->addTab(tab_4, QString());
        tab_5 = new QWidget();
        tab_5->setObjectName(QStringLiteral("tab_5"));
        gridLayout_9 = new QGridLayout(tab_5);
        gridLayout_9->setSpacing(6);
        gridLayout_9->setContentsMargins(11, 11, 11, 11);
        gridLayout_9->setObjectName(QStringLiteral("gridLayout_9"));
        gridLayout_9->setContentsMargins(1, 1, 1, 1);
        plainTextEdit_issues = new QPlainTextEdit(tab_5);
        plainTextEdit_issues->setObjectName(QStringLiteral("plainTextEdit_issues"));

        gridLayout_9->addWidget(plainTextEdit_issues, 0, 0, 1, 1);

        tabWidget_2->addTab(tab_5, QString());
        tab_6 = new QWidget();
        tab_6->setObjectName(QStringLiteral("tab_6"));
        gridLayout_10 = new QGridLayout(tab_6);
        gridLayout_10->setSpacing(6);
        gridLayout_10->setContentsMargins(11, 11, 11, 11);
        gridLayout_10->setObjectName(QStringLiteral("gridLayout_10"));
        gridLayout_10->setContentsMargins(1, 1, 1, 1);
        plainTextEdit_ide_log = new QPlainTextEdit(tab_6);
        plainTextEdit_ide_log->setObjectName(QStringLiteral("plainTextEdit_ide_log"));
        plainTextEdit_ide_log->setReadOnly(true);

        gridLayout_10->addWidget(plainTextEdit_ide_log, 0, 0, 1, 1);

        tabWidget_2->addTab(tab_6, QString());
        tab_7 = new QWidget();
        tab_7->setObjectName(QStringLiteral("tab_7"));
        gridLayout_11 = new QGridLayout(tab_7);
        gridLayout_11->setSpacing(6);
        gridLayout_11->setContentsMargins(11, 11, 11, 11);
        gridLayout_11->setObjectName(QStringLiteral("gridLayout_11"));
        gridLayout_11->setContentsMargins(1, 1, 1, 1);
        plainTextEdit_version_control_log = new QPlainTextEdit(tab_7);
        plainTextEdit_version_control_log->setObjectName(QStringLiteral("plainTextEdit_version_control_log"));

        gridLayout_11->addWidget(plainTextEdit_version_control_log, 0, 0, 1, 1);

        tabWidget_2->addTab(tab_7, QString());

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

        tabWidget_2->setCurrentIndex(3);


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
        menuFile->setTitle(QApplication::translate("MainWindow", "File", 0));
        menuEdit->setTitle(QApplication::translate("MainWindow", "Edit", 0));
        menuResources->setTitle(QApplication::translate("MainWindow", "Resources", 0));
        menuHelp->setTitle(QApplication::translate("MainWindow", "Help", 0));
        dockWidget_resources->setWindowTitle(QApplication::translate("MainWindow", "Resources", 0));
        dockWidget_7->setWindowTitle(QApplication::translate("MainWindow", "Output", 0));
        plainTextEdit_build_output->setPlainText(QApplication::translate("MainWindow", "ergerger", 0));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_3), QApplication::translate("MainWindow", "Build Output", 0));
        plainTextEdit_app_output->setPlainText(QApplication::translate("MainWindow", "ergerger", 0));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_4), QApplication::translate("MainWindow", "Application Output", 0));
        plainTextEdit_issues->setPlainText(QApplication::translate("MainWindow", "ergerger", 0));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_5), QApplication::translate("MainWindow", "Issues", 0));
        plainTextEdit_ide_log->setPlainText(QApplication::translate("MainWindow", "Loaded Project Successfully!", 0));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_6), QApplication::translate("MainWindow", "IDE Log", 0));
        plainTextEdit_version_control_log->setPlainText(QApplication::translate("MainWindow", "ergerger", 0));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_7), QApplication::translate("MainWindow", "Version Control", 0));
        toolBar->setWindowTitle(QApplication::translate("MainWindow", "toolBar", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
