#include "GMAsset_IncludedFile.h"

GMAsset_IncludedFile::GMAsset_IncludedFile()
{
    assetType =  GMAssetType::INCLUDEDFILES;
}

//Load the asset from the specified file
bool GMAsset_IncludedFile::Load(const QFileInfo &file)
{
    this->GMAsset::Load(file);
    return false;
}

//Get the pixmap icon for the asset
QPixmap GMAsset_IncludedFile::GetPixmap()
{
    return QPixmap(":/main/icons/document-binary.png") ;
}
