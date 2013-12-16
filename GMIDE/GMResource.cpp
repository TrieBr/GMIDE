#include "GMResource.h"

GMResource::GMResource()
{
     resourceType = GM_RESOURCE_UNKNOWN;
}


void GMResource::SetName(const QString &str) {
    name = str;
}
QString GMResource::GetName() {
    return name;
}


