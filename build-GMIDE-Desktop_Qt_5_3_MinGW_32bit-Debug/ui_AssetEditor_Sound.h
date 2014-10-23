/********************************************************************************
** Form generated from reading UI file 'AssetEditor_Sound.ui'
**
** Created by: Qt User Interface Compiler version 5.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ASSETEDITOR_SOUND_H
#define UI_ASSETEDITOR_SOUND_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AssetEditor_Sound
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
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_4;
    QCheckBox *checkBox_compress;
    QLabel *label_5;
    QComboBox *comboBox_streaming;
    QGroupBox *groupBox_textureSettings;
    QGridLayout *gridLayout_6;
    QLabel *label_channels;
    QLabel *label_sampleRate;
    QComboBox *comboBox_channels;
    QComboBox *comboBox_sampleRate;
    QLabel *label__depth;
    QLabel *label_kbps;
    QComboBox *comboBox_depth;
    QComboBox *comboBox_bitRate;
    QSpacerItem *verticalSpacer_2;
    QGroupBox *groupBox_properties;
    QGridLayout *gridLayout_3;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_filenameTitle;
    QLabel *label_filenameValue;
    QSpacerItem *horizontalSpacer_7;
    QWidget *widget;
    QGridLayout *gridLayout;
    QFrame *frame;
    QVBoxLayout *verticalLayout_2;
    QFrame *frame_3;
    QHBoxLayout *horizontalLayout_10;
    QToolButton *toolButton_animationToggle;
    QSpacerItem *horizontalSpacer_11;
    QFrame *frame_4;
    QToolBar *toolBar;

    void setupUi(QMainWindow *AssetEditor_Sound)
    {
        if (AssetEditor_Sound->objectName().isEmpty())
            AssetEditor_Sound->setObjectName(QStringLiteral("AssetEditor_Sound"));
        AssetEditor_Sound->resize(800, 600);
        actionSave_Close = new QAction(AssetEditor_Sound);
        actionSave_Close->setObjectName(QStringLiteral("actionSave_Close"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/main/icons/tick.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSave_Close->setIcon(icon);
        centralwidget = new QWidget(AssetEditor_Sound);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        gridLayout_9 = new QGridLayout(centralwidget);
        gridLayout_9->setObjectName(QStringLiteral("gridLayout_9"));
        splitter = new QSplitter(centralwidget);
        splitter->setObjectName(QStringLiteral("splitter"));
        splitter->setOrientation(Qt::Horizontal);
        frame_2 = new QFrame(splitter);
        frame_2->setObjectName(QStringLiteral("frame_2"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(1);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(frame_2->sizePolicy().hasHeightForWidth());
        frame_2->setSizePolicy(sizePolicy);
        frame_2->setMinimumSize(QSize(0, 0));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        gridLayout_2 = new QGridLayout(frame_2);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        scrollArea = new QScrollArea(frame_2);
        scrollArea->setObjectName(QStringLiteral("scrollArea"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(scrollArea->sizePolicy().hasHeightForWidth());
        scrollArea->setSizePolicy(sizePolicy1);
        scrollArea->setMinimumSize(QSize(250, 0));
        scrollArea->setFrameShape(QFrame::StyledPanel);
        scrollArea->setFrameShadow(QFrame::Raised);
        scrollArea->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        scrollArea->setSizeAdjustPolicy(QAbstractScrollArea::AdjustToContents);
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QStringLiteral("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 248, 546));
        gridLayout_8 = new QGridLayout(scrollAreaWidgetContents);
        gridLayout_8->setObjectName(QStringLiteral("gridLayout_8"));
        groupBox_2 = new QGroupBox(scrollAreaWidgetContents);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        gridLayout_4 = new QGridLayout(groupBox_2);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        checkBox_compress = new QCheckBox(groupBox_2);
        checkBox_compress->setObjectName(QStringLiteral("checkBox_compress"));

        gridLayout_4->addWidget(checkBox_compress, 0, 0, 1, 1);

        label_5 = new QLabel(groupBox_2);
        label_5->setObjectName(QStringLiteral("label_5"));

        gridLayout_4->addWidget(label_5, 1, 0, 1, 1);

        comboBox_streaming = new QComboBox(groupBox_2);
        comboBox_streaming->setObjectName(QStringLiteral("comboBox_streaming"));

        gridLayout_4->addWidget(comboBox_streaming, 2, 0, 1, 1);


        gridLayout_8->addWidget(groupBox_2, 1, 0, 1, 1);

        groupBox_textureSettings = new QGroupBox(scrollAreaWidgetContents);
        groupBox_textureSettings->setObjectName(QStringLiteral("groupBox_textureSettings"));
        gridLayout_6 = new QGridLayout(groupBox_textureSettings);
        gridLayout_6->setObjectName(QStringLiteral("gridLayout_6"));
        label_channels = new QLabel(groupBox_textureSettings);
        label_channels->setObjectName(QStringLiteral("label_channels"));

        gridLayout_6->addWidget(label_channels, 0, 0, 1, 1);

        label_sampleRate = new QLabel(groupBox_textureSettings);
        label_sampleRate->setObjectName(QStringLiteral("label_sampleRate"));

        gridLayout_6->addWidget(label_sampleRate, 0, 1, 1, 1);

        comboBox_channels = new QComboBox(groupBox_textureSettings);
        comboBox_channels->setObjectName(QStringLiteral("comboBox_channels"));

        gridLayout_6->addWidget(comboBox_channels, 1, 0, 1, 1);

        comboBox_sampleRate = new QComboBox(groupBox_textureSettings);
        comboBox_sampleRate->setObjectName(QStringLiteral("comboBox_sampleRate"));

        gridLayout_6->addWidget(comboBox_sampleRate, 1, 1, 1, 1);

        label__depth = new QLabel(groupBox_textureSettings);
        label__depth->setObjectName(QStringLiteral("label__depth"));

        gridLayout_6->addWidget(label__depth, 2, 0, 1, 1);

        label_kbps = new QLabel(groupBox_textureSettings);
        label_kbps->setObjectName(QStringLiteral("label_kbps"));

        gridLayout_6->addWidget(label_kbps, 2, 1, 1, 1);

        comboBox_depth = new QComboBox(groupBox_textureSettings);
        comboBox_depth->setObjectName(QStringLiteral("comboBox_depth"));

        gridLayout_6->addWidget(comboBox_depth, 3, 0, 1, 1);

        comboBox_bitRate = new QComboBox(groupBox_textureSettings);
        comboBox_bitRate->setObjectName(QStringLiteral("comboBox_bitRate"));

        gridLayout_6->addWidget(comboBox_bitRate, 3, 1, 1, 1);


        gridLayout_8->addWidget(groupBox_textureSettings, 2, 0, 1, 1);

        verticalSpacer_2 = new QSpacerItem(17, 1, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_8->addItem(verticalSpacer_2, 3, 0, 1, 1);

        groupBox_properties = new QGroupBox(scrollAreaWidgetContents);
        groupBox_properties->setObjectName(QStringLiteral("groupBox_properties"));
        groupBox_properties->setFlat(false);
        gridLayout_3 = new QGridLayout(groupBox_properties);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        label_filenameTitle = new QLabel(groupBox_properties);
        label_filenameTitle->setObjectName(QStringLiteral("label_filenameTitle"));

        horizontalLayout_6->addWidget(label_filenameTitle);

        label_filenameValue = new QLabel(groupBox_properties);
        label_filenameValue->setObjectName(QStringLiteral("label_filenameValue"));

        horizontalLayout_6->addWidget(label_filenameValue);


        gridLayout_3->addLayout(horizontalLayout_6, 0, 0, 1, 1);

        horizontalSpacer_7 = new QSpacerItem(276, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_7, 0, 1, 1, 1);


        gridLayout_8->addWidget(groupBox_properties, 0, 0, 1, 1);

        scrollArea->setWidget(scrollAreaWidgetContents);

        gridLayout_2->addWidget(scrollArea, 0, 0, 1, 1);

        splitter->addWidget(frame_2);
        widget = new QWidget(splitter);
        widget->setObjectName(QStringLiteral("widget"));
        QSizePolicy sizePolicy2(QSizePolicy::MinimumExpanding, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(100);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(widget->sizePolicy().hasHeightForWidth());
        widget->setSizePolicy(sizePolicy2);
        gridLayout = new QGridLayout(widget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setHorizontalSpacing(0);
        gridLayout->setContentsMargins(0, 0, 0, 0);
        frame = new QFrame(widget);
        frame->setObjectName(QStringLiteral("frame"));
        QSizePolicy sizePolicy3(QSizePolicy::MinimumExpanding, QSizePolicy::Preferred);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(frame->sizePolicy().hasHeightForWidth());
        frame->setSizePolicy(sizePolicy3);
        verticalLayout_2 = new QVBoxLayout(frame);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        frame_3 = new QFrame(frame);
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
        icon1.addFile(QStringLiteral(":/main/icons/control-pause.png"), QSize(), QIcon::Normal, QIcon::On);
        toolButton_animationToggle->setIcon(icon1);
        toolButton_animationToggle->setCheckable(true);
        toolButton_animationToggle->setChecked(false);
        toolButton_animationToggle->setAutoRaise(true);
        toolButton_animationToggle->setArrowType(Qt::NoArrow);

        horizontalLayout_10->addWidget(toolButton_animationToggle);

        horizontalSpacer_11 = new QSpacerItem(103, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_10->addItem(horizontalSpacer_11);


        verticalLayout_2->addWidget(frame_3);


        gridLayout->addWidget(frame, 0, 0, 1, 1);

        frame_4 = new QFrame(widget);
        frame_4->setObjectName(QStringLiteral("frame_4"));
        QSizePolicy sizePolicy4(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(1);
        sizePolicy4.setHeightForWidth(frame_4->sizePolicy().hasHeightForWidth());
        frame_4->setSizePolicy(sizePolicy4);
        frame_4->setFrameShape(QFrame::StyledPanel);
        frame_4->setFrameShadow(QFrame::Raised);

        gridLayout->addWidget(frame_4, 1, 0, 1, 1);

        splitter->addWidget(widget);

        gridLayout_9->addWidget(splitter, 0, 0, 1, 1);

        AssetEditor_Sound->setCentralWidget(centralwidget);
        toolBar = new QToolBar(AssetEditor_Sound);
        toolBar->setObjectName(QStringLiteral("toolBar"));
        AssetEditor_Sound->addToolBar(Qt::TopToolBarArea, toolBar);

        toolBar->addAction(actionSave_Close);
        toolBar->addSeparator();

        retranslateUi(AssetEditor_Sound);

        QMetaObject::connectSlotsByName(AssetEditor_Sound);
    } // setupUi

    void retranslateUi(QMainWindow *AssetEditor_Sound)
    {
        AssetEditor_Sound->setWindowTitle(QApplication::translate("AssetEditor_Sound", "MainWindow", 0));
        actionSave_Close->setText(QApplication::translate("AssetEditor_Sound", "Save & Close", 0));
#ifndef QT_NO_TOOLTIP
        actionSave_Close->setToolTip(QApplication::translate("AssetEditor_Sound", "Save and close asset", 0));
#endif // QT_NO_TOOLTIP
        groupBox_2->setTitle(QApplication::translate("AssetEditor_Sound", "Attributes", 0));
#ifndef QT_NO_TOOLTIP
        checkBox_compress->setToolTip(QApplication::translate("AssetEditor_Sound", "Compress audio to Ogg Vorbis format", 0));
#endif // QT_NO_TOOLTIP
        checkBox_compress->setText(QApplication::translate("AssetEditor_Sound", "Compress Audio", 0));
        label_5->setText(QApplication::translate("AssetEditor_Sound", "Streaming:", 0));
        groupBox_textureSettings->setTitle(QApplication::translate("AssetEditor_Sound", "Target Options", 0));
        label_channels->setText(QApplication::translate("AssetEditor_Sound", "Channels: ", 0));
        label_sampleRate->setText(QApplication::translate("AssetEditor_Sound", "Sample Rate:", 0));
        label__depth->setText(QApplication::translate("AssetEditor_Sound", "Depth:", 0));
        label_kbps->setText(QApplication::translate("AssetEditor_Sound", "Bit Rate:", 0));
        groupBox_properties->setTitle(QApplication::translate("AssetEditor_Sound", "Properties", 0));
        label_filenameTitle->setText(QApplication::translate("AssetEditor_Sound", "Filename:", 0));
        label_filenameValue->setText(QApplication::translate("AssetEditor_Sound", "0", 0));
#ifndef QT_NO_TOOLTIP
        toolButton_animationToggle->setToolTip(QApplication::translate("AssetEditor_Sound", "Play/Pause animation", 0));
#endif // QT_NO_TOOLTIP
        toolButton_animationToggle->setText(QString());
        toolBar->setWindowTitle(QApplication::translate("AssetEditor_Sound", "toolBar", 0));
    } // retranslateUi

};

namespace Ui {
    class AssetEditor_Sound: public Ui_AssetEditor_Sound {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ASSETEDITOR_SOUND_H
