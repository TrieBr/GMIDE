#include "GMAsset_Script.h"
#include "AssetEditor_Script.h"
GMAsset_Script::GMAsset_Script()
{
    assetType =  GMAssetType::SCRIPT;
}

//Load the asset from the specified file
bool GMAsset_Script::Load(const QFileInfo &file)
{

    this->GMAsset::Load(file);
    QFile scriptFile(file.absoluteFilePath());
    if (!scriptFile.exists()) return false; //File does not exist
    if (!scriptFile.open(QIODevice::ReadOnly | QIODevice::Text))
            return false; //Failed to open the file
    this->script = "";
    QTextStream in(&scriptFile);
         while (!in.atEnd()) {
             this->script.append(in.readLine()).append("\n");
         }
    return true;
}

//Get the pixmap icon for this asset
QPixmap GMAsset_Script::GetPixmap()
{
    return QPixmap(":/main/icons/document-binary.png") ;
}

//Create script editor
QSharedPointer<AssetEditor> GMAsset_Script::CreateEditor()
{
    QSharedPointer<AssetEditor> editor = QSharedPointer<AssetEditor>(new AssetEditor_Script(this));
    return editor;
}

QString GMAsset_Script::GetScript()
{
    return this->script;
}

