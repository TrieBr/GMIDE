#ifndef GMPROJECT_H
#define GMPROJECT_H

#include <QDomDocument>
#include <iostream>
#include "GMResource_Sprite.h"
#include "GMResource_Sound.h"
#include "GMResource_Background.h"
#include "GMResource_Path.h"
#include "GMResource_Script.h"
#include "GMResource_Shader.h"
#include "GMResource_Font.h"
#include "GMResource_TimeLine.h"
#include "GMResource_Object.h"
#include "GMResource_Room.h"
#include "GMResource_IncludedFile.h"
#include "GMResourceNode.h"

class GMProject
{
public:
    GMProject();
    //Load the specified project
    virtual bool Load(const QString &fileName);
    //Item model for the resources
    QStandardItemModel* ItemModel();


private:
    //The project file (ie Game.project.gmx)
    QFile projectFile;
    //Resources
    GMResourceNode<GMResource_Sprite> resourceSprites;
    GMResourceNode<GMResource_Sound> resourceSounds;
    GMResourceNode<GMResource_Background> resourceBackgrounds;
    GMResourceNode<GMResource_Path> resourcePaths;
    GMResourceNode<GMResource_Script> resourceScripts;
    GMResourceNode<GMResource_Shader> resourceShaders;
    GMResourceNode<GMResource_Font> resourceFonts;
    GMResourceNode<GMResource_TimeLine> resourceTimeLines;
    GMResourceNode<GMResource_Object> resourceObjects;
    GMResourceNode<GMResource_Room> resourceRooms;
    GMResourceNode<GMResource_IncludedFile> resourceIncludedFiles;

    template <class T>
    bool LoadGroupRooms(GMResourceNode<T>* group, QDomElement *groupRoot) {
        QDomNode n = groupRoot->firstChild();
        while (!n.isNull()) {
            QDomElement e = n.toElement();
            if (!e.isNull()) {
                if (e.tagName().compare(groupRoot->tagName())==0) { //This is a recursive grouo, so we parse it recursively
                    GMResourceNode<T>* child = group->CreateChild(e.attribute("name","Undefined_Group"));
                    LoadGroupRooms(child,&e);
                }else{
                    GMResourceNode<T>* child = group->CreateChild("Undefined_Item");
                    QSharedPointer<T> newResource = QSharedPointer<T>(new T());
                    QFileInfo assetPath = QFileInfo(QFileInfo(projectFile).absolutePath().append("/").append(e.text()).append(".").append(GMResource::GetResourceTypeString(newResource->GetResourceType())).append(".gmx"));
                    newResource->Load(assetPath);
                    child->SetResource(newResource);

                    std::cout << "Loaded Resource: " << qPrintable(assetPath.canonicalFilePath()) << std::endl;
                }
            }
            n = n.nextSibling();
        }
        return true;
    }

};

#endif // GMPROJECT_H
