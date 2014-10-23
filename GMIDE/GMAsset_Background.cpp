#include "GMAsset_Background.h"

GMAsset_Background::GMAsset_Background()
{
    assetType =  GMAssetType::BACKGROUND;
}

//Load the asset from the specified file
bool GMAsset_Background::Load(const QFileInfo &file)
{
    this->GMAsset::Load(file);
    return false;
}
//Get pixmap icon for the asset
QPixmap GMAsset_Background::GetPixmap()
{
    return QPixmap(":/main/icons/picture.png") ;
}

