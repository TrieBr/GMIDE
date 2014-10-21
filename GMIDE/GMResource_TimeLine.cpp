#include "GMResource_TimeLine.h"

GMResource_TimeLine::GMResource_TimeLine()
{
    resourceType = GM_RESOURCE_TIMELINE;
}

bool GMResource_TimeLine::Load(const QFileInfo &file) {
    this->GMResource::Load(file);
    return false;
}
QPixmap GMResource_TimeLine::GetPixmap() {
    return QPixmap(":/main/icons/alarm-clock--plus.png") ;
}
