#include "WidgetSpriteFrameView_Frame.h"
#include "WidgetSpriteFrameView.h"
#include <QResizeEvent>
#include <QSizePolicy>
#include <QPainter>

WidgetSpriteFrameView_Frame::WidgetSpriteFrameView_Frame(WidgetSpriteFrameView* parentView, QWidget *parent) :
    parentView(parentView), QFrame(parent), isSelected(false)
{
    setFrameShape(Shape::StyledPanel); //Show a border
    setMinimumHeight(32); //Set minimum height to 32
    //Sset size policy
    this->setSizePolicy(QSizePolicy::Fixed,QSizePolicy::MinimumExpanding);

}

//Set if this frame is selected or not
void WidgetSpriteFrameView_Frame::SetSelected(bool selected)
{
    isSelected = selected;
}

//overrides QWidget sizeHint()
QSize WidgetSpriteFrameView_Frame::sizeHint() const
{
        return hint;
}

//Set the pixmap to display
void WidgetSpriteFrameView_Frame::setPixmap ( const QPixmap & p)
{
    pix = p;
}


//paint the widget (override QWidget paintEvent)
void  WidgetSpriteFrameView_Frame::paintEvent ( QPaintEvent * event )
{

     QFrame::paintEvent(event);
    QPainter painter(this);
    QSize newSize = pix.size().scaled(contentsRect().size(),Qt::KeepAspectRatio); //Resize the pixmap dimensions to fit
    //Calculate where to draw the pixmap so it is center
    QPoint drawPoint = QPoint(contentsRect().center().x()-floor(newSize.width()/2),contentsRect().center().y()-floor(newSize.height()/2));
    //draw the pixmap
    painter.drawPixmap(QRect(drawPoint.x(),drawPoint.y(),newSize.width(),newSize.height()),pix,pix.rect());
    if (isSelected) { //Draw a border if this frame is selected
        painter.setPen(QColor(Qt::white));
        painter.drawRect(contentsRect());
    }


}

//Resize event
void WidgetSpriteFrameView_Frame::resizeEvent(QResizeEvent * e)
{
    this->setFixedWidth(e->size().height()); //Set the fixed width to match the height
}

//Mouse release event
void WidgetSpriteFrameView_Frame::mouseReleaseEvent ( QMouseEvent * event )
{
    if (parentView) //Make sure parent isnt NULL
        parentView->SetSelected(this); //Set the selected frame on the frameview to this one
}
