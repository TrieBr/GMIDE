#include "GMResource_Sprite.h"

GMResource_Sprite::GMResource_Sprite()
{
}
bool GMResource_Sprite::Load(const QString &fileName) {
    this->GMResource::Load(fileName);
    return false;
}
QPixmap GMResource_Sprite::GetPixmap() {
    return QPixmap(":/main/icons/flower.png") ;
}
