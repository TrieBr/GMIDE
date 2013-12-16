#ifndef RESOURCEEDITOR_ROOM_H
#define RESOURCEEDITOR_ROOM_H

#include <QMainWindow>
#include "ResourceEditor.h"
#include "GMResource_Room.h"
#include <QGraphicsScene>

namespace Ui {
class ResourceEditor_Room;
}

class ResourceEditor_Room : public QMainWindow
{
    Q_OBJECT

public:
    explicit ResourceEditor_Room(GMResource_Room* resource,QWidget *parent = 0);
    ~ResourceEditor_Room();

private:
    Ui::ResourceEditor_Room *ui;
    QGraphicsScene* graphicsScene;
    GMResource_Room* resource;
};

#endif // RESOURCEEDITOR_ROOM_H
