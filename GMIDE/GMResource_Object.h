#ifndef GMRESOURCE_OBJECT_H
#define GMRESOURCE_OBJECT_H

#include "GMResource.h"

class GMResource_Object : public GMResource
{
public:
    GMResource_Object();
    virtual bool Load(const QString &fileName);
    virtual QPixmap GetPixmap();
};

#endif // GMRESOURCE_OBJECT_H
