/********************************************************************************
** Form generated from reading UI file 'resourceeditor_room.ui'
**
** Created by: Qt User Interface Compiler version 5.1.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RESOURCEEDITOR_ROOM_H
#define UI_RESOURCEEDITOR_ROOM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ResourceEditor_Room
{
public:
    QAction *actionSave_Close;
    QAction *actionClear;
    QAction *actionLockToggle;
    QWidget *centralwidget;
    QGridLayout *gridLayout_2;
    QSplitter *splitter;
    QFrame *frame;
    QGridLayout *gridLayout;
    QSplitter *splitter_2;
    QTabWidget *tabWidget;
    QWidget *tab;
    QGridLayout *gridLayout_4;
    QGridLayout *gridLayout_3;
    QLabel *label;
    QFrame *frame_2;
    QHBoxLayout *horizontalLayout;
    QLineEdit *lineEdit;
    QToolButton *toolButton;
    QSpacerItem *verticalSpacer_2;
    QWidget *tab_2;
    QWidget *tab_3;
    QWidget *tab_4;
    QWidget *tab_5;
    QWidget *tab_6;
    QGraphicsView *graphicsView_2;
    QGraphicsView *graphicsView;
    QToolBar *toolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *ResourceEditor_Room)
    {
        if (ResourceEditor_Room->objectName().isEmpty())
            ResourceEditor_Room->setObjectName(QStringLiteral("ResourceEditor_Room"));
        ResourceEditor_Room->resize(800, 600);
        actionSave_Close = new QAction(ResourceEditor_Room);
        actionSave_Close->setObjectName(QStringLiteral("actionSave_Close"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/main/icons/tick.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSave_Close->setIcon(icon);
        actionClear = new QAction(ResourceEditor_Room);
        actionClear->setObjectName(QStringLiteral("actionClear"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/main/icons/ui-panel.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionClear->setIcon(icon1);
        actionLockToggle = new QAction(ResourceEditor_Room);
        actionLockToggle->setObjectName(QStringLiteral("actionLockToggle"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/main/icons/lock.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionLockToggle->setIcon(icon2);
        centralwidget = new QWidget(ResourceEditor_Room);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        gridLayout_2 = new QGridLayout(centralwidget);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        splitter = new QSplitter(centralwidget);
        splitter->setObjectName(QStringLiteral("splitter"));
        splitter->setOrientation(Qt::Horizontal);
        frame = new QFrame(splitter);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setFrameShape(QFrame::NoFrame);
        frame->setFrameShadow(QFrame::Raised);
        gridLayout = new QGridLayout(frame);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        splitter_2 = new QSplitter(frame);
        splitter_2->setObjectName(QStringLiteral("splitter_2"));
        splitter_2->setOrientation(Qt::Vertical);
        tabWidget = new QTabWidget(splitter_2);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(1);
        sizePolicy.setHeightForWidth(tabWidget->sizePolicy().hasHeightForWidth());
        tabWidget->setSizePolicy(sizePolicy);
        tabWidget->setTabPosition(QTabWidget::West);
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        gridLayout_4 = new QGridLayout(tab);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        gridLayout_3 = new QGridLayout();
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        label = new QLabel(tab);
        label->setObjectName(QStringLiteral("label"));

        gridLayout_3->addWidget(label, 0, 0, 1, 1);

        frame_2 = new QFrame(tab);
        frame_2->setObjectName(QStringLiteral("frame_2"));
        frame_2->setMinimumSize(QSize(100, 100));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);

        gridLayout_3->addWidget(frame_2, 1, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        lineEdit = new QLineEdit(tab);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));

        horizontalLayout->addWidget(lineEdit);

        toolButton = new QToolButton(tab);
        toolButton->setObjectName(QStringLiteral("toolButton"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/main/icons/block.png"), QSize(), QIcon::Normal, QIcon::Off);
        toolButton->setIcon(icon3);

        horizontalLayout->addWidget(toolButton);


        gridLayout_3->addLayout(horizontalLayout, 2, 0, 1, 1);


        gridLayout_4->addLayout(gridLayout_3, 0, 0, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 101, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_4->addItem(verticalSpacer_2, 1, 0, 1, 1);

        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        tabWidget->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QStringLiteral("tab_3"));
        tabWidget->addTab(tab_3, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName(QStringLiteral("tab_4"));
        tabWidget->addTab(tab_4, QString());
        tab_5 = new QWidget();
        tab_5->setObjectName(QStringLiteral("tab_5"));
        tabWidget->addTab(tab_5, QString());
        tab_6 = new QWidget();
        tab_6->setObjectName(QStringLiteral("tab_6"));
        tabWidget->addTab(tab_6, QString());
        splitter_2->addWidget(tabWidget);
        graphicsView_2 = new QGraphicsView(splitter_2);
        graphicsView_2->setObjectName(QStringLiteral("graphicsView_2"));
        graphicsView_2->setFrameShape(QFrame::Box);
        graphicsView_2->setFrameShadow(QFrame::Plain);
        splitter_2->addWidget(graphicsView_2);

        gridLayout->addWidget(splitter_2, 0, 0, 1, 1);

        splitter->addWidget(frame);
        graphicsView = new QGraphicsView(splitter);
        graphicsView->setObjectName(QStringLiteral("graphicsView"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(1);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(graphicsView->sizePolicy().hasHeightForWidth());
        graphicsView->setSizePolicy(sizePolicy1);
        graphicsView->setFrameShape(QFrame::Box);
        graphicsView->setFrameShadow(QFrame::Plain);
        splitter->addWidget(graphicsView);

        gridLayout_2->addWidget(splitter, 0, 0, 1, 1);

        ResourceEditor_Room->setCentralWidget(centralwidget);
        toolBar = new QToolBar(ResourceEditor_Room);
        toolBar->setObjectName(QStringLiteral("toolBar"));
        ResourceEditor_Room->addToolBar(Qt::TopToolBarArea, toolBar);
        statusBar = new QStatusBar(ResourceEditor_Room);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        statusBar->setSizeGripEnabled(false);
        ResourceEditor_Room->setStatusBar(statusBar);

        toolBar->addAction(actionSave_Close);
        toolBar->addSeparator();
        toolBar->addAction(actionClear);
        toolBar->addAction(actionLockToggle);

        retranslateUi(ResourceEditor_Room);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(ResourceEditor_Room);
    } // setupUi

    void retranslateUi(QMainWindow *ResourceEditor_Room)
    {
        ResourceEditor_Room->setWindowTitle(QApplication::translate("ResourceEditor_Room", "MainWindow", 0));
        actionSave_Close->setText(QApplication::translate("ResourceEditor_Room", "Save & Close", 0));
        actionClear->setText(QApplication::translate("ResourceEditor_Room", "Clear", 0));
        actionLockToggle->setText(QApplication::translate("ResourceEditor_Room", "LockToggle", 0));
#ifndef QT_NO_TOOLTIP
        actionLockToggle->setToolTip(QApplication::translate("ResourceEditor_Room", "Toggle Lock", 0));
#endif // QT_NO_TOOLTIP
        label->setText(QApplication::translate("ResourceEditor_Room", "Selected Object:", 0));
        toolButton->setText(QApplication::translate("ResourceEditor_Room", "...", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("ResourceEditor_Room", "Objects", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("ResourceEditor_Room", "Tiles", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("ResourceEditor_Room", "Backgrounds", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_4), QApplication::translate("ResourceEditor_Room", "Settings", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_5), QApplication::translate("ResourceEditor_Room", "Views", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_6), QApplication::translate("ResourceEditor_Room", "Physics", 0));
        toolBar->setWindowTitle(QApplication::translate("ResourceEditor_Room", "toolBar", 0));
    } // retranslateUi

};

namespace Ui {
    class ResourceEditor_Room: public Ui_ResourceEditor_Room {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RESOURCEEDITOR_ROOM_H
