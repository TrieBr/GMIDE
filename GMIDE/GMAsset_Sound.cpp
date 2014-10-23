#include "GMAsset_Sound.h"
#include "AssetEditor_Sound.h"

GMAsset_Sound::GMAsset_Sound()
{
    assetType =  GMAssetType::SOUND;
}

//Load the asset from the specified file
bool GMAsset_Sound::Load(const QFileInfo &file)
{
    this->GMAsset::Load(file);
    return false;
}

//Get the pixmap icon fir this asset
QPixmap GMAsset_Sound::GetPixmap()
{
    return QPixmap(":/main/icons/speaker-volume-none.png") ;
}

//Load the asset from the specified file
QSharedPointer<AssetEditor> GMAsset_Sound::CreateEditor()
{
    QSharedPointer<AssetEditor> editor = QSharedPointer<AssetEditor>( new AssetEditor_Sound(this));
    return editor;
}
