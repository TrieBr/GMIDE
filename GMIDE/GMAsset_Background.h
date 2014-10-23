#ifndef GMASSET_BACKGROUND_H
#define GMASSET_BACKGROUND_H

#include "GMAsset.h"

/*
 *  Background Asset
 *
 * */

class GMAsset_Background : public GMAsset
{
public:
    //Constructor
    GMAsset_Background();
    //Load the asset from the specified file
    virtual bool Load(const QFileInfo &file);
    //Get the icon for the asset
    virtual QPixmap GetPixmap();
};

#endif // GMASSET_BACKGROUND_H
