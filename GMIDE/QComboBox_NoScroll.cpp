#include "QComboBox_NoScroll.h"
#include <QWheelEvent>

QComboBox_NoScroll::QComboBox_NoScroll(QWidget *parent) :
    QComboBox(parent)
{
    setFocusPolicy( Qt::StrongFocus ); //Disable the mouse wheel from focusing this element

}

//Mouse wheel event
void QComboBox_NoScroll::wheelEvent(QWheelEvent *event)
{
    if (!hasFocus()) {
        event->ignore(); //Ignore the event if we don't have focus
    }else{
        QComboBox::wheelEvent(event);
    }
}
