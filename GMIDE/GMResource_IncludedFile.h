#ifndef GMRESOURCE_INCLUDEDFILE_H
#define GMRESOURCE_INCLUDEDFILE_H

#include "GMResource.h"

class GMResource_IncludedFile : public GMResource
{
public:
    GMResource_IncludedFile();
    virtual bool Load(const QString &fileName);
    virtual QPixmap GetPixmap();
};

#endif // GMRESOURCE_INCLUDEDFILE_H
