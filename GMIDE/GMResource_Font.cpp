#include "GMResource_Font.h"

GMResource_Font::GMResource_Font()
{
}

bool GMResource_Font::Load(const QString &fileName) {
    this->GMResource::Load(fileName);
    return false;
}
QPixmap GMResource_Font::GetPixmap() {
    return QPixmap(":/main/icons/ui-label.png") ;
}

