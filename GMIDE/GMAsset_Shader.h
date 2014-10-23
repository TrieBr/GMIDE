#ifndef GMASSET_SHADER_H
#define GMASSET_SHADER_H

#include "GMAsset.h"

class GMAsset_Shader : public GMAsset
{
public:
    GMAsset_Shader();
    virtual bool Load(const QFileInfo &file);
    virtual QPixmap GetPixmap();
};

#endif // GMASSET_SHADER_H
