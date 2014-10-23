#ifndef GMASSET_SOUND_H
#define GMASSET_SOUND_H

#include "GMAsset.h"

class GMAsset_Sound : public GMAsset
{
public:
    GMAsset_Sound();
    //Load the asset from the specified file
    virtual bool Load(const QFileInfo &file);
    //Get the pixmap icon fir this asset
    virtual QPixmap GetPixmap();
    //Create room editor
    virtual QSharedPointer<AssetEditor> CreateEditor();

};

#endif // GMASSET_SOUND_H
