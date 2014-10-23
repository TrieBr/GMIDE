#ifndef GMASSET_FONT_H
#define GMASSET_FONT_H

#include "GMAsset.h"

class GMAsset_Font : public GMAsset
{
public:
    //Constructor
    GMAsset_Font();
    //Load the asset from the specified file
    virtual bool Load(const QFileInfo &file);
    //Get the pixmap icon for the asset
    virtual QPixmap GetPixmap();
};

#endif // GMASSET_FONT_H
