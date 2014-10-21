#include "GMResource_Shader.h"

GMResource_Shader::GMResource_Shader()
{
    resourceType = GM_RESOURCE_SHADER;
}

bool GMResource_Shader::Load(const QFileInfo &file) {
    this->GMResource::Load(file);
    return false;
}
QPixmap GMResource_Shader::GetPixmap() {
    return QPixmap(":/main/icons/color.png") ;
}
