#ifndef GMRESOURCE_BACKGROUND_H
#define GMRESOURCE_BACKGROUND_H

#include "GMResource.h"

class GMResource_Background : public GMResource
{
public:
    GMResource_Background();
    virtual bool Load(const QString &fileName);
    virtual QPixmap GetPixmap();
};

#endif // GMRESOURCE_BACKGROUND_H
