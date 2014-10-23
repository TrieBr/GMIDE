#ifndef GMASSET_SCRIPT_H
#define GMASSET_SCRIPT_H

#include "GMAsset.h"

class GMAsset_Script : public GMAsset
{
public:
    GMAsset_Script();
    //Load the asset from the specified file
    virtual bool Load(const QFileInfo &file);
    //Get the pixmap icon fir this asset
    virtual QPixmap GetPixmap();
};


#endif // GMASSET_SCRIPT_H
