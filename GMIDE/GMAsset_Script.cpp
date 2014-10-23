#include "GMAsset_Script.h"

GMAsset_Script::GMAsset_Script()
{
    assetType =  GMAssetType::SCRIPT;
}

//Load the asset from the specified file
bool GMAsset_Script::Load(const QFileInfo &file)
{
    this->GMAsset::Load(file);
    return false;
}

//Get the pixmap icon for this asset
QPixmap GMAsset_Script::GetPixmap()
{
    return QPixmap(":/main/icons/document-binary.png") ;
}

