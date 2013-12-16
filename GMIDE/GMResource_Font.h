#ifndef GMRESOURCE_FONT_H
#define GMRESOURCE_FONT_H

#include "GMResource.h"

class GMResource_Font : public GMResource
{
public:
    GMResource_Font();
    virtual bool Load(const QString &fileName);
    virtual QPixmap GetPixmap();
};

#endif // GMRESOURCE_FONT_H