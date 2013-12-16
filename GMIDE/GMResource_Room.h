#ifndef GMRESOURCE_ROOM_H
#define GMRESOURCE_ROOM_H
#include "GMResource.h"

class GMResource_Room : public GMResource
{
public:
    GMResource_Room();
    virtual bool Load(const QString &fileName);
    virtual QPixmap GetPixmap();
    virtual QSharedPointer<ResourceEditor> CreateEditor();
};

#endif // GMRESOURCE_ROOM_H
