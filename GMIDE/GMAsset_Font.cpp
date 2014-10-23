#include "GMAsset_Font.h"

GMAsset_Font::GMAsset_Font()
{
    assetType =  GMAssetType::FONT;
}
//Load the asset from the specified file
bool GMAsset_Font::Load(const QFileInfo &file)
{
    this->GMAsset::Load(file);
    return false;
}
//Get the pixmap icon for the file
QPixmap GMAsset_Font::GetPixmap()
{
    return QPixmap(":/main/icons/ui-label.png") ;
}

