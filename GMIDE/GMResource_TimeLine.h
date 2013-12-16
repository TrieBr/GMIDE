#ifndef GMRESOURCE_TIMELINE_H
#define GMRESOURCE_TIMELINE_H

#include "GMResource.h"

class GMResource_TimeLine : public GMResource
{
public:
    GMResource_TimeLine();
    virtual bool Load(const QString &fileName);
    virtual QPixmap GetPixmap();
};

#endif // GMRESOURCE_TIMELINE_H
