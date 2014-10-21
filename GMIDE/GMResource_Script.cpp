#include "GMResource_Script.h"

GMResource_Script::GMResource_Script()
{
    resourceType = GM_RESOURCE_SCRIPT;
}

bool GMResource_Script::Load(const QFileInfo &file) {
    this->GMResource::Load(file);
    return false;
}
QPixmap GMResource_Script::GetPixmap() {
    return QPixmap(":/main/icons/document-binary.png") ;
}

