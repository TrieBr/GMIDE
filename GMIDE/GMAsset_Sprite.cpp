#include "GMAsset_Sprite.h"
#include "AssetEditor_Sprite.h"


GMAsset_Sprite::GMAsset_Sprite()
{
    assetType =  GMAssetType::SPRITE;
}

//Load the asset from the specified file
bool GMAsset_Sprite::Load(const QFileInfo &file)
{
    this->GMAsset::Load(file);
    QFile spriteFile(file.absoluteFilePath());
    if (!spriteFile.exists()) return false; //File does not exist
    if (!spriteFile.open(QIODevice::ReadOnly | QIODevice::Text))
            return false; //Failed to open the file
    QXmlQuery query;
    QXmlResultItems  result;
    QXmlItem item;
    query.setFocus(&spriteFile);

    //Type of sprite
    query.setQuery("sprite/type/string()");
    query.evaluateTo(&result);
    item = result.next();
    if (item.isAtomicValue()) { //Make sure the item is an atomic value (ie, the node string was returned)
        SetType(item.toAtomicValue().toInt());
    }

    QPoint origin;
    //X Origin
    query.setQuery("sprite/xorig/string()");
    query.evaluateTo(&result);
    item = result.next();
    if (item.isAtomicValue()) { //Make sure the item is an atomic value (ie, the node string was returned)
        origin.setX(item.toAtomicValue().toInt());
    }

    //Y Origin
    query.setQuery("sprite/yorigin/string()");
    query.evaluateTo(&result);
    item = result.next();
    if (item.isAtomicValue()) { //Make sure the item is an atomic value (ie, the node string was returned)
        origin.setY(item.toAtomicValue().toInt());
    }
    SetOrigin(origin);

    //Collision Kind
    query.setQuery("sprite/colkind/string()");
    query.evaluateTo(&result);
    item = result.next();
    if (item.isAtomicValue()) { //Make sure the item is an atomic value (ie, the node string was returned)
        SetCollisionKind((CollisionKind)item.toAtomicValue().toInt());
    }

    //Color Tolerance
    query.setQuery("sprite/coltolerance/string()");
    query.evaluateTo(&result);
    item = result.next();
    if (item.isAtomicValue()) { //Make sure the item is an atomic value (ie, the node string was returned)
        SetColTolerance(item.toAtomicValue().toInt());
    }

    //Seprate Masks?
    query.setQuery("sprite/sepmasks/string()");
    query.evaluateTo(&result);
    item = result.next();
    if (item.isAtomicValue()) { //Make sure the item is an atomic value (ie, the node string was returned)
        SetSepMasks(item.toAtomicValue().toBool());
    }

    //Bounding Box Mode
    query.setQuery("sprite/bboxmode/string()");
    query.evaluateTo(&result);
    item = result.next();
    if (item.isAtomicValue()) { //Make sure the item is an atomic value (ie, the node string was returned)
        SetBboxMode((BoundingBoxMode)item.toAtomicValue().toInt());
    }

    QRect bbox; //Bounding box
    //Bounding Box Left
    query.setQuery("sprite/bbox_left/string()");
    query.evaluateTo(&result);
    item = result.next();
    if (item.isAtomicValue()) { //Make sure the item is an atomic value (ie, the node string was returned)
       bbox.setLeft(item.toAtomicValue().toInt());
    }

    //Bounding Box Right
    query.setQuery("sprite/bbox_right/string()");
    query.evaluateTo(&result);
    item = result.next();
    if (item.isAtomicValue()) { //Make sure the item is an atomic value (ie, the node string was returned)
       bbox.setRight(item.toAtomicValue().toInt());
    }

    //Bounding Box Top
    query.setQuery("sprite/bbox_top/string()");
    query.evaluateTo(&result);
    item = result.next();
    if (item.isAtomicValue()) { //Make sure the item is an atomic value (ie, the node string was returned)
       bbox.setTop(item.toAtomicValue().toInt());
    }

    //Bounding Box Bottom
    query.setQuery("sprite/bbox_bottom/string()");
    query.evaluateTo(&result);
    item = result.next();
    if (item.isAtomicValue()) { //Make sure the item is an atomic value (ie, the node string was returned)
       bbox.setBottom(item.toAtomicValue().toInt());
    }

    SetBbox(bbox); //Set the bounding box

    //Horizontal Tile?
    query.setQuery("sprite/HTile/string()");
    query.evaluateTo(&result);
    item = result.next();
    if (item.isAtomicValue()) { //Make sure the item is an atomic value (ie, the node string was returned)
       SetHTile(item.toAtomicValue().toBool());
    }

    //Vertical Tile?
    query.setQuery("sprite/VTile/string()");
    query.evaluateTo(&result);
    item = result.next();
    if (item.isAtomicValue()) { //Make sure the item is an atomic value (ie, the node string was returned)
       SetVTile(item.toAtomicValue().toBool());
    }

    //For 3D?
    query.setQuery("sprite/For3D/string()");
    query.evaluateTo(&result);
    item = result.next();
    if (item.isAtomicValue()) { //Make sure the item is an atomic value (ie, the node string was returned)
       SetFor3D(item.toAtomicValue().toBool());
    }


    QSize size;
    //Width of sprite
    query.setQuery("sprite/width/string()");
    query.evaluateTo(&result);
    item = result.next();
    if (item.isAtomicValue()) { //Make sure the item is an atomic value (ie, the node string was returned)
       size.setWidth(item.toAtomicValue().toInt());
    }

    //Height of Sprite
    query.setQuery("sprite/height/string()");
    query.evaluateTo(&result);
    item = result.next();
    if (item.isAtomicValue()) { //Make sure the item is an atomic value (ie, the node string was returned)
       size.setHeight(item.toAtomicValue().toInt());
    }

    SetSize(size); //Set the size of the sprite


    //We will now get all of the frames for the sprite (NOTE: This ignores the index attribute and just adds them in order)
    query.setQuery("sprite/frames/frame/string()");
    query.evaluateTo(&result);
    item = result.next();
    while (!item.isNull()) {
        if (item.isAtomicValue()) { //Make sure the item is an atomic value (ie, the node string was returned)
            QString frameFilePath = GetFileInfo().absolutePath().append("/").append(item.toAtomicValue().toString());
            frames.push_back(QFileInfo(frameFilePath));
        }
        item = result.next();
    }

    spriteFile.close(); //Close the XML File
    return true;
}

//Get the pixmap icon for this asset
QPixmap GMAsset_Sprite::GetPixmap()
{
    if (frames.count()>0) {
        return GetFramePixmap(0).scaled(16,16,Qt::IgnoreAspectRatio);
    }
    return QPixmap(":/main/icons/flower.png") ;
}

//Load the asset from the specified file
QSharedPointer<AssetEditor> GMAsset_Sprite::CreateEditor()
{
    QSharedPointer<AssetEditor> editor = QSharedPointer<AssetEditor>( new AssetEditor_Sprite(this));
    return editor;
}


////Property Accessors:
int GMAsset_Sprite::GetType() const
{
    return type;
}

void GMAsset_Sprite::SetType(int value)
{
    type = value;
}
QPoint GMAsset_Sprite::GetOrigin() const
{
    return origin;
}

void GMAsset_Sprite::SetOrigin(const QPoint &value)
{
    origin = value;
}

CollisionKind GMAsset_Sprite::GetCollisionKind() const
{
    return collisionKind;
}

void GMAsset_Sprite::SetCollisionKind(CollisionKind value)
{
    collisionKind = value;
}
int GMAsset_Sprite::GetColTolerance() const
{
    return colTolerance;
}

void GMAsset_Sprite::SetColTolerance(int value)
{
    colTolerance = value;
}
bool GMAsset_Sprite::GetSepMasks() const
{
    return sepMasks;
}

void GMAsset_Sprite::SetSepMasks(bool value)
{
    sepMasks = value;
}
BoundingBoxMode GMAsset_Sprite::GetBboxMode() const
{
    return bboxMode;
}

void GMAsset_Sprite::SetBboxMode(BoundingBoxMode value)
{
    bboxMode = value;
}
QRect GMAsset_Sprite::GetBbox() const
{
    return bbox;
}

void GMAsset_Sprite::SetBbox(const QRect &value)
{
    bbox = value;
}
bool GMAsset_Sprite::GetHTile() const
{
    return hTile;
}

void GMAsset_Sprite::SetHTile(bool value)
{
    hTile = value;
}
bool GMAsset_Sprite::GetVTile() const
{
    return vTile;
}

void GMAsset_Sprite::SetVTile(bool value)
{
    vTile = value;
}
bool GMAsset_Sprite::GetFor3D() const
{
    return for3D;
}

void GMAsset_Sprite::SetFor3D(bool value)
{
    for3D = value;
}
QSize GMAsset_Sprite::GetSize() const
{
    return size;
}

void GMAsset_Sprite::SetSize(const QSize &value)
{
    size = value;
}


//Get pixmap for specified frame index (will load from disk)
QPixmap GMAsset_Sprite::GetFramePixmap(int frameIndex)
{
    if (frameIndex>frames.size()) return QPixmap();
    return QPixmap(frames.at(frameIndex).absoluteFilePath());
}

//Get number of frames in this sprite
int GMAsset_Sprite::GetFrameCount()
{
    return frames.size();
}








