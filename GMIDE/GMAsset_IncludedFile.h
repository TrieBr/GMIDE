#ifndef GMASSET_INCLUDEDFILE_H
#define GMASSET_INCLUDEDFILE_H

#include "GMAsset.h"

class GMAsset_IncludedFile : public GMAsset
{
public:
    //Constructor
    GMAsset_IncludedFile();
    //Load the asset from the specified file
    virtual bool Load(const QFileInfo &file);
    //Get the pixmap icon for the asset
    virtual QPixmap GetPixmap();
};

#endif // GMASSET_INCLUDEDFILE_H
