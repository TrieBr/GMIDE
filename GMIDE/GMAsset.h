#ifndef GMasset_H
#define GMasset_H

#include <QString>
#include <QFileInfo>
#include <QPixmap>
#include <QSize>
#include <QXmlQuery>
#include <QXmlResultItems>
#include <QDebug>
#include "assetEditor.h"

//Types of GameMaker assets
enum GMAssetType {
    UNKNOWN = 0,
    SPRITE,
    SOUND,
    BACKGROUND,
    PATH,
    SCRIPT,
    SHADER,
    FONT,
    TIMELINE,
    OBJECT,
    ROOM,
    INCLUDEDFILES
};
//String names of asset types
static const char * assetTypeStrings[] = { "unknown", "sprite", "sound", "background", "path", "script", "shader", "font", "timeline", "object", "room", "datafile" };

/*
 *  Base class for GameMaker assets.
 *  A GMAsset is associated with a file (the XML file) and can load and save from disk
 *
 * */


class GMAsset
{
public:
    //Constructor
    GMAsset();
    //Load the asset from a file
    virtual bool Load(const QFileInfo &file) {
        fileInfo = file;
        SetName(fileInfo.baseName());
        return true;
    }

    //Get the file info for the file associated with this asset
    QFileInfo& GetFileInfo() { return fileInfo; }

    //Set/Get name of asset
    void SetName(const QString &str);
    QString GetName();

    //Get pixmap (icon) of the asset
    virtual QPixmap GetPixmap() { return QPixmap(); }

    //Get the asset type
    GMAssetType GetAssetType() { return assetType; }
    //Get the asset type as a string
    static QString GetAssetTypeString(GMAssetType type) { return assetTypeStrings[(int)type]; }

    //Create an editor for this asset
    virtual QSharedPointer<AssetEditor> CreateEditor() { return QSharedPointer<AssetEditor>(); }

private:
    QString name;         //Name of the asset (eg spr_player)
    QFileInfo fileInfo;   //File corresponding to the asset (XML File ie sprite_0.sprite.gmx

protected:
    GMAssetType assetType;//Type of asset


};

Q_DECLARE_METATYPE(QSharedPointer<GMAsset>)

#endif // GMasset_H
