#include "GMResource_IncludedFile.h"

GMResource_IncludedFile::GMResource_IncludedFile()
{
    resourceType = GM_RESOURCE_INCLUDEDFILES;
}

bool GMResource_IncludedFile::Load(const QFileInfo &file) {
    this->GMResource::Load(file);
    return false;
}
QPixmap GMResource_IncludedFile::GetPixmap() {
    return QPixmap(":/main/icons/document-binary.png") ;
}
