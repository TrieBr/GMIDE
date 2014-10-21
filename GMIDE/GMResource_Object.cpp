#include "GMResource_Object.h"

GMResource_Object::GMResource_Object()
{
    resourceType = GM_RESOURCE_OBJECT;
}

bool GMResource_Object::Load(const QFileInfo &file) {
    this->GMResource::Load(file);
    return false;
}
QPixmap GMResource_Object::GetPixmap() {
    return QPixmap(":/main/icons/block.png") ;
}
