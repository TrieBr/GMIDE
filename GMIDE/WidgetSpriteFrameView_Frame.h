#ifndef WIDGETSPRITEFRAMEVIEW_PIXMAPLABEL_H
#define WIDGETSPRITEFRAMEVIEW_PIXMAPLABEL_H

#include <QFrame>

/*
 * This class represents a single frame in the sprite frameview widget.

 * */

class WidgetSpriteFrameView;
class WidgetSpriteFrameView_Frame : public QFrame
{
    Q_OBJECT
public:
    //Constructor
    explicit WidgetSpriteFrameView_Frame(WidgetSpriteFrameView* parentView, QWidget *parent = 0);
    //Set the pixmap to display
    void setPixmap ( const QPixmap & );
    //Set if this frame is selected (to show a selection border, etc.)
    void SetSelected(bool selected = true);
    //Override QWidget::sizeHint
    virtual QSize sizeHint() const;

protected:
    //Mouse relese event
    virtual void mouseReleaseEvent ( QMouseEvent * event );
    //Resize event
    void resizeEvent(QResizeEvent *);
    //Paint event
    void paintEvent ( QPaintEvent * event );
private:
  QPixmap pix;                          //The pixmap to render
  bool isSelected;                      //Is this Frame selected?
  QSize hint;                           //Size hint
  WidgetSpriteFrameView* parentView;    //The parent frame view
};

#endif // WIDGETSPRITEFRAMEVIEW_PIXMAPLABEL_H
