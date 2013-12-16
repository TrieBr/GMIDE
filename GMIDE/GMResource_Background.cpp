#include "GMResource_Background.h"

GMResource_Background::GMResource_Background()
{
}

bool GMResource_Background::Load(const QString &fileName) {
    this->GMResource::Load(fileName);
    return false;
}
QPixmap GMResource_Background::GetPixmap() {
    return QPixmap(":/main/icons/picture.png") ;
}

