#include "GMAsset_Object.h"

GMAsset_Object::GMAsset_Object()
{
    assetType =  GMAssetType::OBJECT;
}
//Load the asset from the specified file
bool GMAsset_Object::Load(const QFileInfo &file)
{
    this->GMAsset::Load(file);
    return false;
}

//Get the pixmap icon for this asset
QPixmap GMAsset_Object::GetPixmap()
{
    return QPixmap(":/main/icons/block.png") ;
}
