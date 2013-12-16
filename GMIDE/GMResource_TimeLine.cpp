#include "GMResource_TimeLine.h"

GMResource_TimeLine::GMResource_TimeLine()
{
}

bool GMResource_TimeLine::Load(const QString &fileName) {
    this->GMResource::Load(fileName);
    return false;
}
QPixmap GMResource_TimeLine::GetPixmap() {
    return QPixmap(":/main/icons/alarm-clock--plus.png") ;
}
