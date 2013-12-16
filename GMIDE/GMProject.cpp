#include "GMProject.h"
#include <QFile>

#include <iostream>

GMProject::GMProject()
{
    resourceSprites.SetName("Sprites", true);
    resourceSounds.SetName("Sounds", true);
    resourceBackgrounds.SetName("Backgrounds", true);
    resourcePaths.SetName("Paths", true);
    resourceScripts.SetName("Scripts", true);
    resourceShaders.SetName("Shaders", true);
    resourceFonts.SetName("Fonts", true);
    resourceTimeLines.SetName("Time Lines", true);
    resourceObjects.SetName("Objects", true);
    resourceRooms.SetName("Rooms", true);
    resourceIncludedFiles.SetName("Included Files", true);
}
//Load specified project (.project.gmx) file
bool GMProject::Load(const QString &fileName) {
    QFile projectFile(fileName);
    QDomDocument xmlDoc;
    if (!projectFile.exists())
        return false;       //File does not exist.
    if (!projectFile.open(QIODevice::ReadOnly))
        return false;       //Failed to open the project file
    if (!xmlDoc.setContent(&projectFile)) {
        projectFile.close();
        return false;
    }
    QDomElement rootElement = xmlDoc.documentElement();
    QDomNode n = rootElement.firstChild();
    while (!n.isNull()) {
        QDomElement e = n.toElement();
        if (!e.isNull()) {
            //TODO: Remove the hard coded resource strings
            if (e.tagName().compare("sprites")==0) {
                LoadGroupRooms<GMResource_Sprite>(&resourceSprites,&e);
            }
            if (e.tagName().compare("sounds")==0) {
                LoadGroupRooms<GMResource_Sound>(&resourceSounds,&e);
            }
            if (e.tagName().compare("backgrounds")==0) {
                LoadGroupRooms<GMResource_Background>(&resourceBackgrounds,&e);
            }
            if (e.tagName().compare("paths")==0) {
                LoadGroupRooms<GMResource_Path>(&resourcePaths,&e);
            }
            if (e.tagName().compare("scripts")==0) {
                LoadGroupRooms<GMResource_Script>(&resourceScripts,&e);
            }
            if (e.tagName().compare("shaders")==0) {
                LoadGroupRooms<GMResource_Shader>(&resourceShaders,&e);
            }
            if (e.tagName().compare("fonts")==0) {
                LoadGroupRooms<GMResource_Font>(&resourceFonts,&e);
            }
            if (e.tagName().compare("timelines")==0) {
                LoadGroupRooms<GMResource_TimeLine>(&resourceTimeLines,&e);
            }
            if (e.tagName().compare("objects")==0) {
                LoadGroupRooms<GMResource_Object>(&resourceObjects,&e);
            }
            if (e.tagName().compare("rooms")==0) {
                LoadGroupRooms<GMResource_Room>(&resourceRooms,&e);
            }
            if (e.tagName().compare("datafiles")==0) {
                LoadGroupRooms<GMResource_IncludedFile>(&resourceIncludedFiles,&e);
            }
            std::cout << qPrintable(e.tagName()) << std::endl;
        }
        n = n.nextSibling();
    }
    projectFile.close();
    return true;
}

QStandardItemModel* GMProject::ItemModel() {
    QStandardItemModel* model = new QStandardItemModel;
    QStandardItem *rootNode = model->invisibleRootItem();
     rootNode->appendRow((QStandardItem*)&resourceSprites);
     rootNode->appendRow((QStandardItem*)&resourceSounds);
     rootNode->appendRow((QStandardItem*)&resourceBackgrounds);
     rootNode->appendRow((QStandardItem*)&resourcePaths);
     rootNode->appendRow((QStandardItem*)&resourceScripts);
     rootNode->appendRow((QStandardItem*)&resourceShaders);
     rootNode->appendRow((QStandardItem*)&resourceFonts);
     rootNode->appendRow((QStandardItem*)&resourceTimeLines);
     rootNode->appendRow((QStandardItem*)&resourceObjects);
    rootNode->appendRow((QStandardItem*)&resourceRooms);
    rootNode->appendRow((QStandardItem*)&resourceIncludedFiles);
    return model;
}



