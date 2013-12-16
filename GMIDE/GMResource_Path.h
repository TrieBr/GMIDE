#ifndef GMRESOURCE_PATH_H
#define GMRESOURCE_PATH_H

#include "GMResource.h"

class GMResource_Path : public GMResource
{
public:
    GMResource_Path();
    virtual bool Load(const QString &fileName);
    virtual QPixmap GetPixmap();
};

#endif // GMRESOURCE_PATH_H
