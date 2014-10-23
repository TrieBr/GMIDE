#ifndef QCOMBOBOX_NOSCROLL_H
#define QCOMBOBOX_NOSCROLL_H

#include <QComboBox>


/*
 *  Since a regular QComboBox captures the mouse wheel to scroll the selection, it steals the scrolling input from a QScrollView, which causes annoying scrolling jams.
 *  This Combobox disables scrolling selection so it will not steal from a scroll view.
 *
 *
 * */

class QComboBox_NoScroll : public QComboBox
{
    Q_OBJECT
public:
    explicit QComboBox_NoScroll(QWidget *parent = 0);

protected:
    //Mouse wheel event
    void wheelEvent(QWheelEvent *event);

signals:

public slots:

};

#endif // QCOMBOBOX_NOSCROLL_H
