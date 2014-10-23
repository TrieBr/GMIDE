#ifndef GMASSET_OBJECT_H
#define GMASSET_OBJECT_H

#include "GMAsset.h"

class GMAsset_Object : public GMAsset
{
public:
    GMAsset_Object();
    //Load the asset from the specified file
    virtual bool Load(const QFileInfo &file);
    //Get the pixmap icon for this asset
    virtual QPixmap GetPixmap();
};

#endif // GMASSET_OBJECT_H
