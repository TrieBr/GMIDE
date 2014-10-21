#include "GMResource_Path.h"

GMResource_Path::GMResource_Path()
{
    resourceType = GM_RESOURCE_PATH;
}

bool GMResource_Path::Load(const QFileInfo &file) {
    this->GMResource::Load(file);
    return false;
}
QPixmap GMResource_Path::GetPixmap() {
    return QPixmap(":/main/icons/arrow-turn-090-left.png") ;
}
