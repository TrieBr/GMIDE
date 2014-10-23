#ifndef GMASSET_PATH_H
#define GMASSET_PATH_H

#include "GMAsset.h"

class GMAsset_Path : public GMAsset
{
public:
    GMAsset_Path();
    //Load the asset from the specified file
    virtual bool Load(const QFileInfo &file);
    //Get the pixmap icon for this asset
    virtual QPixmap GetPixmap();
};

#endif // GMASSET_PATH_H
