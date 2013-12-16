#ifndef GMRESOURCE_SCRIPT_H
#define GMRESOURCE_SCRIPT_H

#include "GMResource.h"

class GMResource_Script : public GMResource
{
public:
    GMResource_Script();
    virtual bool Load(const QString &fileName);
    virtual QPixmap GetPixmap();
};


#endif // GMRESOURCE_SCRIPT_H