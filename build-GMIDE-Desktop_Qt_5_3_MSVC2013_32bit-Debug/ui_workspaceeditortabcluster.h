/********************************************************************************
** Form generated from reading UI file 'workspaceeditortabcluster.ui'
**
** Created by: Qt User Interface Compiler version 5.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WORKSPACEEDITORTABCLUSTER_H
#define UI_WORKSPACEEDITORTABCLUSTER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_WorkspaceEditorTabCluster
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QTabWidget *tabWidget;
    QWidget *tab;
    QWidget *tab_2;

    void setupUi(QMainWindow *WorkspaceEditorTabCluster)
    {
        if (WorkspaceEditorTabCluster->objectName().isEmpty())
            WorkspaceEditorTabCluster->setObjectName(QStringLiteral("WorkspaceEditorTabCluster"));
        WorkspaceEditorTabCluster->resize(800, 600);
        centralwidget = new QWidget(WorkspaceEditorTabCluster);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setDocumentMode(false);
        tabWidget->setTabsClosable(true);
        tabWidget->setMovable(true);
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        tabWidget->addTab(tab_2, QString());

        gridLayout->addWidget(tabWidget, 0, 0, 1, 1);

        WorkspaceEditorTabCluster->setCentralWidget(centralwidget);

        retranslateUi(WorkspaceEditorTabCluster);

        QMetaObject::connectSlotsByName(WorkspaceEditorTabCluster);
    } // setupUi

    void retranslateUi(QMainWindow *WorkspaceEditorTabCluster)
    {
        WorkspaceEditorTabCluster->setWindowTitle(QApplication::translate("WorkspaceEditorTabCluster", "MainWindow", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("WorkspaceEditorTabCluster", "Tab 1", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("WorkspaceEditorTabCluster", "Tab 2", 0));
    } // retranslateUi

};

namespace Ui {
    class WorkspaceEditorTabCluster: public Ui_WorkspaceEditorTabCluster {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WORKSPACEEDITORTABCLUSTER_H
