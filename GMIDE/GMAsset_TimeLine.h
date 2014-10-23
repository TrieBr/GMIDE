#ifndef GMASSET_TIMELINE_H
#define GMASSET_TIMELINE_H

#include "GMAsset.h"

class GMAsset_TimeLine : public GMAsset
{
public:
    //Cosntructor
    GMAsset_TimeLine();
    //Load the asset from the specified file
    virtual bool Load(const QFileInfo &file);
    //Get the pixmap icon for this sprite
    virtual QPixmap GetPixmap();
};

#endif // GMASSET_TIMELINE_H
