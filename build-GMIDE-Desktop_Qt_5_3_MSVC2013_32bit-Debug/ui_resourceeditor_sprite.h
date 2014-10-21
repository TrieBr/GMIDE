/********************************************************************************
** Form generated from reading UI file 'resourceeditor_sprite.ui'
**
** Created by: Qt User Interface Compiler version 5.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RESOURCEEDITOR_SPRITE_H
#define UI_RESOURCEEDITOR_SPRITE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ResourceEditor_Sprite
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QSplitter *splitter;
    QFrame *frame_2;
    QGridLayout *gridLayout_3;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QLabel *label_8;
    QLabel *label_2;
    QLabel *label_9;
    QSpacerItem *horizontalSpacer_4;
    QSpacerItem *horizontalSpacer_5;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QLabel *label_7;
    QLabel *label_4;
    QHBoxLayout *horizontalLayout;
    QLabel *label_5;
    QLineEdit *lineEdit;
    QLabel *label_6;
    QLineEdit *lineEdit_2;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *pushButton;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *verticalSpacer;
    QGraphicsView *graphicsView;
    QToolBar *toolBar;

    void setupUi(QMainWindow *ResourceEditor_Sprite)
    {
        if (ResourceEditor_Sprite->objectName().isEmpty())
            ResourceEditor_Sprite->setObjectName(QStringLiteral("ResourceEditor_Sprite"));
        ResourceEditor_Sprite->resize(800, 600);
        centralwidget = new QWidget(ResourceEditor_Sprite);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        splitter = new QSplitter(centralwidget);
        splitter->setObjectName(QStringLiteral("splitter"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(splitter->sizePolicy().hasHeightForWidth());
        splitter->setSizePolicy(sizePolicy);
        splitter->setOrientation(Qt::Horizontal);
        frame_2 = new QFrame(splitter);
        frame_2->setObjectName(QStringLiteral("frame_2"));
        sizePolicy.setHeightForWidth(frame_2->sizePolicy().hasHeightForWidth());
        frame_2->setSizePolicy(sizePolicy);
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        gridLayout_3 = new QGridLayout(frame_2);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        groupBox = new QGroupBox(frame_2);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        gridLayout_2 = new QGridLayout(groupBox);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label = new QLabel(groupBox);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout_2->addWidget(label);

        label_8 = new QLabel(groupBox);
        label_8->setObjectName(QStringLiteral("label_8"));

        horizontalLayout_2->addWidget(label_8);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout_2->addWidget(label_2);

        label_9 = new QLabel(groupBox);
        label_9->setObjectName(QStringLiteral("label_9"));

        horizontalLayout_2->addWidget(label_9);


        gridLayout_2->addLayout(horizontalLayout_2, 0, 0, 1, 1);

        horizontalSpacer_4 = new QSpacerItem(262, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_4, 0, 1, 2, 2);

        horizontalSpacer_5 = new QSpacerItem(240, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_5, 1, 2, 2, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout_3->addWidget(label_3);

        label_7 = new QLabel(groupBox);
        label_7->setObjectName(QStringLiteral("label_7"));

        horizontalLayout_3->addWidget(label_7);


        gridLayout_2->addLayout(horizontalLayout_3, 2, 0, 1, 2);

        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QStringLiteral("label_4"));

        gridLayout_2->addWidget(label_4, 3, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label_5 = new QLabel(groupBox);
        label_5->setObjectName(QStringLiteral("label_5"));

        horizontalLayout->addWidget(label_5);

        lineEdit = new QLineEdit(groupBox);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));

        horizontalLayout->addWidget(lineEdit);

        label_6 = new QLabel(groupBox);
        label_6->setObjectName(QStringLiteral("label_6"));

        horizontalLayout->addWidget(label_6);

        lineEdit_2 = new QLineEdit(groupBox);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));

        horizontalLayout->addWidget(lineEdit_2);


        gridLayout_2->addLayout(horizontalLayout, 4, 0, 1, 3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_3);

        pushButton = new QPushButton(groupBox);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        horizontalLayout_4->addWidget(pushButton);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_2);


        gridLayout_2->addLayout(horizontalLayout_4, 5, 0, 1, 3);


        gridLayout_3->addWidget(groupBox, 0, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 388, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_3->addItem(verticalSpacer, 1, 0, 1, 1);

        splitter->addWidget(frame_2);
        graphicsView = new QGraphicsView(splitter);
        graphicsView->setObjectName(QStringLiteral("graphicsView"));
        splitter->addWidget(graphicsView);

        gridLayout->addWidget(splitter, 0, 0, 1, 1);

        ResourceEditor_Sprite->setCentralWidget(centralwidget);
        toolBar = new QToolBar(ResourceEditor_Sprite);
        toolBar->setObjectName(QStringLiteral("toolBar"));
        ResourceEditor_Sprite->addToolBar(Qt::TopToolBarArea, toolBar);

        retranslateUi(ResourceEditor_Sprite);

        QMetaObject::connectSlotsByName(ResourceEditor_Sprite);
    } // setupUi

    void retranslateUi(QMainWindow *ResourceEditor_Sprite)
    {
        ResourceEditor_Sprite->setWindowTitle(QApplication::translate("ResourceEditor_Sprite", "MainWindow", 0));
        groupBox->setTitle(QApplication::translate("ResourceEditor_Sprite", "Properties", 0));
        label->setText(QApplication::translate("ResourceEditor_Sprite", "Width:", 0));
        label_8->setText(QApplication::translate("ResourceEditor_Sprite", "0", 0));
        label_2->setText(QApplication::translate("ResourceEditor_Sprite", "Height:", 0));
        label_9->setText(QApplication::translate("ResourceEditor_Sprite", "0", 0));
        label_3->setText(QApplication::translate("ResourceEditor_Sprite", "Number of subimages:", 0));
        label_7->setText(QApplication::translate("ResourceEditor_Sprite", "0", 0));
        label_4->setText(QApplication::translate("ResourceEditor_Sprite", "Origin:", 0));
        label_5->setText(QApplication::translate("ResourceEditor_Sprite", "X", 0));
        label_6->setText(QApplication::translate("ResourceEditor_Sprite", "Y", 0));
        pushButton->setText(QApplication::translate("ResourceEditor_Sprite", "Center", 0));
        toolBar->setWindowTitle(QApplication::translate("ResourceEditor_Sprite", "toolBar", 0));
    } // retranslateUi

};

namespace Ui {
    class ResourceEditor_Sprite: public Ui_ResourceEditor_Sprite {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RESOURCEEDITOR_SPRITE_H
