#include "GMAsset_Shader.h"

GMAsset_Shader::GMAsset_Shader()
{
    assetType =  GMAssetType::SHADER;
}

bool GMAsset_Shader::Load(const QFileInfo &file) {
    this->GMAsset::Load(file);
    return false;
}
QPixmap GMAsset_Shader::GetPixmap() {
    return QPixmap(":/main/icons/color.png") ;
}
