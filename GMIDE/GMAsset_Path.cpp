#include "GMAsset_Path.h"

GMAsset_Path::GMAsset_Path()
{
    assetType =  GMAssetType::PATH;
}
//Load the asset from the specified file
bool GMAsset_Path::Load(const QFileInfo &file)
{
    this->GMAsset::Load(file);
    return false;
}

//Get the pixmap for this asset
QPixmap GMAsset_Path::GetPixmap()
{
    return QPixmap(":/main/icons/arrow-turn-090-left.png") ;
}
