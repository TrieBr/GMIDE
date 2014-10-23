#ifndef WIDGETSPRITEFRAMEVIEW_H
#define WIDGETSPRITEFRAMEVIEW_H

#include <QWidget>
#include <QPixmap>
#include <QScrollArea>
#include <QBoxLayout>
#include <QFrame>
#include <QLabel>
#include <Qsize>
#include "WidgetSpriteFrameView_Frame.h"

/*
 *  This widget is used to display a list of frames in a sprite animation, and allow the user to select frames in which the frameSelectionShanged  signal is emitted.
 *
 *
 * */

class WidgetSpriteFrameView : public QFrame
{
    Q_OBJECT
public:
    //Constructor
    explicit WidgetSpriteFrameView(QWidget *parent = 0);
    //Add a frame to display in the frame view
    void AddFrame(const QPixmap &frameImage);
    //Set selected Frame
    void SetSelected(int index);
    //Select a specific frame
    void SetSelected(WidgetSpriteFrameView_Frame* frame);
signals:
    //A frame as selected
    void frameSelectionChanged(int index);
public slots:

private:
    QList<WidgetSpriteFrameView_Frame*> frames;      //Frames in the frame view
    QScrollArea *scrollArea;                         //The Scroll Area
    QBoxLayout* layout;                              //The Horizontal layout for the frames
    QSpacerItem* lastSpacer;                         //Last spacer in the horizontal layout to fill any remaining space
    int selectedIndex;                               //Currently selected frame index

};

#endif // WIDGETSPRITEFRAMEVIEW_H
