#ifndef GMRESOURCE_SHADER_H
#define GMRESOURCE_SHADER_H

#include "GMResource.h"

class GMResource_Shader : public GMResource
{
public:
    GMResource_Shader();
    virtual bool Load(const QString &fileName);
    virtual QPixmap GetPixmap();
};

#endif // GMRESOURCE_SHADER_H
