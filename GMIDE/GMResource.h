#ifndef GMRESOURCE_H
#define GMRESOURCE_H

#include <QString>
#include <QFileInfo>
#include <QPixmap>
#include "ResourceEditor.h"


enum GMResourceType {
    GM_RESOURCE_UNKNOWN = 0,
    GM_RESOURCE_SPRITE,
    GM_RESOURCE_SOUND,
    GM_RESOURCE_BACKGROUND,
    GM_RESOURCE_PATH,
    GM_RESOURCE_SCRIPT,
    GM_RESOURCE_SHADER,
    GM_RESOURCE_FONT,
    GM_RESOURCE_TIMELINE,
    GM_RESOURCE_OBJECT,
    GM_RESOURCE_ROOM,
    GM_RESOURCE_INCLUDEDFILES
};
static const char * ResourceTypeStrings[] = { "unknown", "sprite", "sound", "background", "path", "script", "shader", "font", "timeline", "object", "room", "datafile" };


class GMResource
{
public:
    GMResource();
    //Load the resource from a file
    virtual bool Load(const QString &fileName) {
        QFileInfo f(fileName);
        relativePath = f.path();
        SetName(f.baseName());
        return true;
    }

    //Get the relative resource path (eg sprites)
    virtual const QString& GetRelativePath() { return relativePath; }
    //Get the full relative name (eg sprites/spr_player.sprite.gmx)
    const QString GetRelativeFilename() { return QString(GetRelativePath()).append("/").append(GetName()).append(".").append(GetResourceTypeString(resourceType)).append(".gmx");}

    //Set/Get name of resource
    void SetName(const QString &str);
    QString GetName();

    virtual QPixmap GetPixmap() { return QPixmap(); }

    GMResourceType GetResourceType() { return resourceType; }
    static QString GetResourceTypeString(GMResourceType type) { return ResourceTypeStrings[(int)type]; }

    virtual QSharedPointer<ResourceEditor> CreateEditor() { return QSharedPointer<ResourceEditor>(); }

private:
    QString name;       //Name of the resource (eg spr_player)
    QString relativePath;       //(relative) path of the resource (eg sprites);
    GMResourceType resourceType;    //Type of resource

};

Q_DECLARE_METATYPE(QSharedPointer<GMResource>)

#endif // GMRESOURCE_H
