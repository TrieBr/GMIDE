#include "GMResource_Background.h"

GMResource_Background::GMResource_Background()
{
    resourceType = GM_RESOURCE_BACKGROUND;
}

bool GMResource_Background::Load(const QFileInfo &file) {
    this->GMResource::Load(file);
    return false;
}
QPixmap GMResource_Background::GetPixmap() {
    return QPixmap(":/main/icons/picture.png") ;
}

