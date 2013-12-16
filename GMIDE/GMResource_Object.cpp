#include "GMResource_Object.h"

GMResource_Object::GMResource_Object()
{
}

bool GMResource_Object::Load(const QString &fileName) {
    this->GMResource::Load(fileName);
    return false;
}
QPixmap GMResource_Object::GetPixmap() {
    return QPixmap(":/main/icons/block.png") ;
}
