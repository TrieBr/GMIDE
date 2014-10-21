#include "GMResource_Sound.h"

GMResource_Sound::GMResource_Sound()
{
    resourceType = GM_RESOURCE_SOUND;
}

bool GMResource_Sound::Load(const QFileInfo &file) {
    this->GMResource::Load(file);
    return false;
}
QPixmap GMResource_Sound::GetPixmap() {
    return QPixmap(":/main/icons/speaker-volume-none.png") ;
}
