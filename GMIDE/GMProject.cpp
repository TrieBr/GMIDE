#include "GMProject.h"
#include <QFile>

#include <iostream>

GMProject::GMProject()
{
    //Set the folder names for these GMAssetNode's
    assetSprites.SetName("Sprites", true);
    assetSounds.SetName("Sounds", true);
    assetBackgrounds.SetName("Backgrounds", true);
    assetPaths.SetName("Paths", true);
    assetScripts.SetName("Scripts", true);
    assetShaders.SetName("Shaders", true);
    assetFonts.SetName("Fonts", true);
    assetTimeLines.SetName("Time Lines", true);
    assetObjects.SetName("Objects", true);
    assetRooms.SetName("Rooms", true);
    assetIncludedFiles.SetName("Included Files", true);
}
//Load specified project (.project.gmx) file
bool GMProject::Load(const QString &fileName)
{
    Logger::Trace(LogIDE) << "Loading project file: " << fileName << endl;
    projectFile.setFileName(fileName);
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
                LoadGroupRooms<GMAsset_Sprite>(&assetSprites,&e);
            }
            if (e.tagName().compare("sounds")==0) {
                LoadGroupRooms<GMAsset_Sound>(&assetSounds,&e);
            }
            if (e.tagName().compare("backgrounds")==0) {
                LoadGroupRooms<GMAsset_Background>(&assetBackgrounds,&e);
            }
            if (e.tagName().compare("paths")==0) {
                LoadGroupRooms<GMAsset_Path>(&assetPaths,&e);
            }
            if (e.tagName().compare("scripts")==0) {
                LoadGroupRooms<GMAsset_Script>(&assetScripts,&e);
            }
            if (e.tagName().compare("shaders")==0) {
                LoadGroupRooms<GMAsset_Shader>(&assetShaders,&e);
            }
            if (e.tagName().compare("fonts")==0) {
                LoadGroupRooms<GMAsset_Font>(&assetFonts,&e);
            }
            if (e.tagName().compare("timelines")==0) {
                LoadGroupRooms<GMAsset_TimeLine>(&assetTimeLines,&e);
            }
            if (e.tagName().compare("objects")==0) {
                LoadGroupRooms<GMAsset_Object>(&assetObjects,&e);
            }
            if (e.tagName().compare("rooms")==0) {
                LoadGroupRooms<GMAsset_Room>(&assetRooms,&e);
            }
            if (e.tagName().compare("datafiles")==0) {
                LoadGroupRooms<GMAsset_IncludedFile>(&assetIncludedFiles,&e);
            }
            std::cout << qPrintable(e.tagName()) << std::endl;
        }
        n = n.nextSibling();
    }
    projectFile.close();
    return true;
}

//Generate the item model for the assets
QStandardItemModel* GMProject::ItemModel()
{
    QStandardItemModel* model = new QStandardItemModel;
    QStandardItem *rootNode = model->invisibleRootItem();
    rootNode->appendRow((QStandardItem*)&assetSprites);
    rootNode->appendRow((QStandardItem*)&assetSounds);
    rootNode->appendRow((QStandardItem*)&assetBackgrounds);
    rootNode->appendRow((QStandardItem*)&assetPaths);
    rootNode->appendRow((QStandardItem*)&assetScripts);
    rootNode->appendRow((QStandardItem*)&assetShaders);
    rootNode->appendRow((QStandardItem*)&assetFonts);
    rootNode->appendRow((QStandardItem*)&assetTimeLines);
    rootNode->appendRow((QStandardItem*)&assetObjects);
    rootNode->appendRow((QStandardItem*)&assetRooms);
    rootNode->appendRow((QStandardItem*)&assetIncludedFiles);
    return model;
}



