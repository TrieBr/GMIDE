#include "GMResource_IncludedFile.h"

GMResource_IncludedFile::GMResource_IncludedFile()
{
}

bool GMResource_IncludedFile::Load(const QString &fileName) {
    this->GMResource::Load(fileName);
    return false;
}
QPixmap GMResource_IncludedFile::GetPixmap() {
    return QPixmap(":/main/icons/document-binary.png") ;
}
