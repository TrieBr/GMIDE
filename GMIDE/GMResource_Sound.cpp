#include "GMResource_Sound.h"

GMResource_Sound::GMResource_Sound()
{
}

bool GMResource_Sound::Load(const QString &fileName) {
    this->GMResource::Load(fileName);
    return false;
}
QPixmap GMResource_Sound::GetPixmap() {
    return QPixmap(":/main/icons/speaker-volume-none.png") ;
}
