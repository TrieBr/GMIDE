#ifndef GMASSET_ROOM_H
#define GMASSET_ROOM_H
#include "GMAsset.h"

class GMAsset_Room : public GMAsset
{
public:
    GMAsset_Room();
    //Load the asset from the specified file
    virtual bool Load(const QFileInfo &file);
    //Get the pixmap icon for this file
    virtual QPixmap GetPixmap();
    //Create room editor
    virtual QSharedPointer<AssetEditor> CreateEditor();
};

#endif // GMASSET_ROOM_H
