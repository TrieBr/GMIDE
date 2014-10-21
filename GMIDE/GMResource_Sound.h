#ifndef GMRESOURCE_SOUND_H
#define GMRESOURCE_SOUND_H

#include "GMResource.h"

class GMResource_Sound : public GMResource
{
public:
    GMResource_Sound();
    virtual bool Load(const QFileInfo &file);
    virtual QPixmap GetPixmap();
};

#endif // GMRESOURCE_SOUND_H
