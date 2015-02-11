#ifndef GMPROJECT_H
#define GMPROJECT_H

#include <QDomDocument>
#include <iostream>
#include "GMAsset_Sprite.h"
#include "GMAsset_Sound.h"
#include "GMAsset_Background.h"
#include "GMAsset_Path.h"
#include "GMAsset_Script.h"
#include "GMAsset_Shader.h"
#include "GMAsset_Font.h"
#include "GMAsset_TimeLine.h"
#include "GMAsset_Object.h"
#include "GMAsset_Room.h"
#include "GMAsset_IncludedFile.h"
#include "GMAssetNode.h"
#include "Logger.h"


/*
 * Represents a single GameMaker project along with the assets
 * */

class GMProject
{
public:
    //Constructor
    GMProject();
    //Load the specified project
    virtual bool Load(const QString &fileName);
    //Item model for the resources
    QStandardItemModel* ItemModel();
private:
    //The project file (ie Game.project.gmx)
    QFile projectFile;
    //Assets
    GMAssetNode<GMAsset_Sprite> assetSprites;
    GMAssetNode<GMAsset_Sound> assetSounds;
    GMAssetNode<GMAsset_Background> assetBackgrounds;
    GMAssetNode<GMAsset_Path> assetPaths;
    GMAssetNode<GMAsset_Script> assetScripts;
    GMAssetNode<GMAsset_Shader> assetShaders;
    GMAssetNode<GMAsset_Font> assetFonts;
    GMAssetNode<GMAsset_TimeLine> assetTimeLines;
    GMAssetNode<GMAsset_Object> assetObjects;
    GMAssetNode<GMAsset_Room> assetRooms;
    GMAssetNode<GMAsset_IncludedFile> assetIncludedFiles;


    //Processes a Dom tree into the specified AssetNode
    template <class T>
    bool LoadGroupRooms(GMAssetNode<T>* group, QDomElement *groupRoot) {
        QDomNode n = groupRoot->firstChild();
        while (!n.isNull()) {
            QDomElement e = n.toElement();
            if (!e.isNull()) {
                if (e.tagName().compare(groupRoot->tagName())==0) { //This is a recursive grouo, so we parse it recursively
                    GMAssetNode<T>* child = group->CreateChild(e.attribute("name","Undefined_Group"));
                    LoadGroupRooms(child,&e);
                }else{
                    GMAssetNode<T>* child = group->CreateChild("Undefined_Item"); //Create new GMAssetNode
                    QSharedPointer<T> newAsset = QSharedPointer<T>(new T()); //Create the new asset
                    //Get the path for the specified asset
                    QString assetName = QFileInfo(projectFile).absolutePath().append("/").append(e.text());
                    if (newAsset->GetAssetType()!=SCRIPT) { //If it is not a script, we need to append the appropriate extension (.sprite.gmx for example)
                        assetName.append(".").append(GMAsset::GetAssetTypeString(newAsset->GetAssetType())).append(".").append(GMAsset::GetAssetTypeExtension(newAsset->GetAssetType()));
                    }
                    //Generate the full asset filepath and store as QFileInfo
                    QFileInfo assetPath = QFileInfo(assetName);
                    newAsset->Load(assetPath); //Load the asset
                    child->SetAsset(newAsset); //Set the GMAssetNode to point to the loaded asset
                    Logger::Trace() << "Loaded Asset: " << qPrintable(assetPath.canonicalFilePath()) << "\n";
                }
            }
            n = n.nextSibling();
        }
        return true;
    }

};

#endif // GMPROJECT_H
