#include "GMResource_Script.h"

GMResource_Script::GMResource_Script()
{
}

bool GMResource_Script::Load(const QString &fileName) {
    this->GMResource::Load(fileName);
    return false;
}
QPixmap GMResource_Script::GetPixmap() {
    return QPixmap(":/main/icons/document-binary.png") ;
}

