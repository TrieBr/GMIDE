#include "GMAsset_Room.h"
#include "AssetEditor_Room.h"
GMAsset_Room::GMAsset_Room()
{
    assetType =  GMAssetType::ROOM;
}

//Load the asset from the specified file
bool GMAsset_Room::Load(const QFileInfo &file)
{
    this->GMAsset::Load(file);
    return false;
}

//Get pixmap icon for this asset
QPixmap GMAsset_Room::GetPixmap()
{
    return QPixmap(":/main/icons/projection-screen.png") ;
}

//Create asset editor for this room
QSharedPointer<AssetEditor> GMAsset_Room::CreateEditor()
{
    QSharedPointer<AssetEditor> editor = QSharedPointer<AssetEditor>(new AssetEditor_Room(this));
    return editor;
}
