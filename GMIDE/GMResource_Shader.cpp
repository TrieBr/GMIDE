#include "GMResource_Shader.h"

GMResource_Shader::GMResource_Shader()
{
}

bool GMResource_Shader::Load(const QString &fileName) {
    this->GMResource::Load(fileName);
    return false;
}
QPixmap GMResource_Shader::GetPixmap() {
    return QPixmap(":/main/icons/color.png") ;
}
