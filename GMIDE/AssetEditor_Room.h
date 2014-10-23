#ifndef ASSETEDITOR_ROOM_H
#define ASSETEDITOR_ROOM_H

#include <QMainWindow>
#include "AssetEditor.h"
#include "GMAsset_Room.h"
#include <QGraphicsScene>

/*
 * A QMainWindow containing an editor for room assets
 *
 * */

namespace Ui {
class AssetEditor_Room;
}

class AssetEditor_Room : public AssetEditor
{
    Q_OBJECT

public:
    //Constructor
    explicit AssetEditor_Room(GMAsset_Room* asset, QWidget *parent = 0);
    //Destructor
    ~AssetEditor_Room();

private:
    Ui::AssetEditor_Room *ui;       //UI components
    QGraphicsScene* graphicsScene;  //Graphics scene for the tile/object editor
    GMAsset_Room* resource;         //The room resource this editor is editing
};



#endif // ASSETEDITOR_ROOM_H
