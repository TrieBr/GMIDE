#ifndef RESOURCEEDITOR_SPRITE_H
#define RESOURCEEDITOR_SPRITE_H

#include <QMainWindow>
#include "GMResource_Sprite.h"
#include <QGraphicsScene>

namespace Ui {
class ResourceEditor_Sprite;
}

class ResourceEditor_Sprite : public QMainWindow
{
    Q_OBJECT

public:
    explicit ResourceEditor_Sprite(GMResource_Sprite* resource,QWidget *parent = 0);
    ~ResourceEditor_Sprite();

private:
    Ui::ResourceEditor_Sprite *ui;
    QGraphicsScene* graphicsScene;
    GMResource_Sprite* resource;
};

#endif // RESOURCEEDITOR_SPRITE_H
