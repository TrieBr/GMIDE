#include "GMAsset.h"
#include <QXmlQuery>
//Constructor
GMAsset::GMAsset()
{
     assetType =  GMAssetType::UNKNOWN;
}

//Set name of asset
void GMAsset::SetName(const QString &str)
{
    name = str;
}

//Get name of asset
QString GMAsset::GetName()
{
    return name;
}

