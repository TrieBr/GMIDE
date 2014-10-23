#include "GMAsset_TimeLine.h"

GMAsset_TimeLine::GMAsset_TimeLine()
{
    assetType =  GMAssetType::TIMELINE;
}

//Load the asset from the specified file
bool GMAsset_TimeLine::Load(const QFileInfo &file)
{
    this->GMAsset::Load(file);
    return false;
}

//Get the pixmap icon for this asset
QPixmap GMAsset_TimeLine::GetPixmap()
{
    return QPixmap(":/main/icons/alarm-clock--plus.png") ;
}
