#include "GMResource_Font.h"

GMResource_Font::GMResource_Font()
{
    resourceType = GM_RESOURCE_FONT;
}

bool GMResource_Font::Load(const QFileInfo &file) {
    this->GMResource::Load(file);
    return false;
}
QPixmap GMResource_Font::GetPixmap() {
    return QPixmap(":/main/icons/ui-label.png") ;
}

