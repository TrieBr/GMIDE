#ifndef GMRESOURCE_SPRITE_H
#define GMRESOURCE_SPRITE_H

#include "GMResource.h"

class GMResource_Sprite : public GMResource
{
public:
    GMResource_Sprite();
    virtual bool Load(const QString &fileName);
    virtual QPixmap GetPixmap();
};

#endif // GMRESOURCE_SPRITE_H
