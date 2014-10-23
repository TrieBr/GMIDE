#include "WidgetSpriteFrameView.h"
#include <QScrollBar>

WidgetSpriteFrameView::WidgetSpriteFrameView(QWidget *parent) :
     QFrame(parent), lastSpacer(NULL), layout(NULL)
{
    //Make a layout so the scrollArea will fill this widget
    QBoxLayout *fillLayout = new QBoxLayout(QBoxLayout::TopToBottom);
    fillLayout->setContentsMargins(0,0,0,0);

    scrollArea = new QScrollArea(this);
    scrollArea->setWidget(new QWidget(this));
    scrollArea->setWidgetResizable(true);
    scrollArea->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOn); //ScrollBarAsNeeded causes a bug (segmentation fault when it disappears and updateGeomery() is called)
    layout = new QBoxLayout(QBoxLayout::LeftToRight);
    scrollArea->widget()->setLayout(layout);
    fillLayout->addWidget(scrollArea);
    this->setLayout(fillLayout);

}



//Add a frame to display in the frame view
void WidgetSpriteFrameView::AddFrame(const QPixmap &frameImage)
{

    if (lastSpacer) { //If there is a spacer on the end of the layout, remove it.
        layout->removeItem(lastSpacer);
    }

    //Create a new Frame
    WidgetSpriteFrameView_Frame *frameLabel = new WidgetSpriteFrameView_Frame(this);
    frameLabel->setPixmap(frameImage);
    layout->addWidget(frameLabel,0);

    if (!lastSpacer) { //We need to create a spacer if it has not been created yet
        lastSpacer = new QSpacerItem(0,0,QSizePolicy::Expanding);
    }
    layout->addItem(lastSpacer);

    frames.append(frameLabel);  //Append the Frame to the list of frames
}

//Set selected Frame
void WidgetSpriteFrameView::SetSelected(int index)
{
    for(int i=0; i<frames.size(); i++) { //For each frame, we unselect it
        frames.at(i)->SetSelected(false);
        frames.at(i)->update();
    }
    selectedIndex = index; //Set the selected index
    frames.at(index)->SetSelected(); //Select the new frame
    frames.at(index)->update();

    emit (frameSelectionChanged(index)); //Emit signal

}

//Select a specific frame
void WidgetSpriteFrameView::SetSelected(WidgetSpriteFrameView_Frame* frame)
{
    SetSelected(frames.indexOf(frame));
}
