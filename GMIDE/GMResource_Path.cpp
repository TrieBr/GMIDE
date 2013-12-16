#include "GMResource_Path.h"

GMResource_Path::GMResource_Path()
{
}

bool GMResource_Path::Load(const QString &fileName) {
    this->GMResource::Load(fileName);
    return false;
}
QPixmap GMResource_Path::GetPixmap() {
    return QPixmap(":/main/icons/arrow-turn-090-left.png") ;
}
