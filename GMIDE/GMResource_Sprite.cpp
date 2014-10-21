#include "GMResource_Sprite.h"
#include "ResourceEditor_Sprite.h"


GMResource_Sprite::GMResource_Sprite()
{
    resourceType = GM_RESOURCE_SPRITE;
}
bool GMResource_Sprite::Load(const QFileInfo &file) {
    this->GMResource::Load(file);
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

    //X Origin
    query.setQuery("sprite/xorigin/string()");
    query.evaluateTo(&result);
    item = result.next();
    if (item.isAtomicValue()) { //Make sure the item is an atomic value (ie, the node string was returned)
        SetXOrigin(item.toAtomicValue().toInt());
    }

    //Y Origin
    query.setQuery("sprite/yorigin/string()");
    query.evaluateTo(&result);
    item = result.next();
    if (item.isAtomicValue()) { //Make sure the item is an atomic value (ie, the node string was returned)
        SetYOrigin(item.toAtomicValue().toInt());
    }

    //Color Kind
    query.setQuery("sprite/colkind/string()");
    query.evaluateTo(&result);
    item = result.next();
    if (item.isAtomicValue()) { //Make sure the item is an atomic value (ie, the node string was returned)
        SetColKind(item.toAtomicValue().toInt());
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
        SetBboxMode(item.toAtomicValue().toInt());
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
       size.setWidth(item.toAtomicValue().toBool());
    }

    //Height of Sprite
    query.setQuery("sprite/height/string()");
    query.evaluateTo(&result);
    item = result.next();
    if (item.isAtomicValue()) { //Make sure the item is an atomic value (ie, the node string was returned)
       size.setHeight(item.toAtomicValue().toBool());
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
QPixmap GMResource_Sprite::GetPixmap() {
    if (frames.count()>0) {
        return GetFramePixmap(0).scaled(16,16,Qt::IgnoreAspectRatio);
    }
    return QPixmap(":/main/icons/flower.png") ;
}

QSharedPointer<ResourceEditor> GMResource_Sprite::CreateEditor() {
    QSharedPointer<ResourceEditor> editor = QSharedPointer<ResourceEditor>(new ResourceEditor());
    editor->SetEditorWidget(new ResourceEditor_Sprite(this));
    return editor;
}
int GMResource_Sprite::GetType() const
{
    return type;
}

void GMResource_Sprite::SetType(int value)
{
    type = value;
}
int GMResource_Sprite::GetXOrigin() const
{
    return xOrigin;
}

void GMResource_Sprite::SetXOrigin(int value)
{
    xOrigin = value;
}
int GMResource_Sprite::GetYOrigin() const
{
    return yOrigin;
}

void GMResource_Sprite::SetYOrigin(int value)
{
    yOrigin = value;
}
int GMResource_Sprite::GetColKind() const
{
    return colKind;
}

void GMResource_Sprite::SetColKind(int value)
{
    colKind = value;
}
int GMResource_Sprite::GetColTolerance() const
{
    return colTolerance;
}

void GMResource_Sprite::SetColTolerance(int value)
{
    colTolerance = value;
}
bool GMResource_Sprite::GetSepMasks() const
{
    return sepMasks;
}

void GMResource_Sprite::SetSepMasks(bool value)
{
    sepMasks = value;
}
int GMResource_Sprite::GetBboxMode() const
{
    return bboxMode;
}

void GMResource_Sprite::SetBboxMode(int value)
{
    bboxMode = value;
}
QRect GMResource_Sprite::GetBbox() const
{
    return bbox;
}

void GMResource_Sprite::SetBbox(const QRect &value)
{
    bbox = value;
}
bool GMResource_Sprite::GetHTile() const
{
    return hTile;
}

void GMResource_Sprite::SetHTile(bool value)
{
    hTile = value;
}
bool GMResource_Sprite::GetVTile() const
{
    return vTile;
}

void GMResource_Sprite::SetVTile(bool value)
{
    vTile = value;
}
bool GMResource_Sprite::GetFor3D() const
{
    return for3D;
}

void GMResource_Sprite::SetFor3D(bool value)
{
    for3D = value;
}
QSize GMResource_Sprite::GetSize() const
{
    return size;
}

void GMResource_Sprite::SetSize(const QSize &value)
{
    size = value;
}


//Get pixmap for specified frame index (will load from disk)
QPixmap GMResource_Sprite::GetFramePixmap(int frameIndex) {
    if (frameIndex>frames.size()) return QPixmap();
    return QPixmap(frames.at(frameIndex).absoluteFilePath());
}









