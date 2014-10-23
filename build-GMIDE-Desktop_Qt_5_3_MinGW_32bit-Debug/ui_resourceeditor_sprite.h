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
#include <QtWidgets/QCheckBox>
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
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "QComboBox_NoScroll.h"
#include "WidgetSpriteFrameView.h"

QT_BEGIN_NAMESPACE

class Ui_ResourceEditor_Sprite
{
public:
    QAction *actionSave_Close;
    QWidget *centralwidget;
    QGridLayout *gridLayout_9;
    QSplitter *splitter;
    QFrame *frame_2;
    QGridLayout *gridLayout_2;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QGridLayout *gridLayout_8;
    QGroupBox *groupBox_properties;
    QGridLayout *gridLayout_3;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_widthTitle;
    QLabel *label_widthValue;
    QLabel *label_heightLabel;
    QLabel *label_heightValue;
    QSpacerItem *horizontalSpacer_7;
    QSpacerItem *horizontalSpacer_8;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_numSubimagesLabel;
    QLabel *label_numSubimagesValue;
    QLabel *label_OriginLabel;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_originX;
    QLineEdit *lineEdit_originX;
    QLabel *label_originY;
    QLineEdit *lineEdit_originY;
    QHBoxLayout *horizontalLayout_9;
    QSpacerItem *horizontalSpacer_9;
    QPushButton *pushButton_originCenter;
    QSpacerItem *horizontalSpacer_10;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_5;
    QCheckBox *checkBox_preciseCollisionChecking;
    QCheckBox *checkBox_seperateCollisionMasks;
    QLabel *label_alphaTolerance;
    QLineEdit *lineEdit_alphaTolerance;
    QSlider *horizontalSlider_alphaTolerance;
    QGroupBox *groupBox_boundingBox;
    QGridLayout *gridLayout_7;
    QLabel *label_bboxType;
    QComboBox_NoScroll *comboBox_bboxType;
    QLabel *label_bboxShape;
    QComboBox_NoScroll *comboBox_bboxShape;
    QGridLayout *gridLayout_4;
    QLabel *label_bboxLeft;
    QLineEdit *lineEdit_bboxLeft;
    QLabel *label_bboxRight;
    QLineEdit *lineEdit_bboxRight;
    QLabel *label_bboxTop;
    QLineEdit *lineEdit_bboxTop;
    QLabel *label_bboxBottom;
    QLineEdit *lineEdit_bboxBottom;
    QGroupBox *groupBox_textureSettings;
    QGridLayout *gridLayout_6;
    QCheckBox *checkBox_tileHorizontal;
    QCheckBox *checkBox_tileVertical;
    QCheckBox *checkBox_usedFor3D;
    QLabel *label_textureGroup;
    QComboBox_NoScroll *comboBox_textureGroup;
    QSpacerItem *verticalSpacer_2;
    QWidget *widget;
    QGridLayout *gridLayout;
    QSplitter *splitter_2;
    QWidget *widget1;
    QVBoxLayout *verticalLayout_2;
    QFrame *frame_3;
    QHBoxLayout *horizontalLayout_10;
    QToolButton *toolButton_animationToggle;
    QFrame *line_2;
    QToolButton *toolButton_zoomFit;
    QToolButton *toolButton_zoomOriginal;
    QToolButton *toolButton_zoomOut;
    QToolButton *toolButton_zoomIn;
    QSpacerItem *horizontalSpacer_11;
    QGraphicsView *graphicsView_spritePreview;
    WidgetSpriteFrameView *spriteFrameView;
    QToolBar *toolBar;

    void setupUi(QMainWindow *ResourceEditor_Sprite)
    {
        if (ResourceEditor_Sprite->objectName().isEmpty())
            ResourceEditor_Sprite->setObjectName(QStringLiteral("ResourceEditor_Sprite"));
        ResourceEditor_Sprite->resize(800, 600);
        actionSave_Close = new QAction(ResourceEditor_Sprite);
        actionSave_Close->setObjectName(QStringLiteral("actionSave_Close"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/main/icons/tick.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSave_Close->setIcon(icon);
        centralwidget = new QWidget(ResourceEditor_Sprite);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        gridLayout_9 = new QGridLayout(centralwidget);
        gridLayout_9->setObjectName(QStringLiteral("gridLayout_9"));
        splitter = new QSplitter(centralwidget);
        splitter->setObjectName(QStringLiteral("splitter"));
        splitter->setOrientation(Qt::Horizontal);
        frame_2 = new QFrame(splitter);
        frame_2->setObjectName(QStringLiteral("frame_2"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(frame_2->sizePolicy().hasHeightForWidth());
        frame_2->setSizePolicy(sizePolicy);
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        gridLayout_2 = new QGridLayout(frame_2);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        scrollArea = new QScrollArea(frame_2);
        scrollArea->setObjectName(QStringLiteral("scrollArea"));
        scrollArea->setMinimumSize(QSize(250, 0));
        scrollArea->setFrameShape(QFrame::StyledPanel);
        scrollArea->setFrameShadow(QFrame::Raised);
        scrollArea->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        scrollArea->setSizeAdjustPolicy(QAbstractScrollArea::AdjustToContents);
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QStringLiteral("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 449, 551));
        gridLayout_8 = new QGridLayout(scrollAreaWidgetContents);
        gridLayout_8->setObjectName(QStringLiteral("gridLayout_8"));
        groupBox_properties = new QGroupBox(scrollAreaWidgetContents);
        groupBox_properties->setObjectName(QStringLiteral("groupBox_properties"));
        groupBox_properties->setFlat(false);
        gridLayout_3 = new QGridLayout(groupBox_properties);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        label_widthTitle = new QLabel(groupBox_properties);
        label_widthTitle->setObjectName(QStringLiteral("label_widthTitle"));

        horizontalLayout_6->addWidget(label_widthTitle);

        label_widthValue = new QLabel(groupBox_properties);
        label_widthValue->setObjectName(QStringLiteral("label_widthValue"));

        horizontalLayout_6->addWidget(label_widthValue);

        label_heightLabel = new QLabel(groupBox_properties);
        label_heightLabel->setObjectName(QStringLiteral("label_heightLabel"));

        horizontalLayout_6->addWidget(label_heightLabel);

        label_heightValue = new QLabel(groupBox_properties);
        label_heightValue->setObjectName(QStringLiteral("label_heightValue"));

        horizontalLayout_6->addWidget(label_heightValue);


        gridLayout_3->addLayout(horizontalLayout_6, 0, 0, 1, 1);

        horizontalSpacer_7 = new QSpacerItem(276, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_7, 0, 1, 2, 2);

        horizontalSpacer_8 = new QSpacerItem(254, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_8, 1, 2, 2, 1);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        label_numSubimagesLabel = new QLabel(groupBox_properties);
        label_numSubimagesLabel->setObjectName(QStringLiteral("label_numSubimagesLabel"));

        horizontalLayout_7->addWidget(label_numSubimagesLabel);

        label_numSubimagesValue = new QLabel(groupBox_properties);
        label_numSubimagesValue->setObjectName(QStringLiteral("label_numSubimagesValue"));

        horizontalLayout_7->addWidget(label_numSubimagesValue);


        gridLayout_3->addLayout(horizontalLayout_7, 2, 0, 1, 2);

        label_OriginLabel = new QLabel(groupBox_properties);
        label_OriginLabel->setObjectName(QStringLiteral("label_OriginLabel"));

        gridLayout_3->addWidget(label_OriginLabel, 3, 0, 1, 1);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        label_originX = new QLabel(groupBox_properties);
        label_originX->setObjectName(QStringLiteral("label_originX"));

        horizontalLayout_8->addWidget(label_originX);

        lineEdit_originX = new QLineEdit(groupBox_properties);
        lineEdit_originX->setObjectName(QStringLiteral("lineEdit_originX"));

        horizontalLayout_8->addWidget(lineEdit_originX);

        label_originY = new QLabel(groupBox_properties);
        label_originY->setObjectName(QStringLiteral("label_originY"));

        horizontalLayout_8->addWidget(label_originY);

        lineEdit_originY = new QLineEdit(groupBox_properties);
        lineEdit_originY->setObjectName(QStringLiteral("lineEdit_originY"));

        horizontalLayout_8->addWidget(lineEdit_originY);


        gridLayout_3->addLayout(horizontalLayout_8, 4, 0, 1, 3);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QStringLiteral("horizontalLayout_9"));
        horizontalSpacer_9 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_9->addItem(horizontalSpacer_9);

        pushButton_originCenter = new QPushButton(groupBox_properties);
        pushButton_originCenter->setObjectName(QStringLiteral("pushButton_originCenter"));

        horizontalLayout_9->addWidget(pushButton_originCenter);

        horizontalSpacer_10 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_9->addItem(horizontalSpacer_10);


        gridLayout_3->addLayout(horizontalLayout_9, 5, 0, 1, 3);


        gridLayout_8->addWidget(groupBox_properties, 0, 0, 1, 1);

        groupBox_2 = new QGroupBox(scrollAreaWidgetContents);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        gridLayout_5 = new QGridLayout(groupBox_2);
        gridLayout_5->setObjectName(QStringLiteral("gridLayout_5"));
        checkBox_preciseCollisionChecking = new QCheckBox(groupBox_2);
        checkBox_preciseCollisionChecking->setObjectName(QStringLiteral("checkBox_preciseCollisionChecking"));

        gridLayout_5->addWidget(checkBox_preciseCollisionChecking, 0, 0, 1, 2);

        checkBox_seperateCollisionMasks = new QCheckBox(groupBox_2);
        checkBox_seperateCollisionMasks->setObjectName(QStringLiteral("checkBox_seperateCollisionMasks"));

        gridLayout_5->addWidget(checkBox_seperateCollisionMasks, 1, 0, 1, 2);

        label_alphaTolerance = new QLabel(groupBox_2);
        label_alphaTolerance->setObjectName(QStringLiteral("label_alphaTolerance"));

        gridLayout_5->addWidget(label_alphaTolerance, 2, 0, 1, 1);

        lineEdit_alphaTolerance = new QLineEdit(groupBox_2);
        lineEdit_alphaTolerance->setObjectName(QStringLiteral("lineEdit_alphaTolerance"));
        lineEdit_alphaTolerance->setMaximumSize(QSize(64, 16777215));

        gridLayout_5->addWidget(lineEdit_alphaTolerance, 2, 1, 1, 1);

        horizontalSlider_alphaTolerance = new QSlider(groupBox_2);
        horizontalSlider_alphaTolerance->setObjectName(QStringLiteral("horizontalSlider_alphaTolerance"));
        horizontalSlider_alphaTolerance->setMaximum(255);
        horizontalSlider_alphaTolerance->setOrientation(Qt::Horizontal);

        gridLayout_5->addWidget(horizontalSlider_alphaTolerance, 2, 2, 1, 1);

        groupBox_boundingBox = new QGroupBox(groupBox_2);
        groupBox_boundingBox->setObjectName(QStringLiteral("groupBox_boundingBox"));
        gridLayout_7 = new QGridLayout(groupBox_boundingBox);
        gridLayout_7->setObjectName(QStringLiteral("gridLayout_7"));
        label_bboxType = new QLabel(groupBox_boundingBox);
        label_bboxType->setObjectName(QStringLiteral("label_bboxType"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label_bboxType->sizePolicy().hasHeightForWidth());
        label_bboxType->setSizePolicy(sizePolicy1);

        gridLayout_7->addWidget(label_bboxType, 0, 0, 1, 1);

        comboBox_bboxType = new QComboBox_NoScroll(groupBox_boundingBox);
        comboBox_bboxType->setObjectName(QStringLiteral("comboBox_bboxType"));

        gridLayout_7->addWidget(comboBox_bboxType, 0, 1, 1, 1);

        label_bboxShape = new QLabel(groupBox_boundingBox);
        label_bboxShape->setObjectName(QStringLiteral("label_bboxShape"));
        sizePolicy1.setHeightForWidth(label_bboxShape->sizePolicy().hasHeightForWidth());
        label_bboxShape->setSizePolicy(sizePolicy1);

        gridLayout_7->addWidget(label_bboxShape, 1, 0, 1, 1);

        comboBox_bboxShape = new QComboBox_NoScroll(groupBox_boundingBox);
        comboBox_bboxShape->setObjectName(QStringLiteral("comboBox_bboxShape"));

        gridLayout_7->addWidget(comboBox_bboxShape, 1, 1, 1, 1);

        gridLayout_4 = new QGridLayout();
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        label_bboxLeft = new QLabel(groupBox_boundingBox);
        label_bboxLeft->setObjectName(QStringLiteral("label_bboxLeft"));

        gridLayout_4->addWidget(label_bboxLeft, 0, 0, 1, 1);

        lineEdit_bboxLeft = new QLineEdit(groupBox_boundingBox);
        lineEdit_bboxLeft->setObjectName(QStringLiteral("lineEdit_bboxLeft"));

        gridLayout_4->addWidget(lineEdit_bboxLeft, 0, 1, 1, 1);

        label_bboxRight = new QLabel(groupBox_boundingBox);
        label_bboxRight->setObjectName(QStringLiteral("label_bboxRight"));

        gridLayout_4->addWidget(label_bboxRight, 0, 2, 1, 1);

        lineEdit_bboxRight = new QLineEdit(groupBox_boundingBox);
        lineEdit_bboxRight->setObjectName(QStringLiteral("lineEdit_bboxRight"));

        gridLayout_4->addWidget(lineEdit_bboxRight, 0, 3, 1, 1);

        label_bboxTop = new QLabel(groupBox_boundingBox);
        label_bboxTop->setObjectName(QStringLiteral("label_bboxTop"));

        gridLayout_4->addWidget(label_bboxTop, 1, 0, 1, 1);

        lineEdit_bboxTop = new QLineEdit(groupBox_boundingBox);
        lineEdit_bboxTop->setObjectName(QStringLiteral("lineEdit_bboxTop"));

        gridLayout_4->addWidget(lineEdit_bboxTop, 1, 1, 1, 1);

        label_bboxBottom = new QLabel(groupBox_boundingBox);
        label_bboxBottom->setObjectName(QStringLiteral("label_bboxBottom"));

        gridLayout_4->addWidget(label_bboxBottom, 1, 2, 1, 1);

        lineEdit_bboxBottom = new QLineEdit(groupBox_boundingBox);
        lineEdit_bboxBottom->setObjectName(QStringLiteral("lineEdit_bboxBottom"));

        gridLayout_4->addWidget(lineEdit_bboxBottom, 1, 3, 1, 1);


        gridLayout_7->addLayout(gridLayout_4, 2, 0, 1, 2);


        gridLayout_5->addWidget(groupBox_boundingBox, 3, 0, 1, 3);


        gridLayout_8->addWidget(groupBox_2, 1, 0, 1, 1);

        groupBox_textureSettings = new QGroupBox(scrollAreaWidgetContents);
        groupBox_textureSettings->setObjectName(QStringLiteral("groupBox_textureSettings"));
        gridLayout_6 = new QGridLayout(groupBox_textureSettings);
        gridLayout_6->setObjectName(QStringLiteral("gridLayout_6"));
        checkBox_tileHorizontal = new QCheckBox(groupBox_textureSettings);
        checkBox_tileHorizontal->setObjectName(QStringLiteral("checkBox_tileHorizontal"));

        gridLayout_6->addWidget(checkBox_tileHorizontal, 0, 0, 1, 1);

        checkBox_tileVertical = new QCheckBox(groupBox_textureSettings);
        checkBox_tileVertical->setObjectName(QStringLiteral("checkBox_tileVertical"));

        gridLayout_6->addWidget(checkBox_tileVertical, 1, 0, 1, 1);

        checkBox_usedFor3D = new QCheckBox(groupBox_textureSettings);
        checkBox_usedFor3D->setObjectName(QStringLiteral("checkBox_usedFor3D"));

        gridLayout_6->addWidget(checkBox_usedFor3D, 2, 0, 1, 2);

        label_textureGroup = new QLabel(groupBox_textureSettings);
        label_textureGroup->setObjectName(QStringLiteral("label_textureGroup"));

        gridLayout_6->addWidget(label_textureGroup, 3, 0, 1, 1);

        comboBox_textureGroup = new QComboBox_NoScroll(groupBox_textureSettings);
        comboBox_textureGroup->setObjectName(QStringLiteral("comboBox_textureGroup"));

        gridLayout_6->addWidget(comboBox_textureGroup, 3, 1, 1, 1);


        gridLayout_8->addWidget(groupBox_textureSettings, 2, 0, 1, 1);

        verticalSpacer_2 = new QSpacerItem(17, 1, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_8->addItem(verticalSpacer_2, 3, 0, 1, 1);

        scrollArea->setWidget(scrollAreaWidgetContents);

        gridLayout_2->addWidget(scrollArea, 0, 0, 1, 1);

        splitter->addWidget(frame_2);
        widget = new QWidget(splitter);
        widget->setObjectName(QStringLiteral("widget"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(1);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(widget->sizePolicy().hasHeightForWidth());
        widget->setSizePolicy(sizePolicy2);
        gridLayout = new QGridLayout(widget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        splitter_2 = new QSplitter(widget);
        splitter_2->setObjectName(QStringLiteral("splitter_2"));
        splitter_2->setOrientation(Qt::Vertical);
        widget1 = new QWidget(splitter_2);
        widget1->setObjectName(QStringLiteral("widget1"));
        verticalLayout_2 = new QVBoxLayout(widget1);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        frame_3 = new QFrame(widget1);
        frame_3->setObjectName(QStringLiteral("frame_3"));
        frame_3->setFrameShape(QFrame::NoFrame);
        frame_3->setFrameShadow(QFrame::Plain);
        horizontalLayout_10 = new QHBoxLayout(frame_3);
        horizontalLayout_10->setSpacing(4);
        horizontalLayout_10->setObjectName(QStringLiteral("horizontalLayout_10"));
        horizontalLayout_10->setContentsMargins(4, 4, 4, 4);
        toolButton_animationToggle = new QToolButton(frame_3);
        toolButton_animationToggle->setObjectName(QStringLiteral("toolButton_animationToggle"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/main/icons/control.png"), QSize(), QIcon::Normal, QIcon::Off);
        toolButton_animationToggle->setIcon(icon1);
        toolButton_animationToggle->setAutoRaise(true);
        toolButton_animationToggle->setArrowType(Qt::NoArrow);

        horizontalLayout_10->addWidget(toolButton_animationToggle);

        line_2 = new QFrame(frame_3);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setFrameShadow(QFrame::Plain);
        line_2->setMidLineWidth(0);
        line_2->setFrameShape(QFrame::VLine);

        horizontalLayout_10->addWidget(line_2);

        toolButton_zoomFit = new QToolButton(frame_3);
        toolButton_zoomFit->setObjectName(QStringLiteral("toolButton_zoomFit"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/main/icons/magnifier-zoom-fit.png"), QSize(), QIcon::Normal, QIcon::Off);
        toolButton_zoomFit->setIcon(icon2);
        toolButton_zoomFit->setAutoRaise(true);

        horizontalLayout_10->addWidget(toolButton_zoomFit);

        toolButton_zoomOriginal = new QToolButton(frame_3);
        toolButton_zoomOriginal->setObjectName(QStringLiteral("toolButton_zoomOriginal"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/main/icons/magnifier-zoom-actual-equal.png"), QSize(), QIcon::Normal, QIcon::Off);
        toolButton_zoomOriginal->setIcon(icon3);
        toolButton_zoomOriginal->setAutoRaise(true);

        horizontalLayout_10->addWidget(toolButton_zoomOriginal);

        toolButton_zoomOut = new QToolButton(frame_3);
        toolButton_zoomOut->setObjectName(QStringLiteral("toolButton_zoomOut"));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/main/icons/magnifier-zoom-out.png"), QSize(), QIcon::Normal, QIcon::Off);
        toolButton_zoomOut->setIcon(icon4);
        toolButton_zoomOut->setAutoRaise(true);

        horizontalLayout_10->addWidget(toolButton_zoomOut);

        toolButton_zoomIn = new QToolButton(frame_3);
        toolButton_zoomIn->setObjectName(QStringLiteral("toolButton_zoomIn"));
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/main/icons/magnifier-zoom-in.png"), QSize(), QIcon::Normal, QIcon::Off);
        toolButton_zoomIn->setIcon(icon5);
        toolButton_zoomIn->setAutoRaise(true);

        horizontalLayout_10->addWidget(toolButton_zoomIn);

        horizontalSpacer_11 = new QSpacerItem(103, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_10->addItem(horizontalSpacer_11);


        verticalLayout_2->addWidget(frame_3);

        graphicsView_spritePreview = new QGraphicsView(widget1);
        graphicsView_spritePreview->setObjectName(QStringLiteral("graphicsView_spritePreview"));

        verticalLayout_2->addWidget(graphicsView_spritePreview);

        splitter_2->addWidget(widget1);
        spriteFrameView = new WidgetSpriteFrameView(splitter_2);
        spriteFrameView->setObjectName(QStringLiteral("spriteFrameView"));
        spriteFrameView->setFrameShape(QFrame::StyledPanel);
        spriteFrameView->setFrameShadow(QFrame::Raised);
        splitter_2->addWidget(spriteFrameView);

        gridLayout->addWidget(splitter_2, 0, 0, 1, 1);

        splitter->addWidget(widget);

        gridLayout_9->addWidget(splitter, 0, 0, 1, 1);

        ResourceEditor_Sprite->setCentralWidget(centralwidget);
        toolBar = new QToolBar(ResourceEditor_Sprite);
        toolBar->setObjectName(QStringLiteral("toolBar"));
        ResourceEditor_Sprite->addToolBar(Qt::TopToolBarArea, toolBar);

        toolBar->addAction(actionSave_Close);
        toolBar->addSeparator();

        retranslateUi(ResourceEditor_Sprite);

        QMetaObject::connectSlotsByName(ResourceEditor_Sprite);
    } // setupUi

    void retranslateUi(QMainWindow *ResourceEditor_Sprite)
    {
        ResourceEditor_Sprite->setWindowTitle(QApplication::translate("ResourceEditor_Sprite", "MainWindow", 0));
        actionSave_Close->setText(QApplication::translate("ResourceEditor_Sprite", "Save & Close", 0));
#ifndef QT_NO_TOOLTIP
        actionSave_Close->setToolTip(QApplication::translate("ResourceEditor_Sprite", "Save and close Sprite", 0));
#endif // QT_NO_TOOLTIP
        groupBox_properties->setTitle(QApplication::translate("ResourceEditor_Sprite", "Properties", 0));
        label_widthTitle->setText(QApplication::translate("ResourceEditor_Sprite", "Width:", 0));
        label_widthValue->setText(QApplication::translate("ResourceEditor_Sprite", "0", 0));
        label_heightLabel->setText(QApplication::translate("ResourceEditor_Sprite", "Height:", 0));
        label_heightValue->setText(QApplication::translate("ResourceEditor_Sprite", "0", 0));
        label_numSubimagesLabel->setText(QApplication::translate("ResourceEditor_Sprite", "Number of subimages:", 0));
        label_numSubimagesValue->setText(QApplication::translate("ResourceEditor_Sprite", "0", 0));
        label_OriginLabel->setText(QApplication::translate("ResourceEditor_Sprite", "Origin:", 0));
        label_originX->setText(QApplication::translate("ResourceEditor_Sprite", "X", 0));
        label_originY->setText(QApplication::translate("ResourceEditor_Sprite", "Y", 0));
        pushButton_originCenter->setText(QApplication::translate("ResourceEditor_Sprite", "Center", 0));
        groupBox_2->setTitle(QApplication::translate("ResourceEditor_Sprite", "Collision Checking", 0));
        checkBox_preciseCollisionChecking->setText(QApplication::translate("ResourceEditor_Sprite", "&Precise collision checking", 0));
#ifndef QT_NO_TOOLTIP
        checkBox_seperateCollisionMasks->setToolTip(QApplication::translate("ResourceEditor_Sprite", "Seperate collision masks for subimages", 0));
#endif // QT_NO_TOOLTIP
        checkBox_seperateCollisionMasks->setText(QApplication::translate("ResourceEditor_Sprite", "Seper&ate collision masks", 0));
        label_alphaTolerance->setText(QApplication::translate("ResourceEditor_Sprite", "Alpha Tolerance:", 0));
        groupBox_boundingBox->setTitle(QApplication::translate("ResourceEditor_Sprite", "Bounding Box", 0));
        label_bboxType->setText(QApplication::translate("ResourceEditor_Sprite", "Type:", 0));
        label_bboxShape->setText(QApplication::translate("ResourceEditor_Sprite", "Shape:", 0));
        label_bboxLeft->setText(QApplication::translate("ResourceEditor_Sprite", "Left: ", 0));
        label_bboxRight->setText(QApplication::translate("ResourceEditor_Sprite", "Right:", 0));
        label_bboxTop->setText(QApplication::translate("ResourceEditor_Sprite", "Top:", 0));
        label_bboxBottom->setText(QApplication::translate("ResourceEditor_Sprite", "Bottom:", 0));
        groupBox_textureSettings->setTitle(QApplication::translate("ResourceEditor_Sprite", "Texture Settings", 0));
        checkBox_tileHorizontal->setText(QApplication::translate("ResourceEditor_Sprite", "Tile: Horizontal", 0));
        checkBox_tileVertical->setText(QApplication::translate("ResourceEditor_Sprite", "Tile: Vertical", 0));
        checkBox_usedFor3D->setText(QApplication::translate("ResourceEditor_Sprite", "Used for 3D (Must be a power of 2)", 0));
        label_textureGroup->setText(QApplication::translate("ResourceEditor_Sprite", "Texture Group:", 0));
        toolButton_animationToggle->setText(QString());
        toolButton_zoomFit->setText(QString());
        toolButton_zoomOriginal->setText(QString());
        toolButton_zoomOut->setText(QString());
        toolButton_zoomIn->setText(QString());
        toolBar->setWindowTitle(QApplication::translate("ResourceEditor_Sprite", "toolBar", 0));
    } // retranslateUi

};

namespace Ui {
    class ResourceEditor_Sprite: public Ui_ResourceEditor_Sprite {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RESOURCEEDITOR_SPRITE_H
