#ifndef GMRESOURCE_SPRITE_H
#define GMRESOURCE_SPRITE_H

#include "GMResource.h"
#include <QFile>

class GMResource_Sprite : public GMResource
{
public:
    GMResource_Sprite();
    virtual bool Load(const QFileInfo &file);
    virtual QPixmap GetPixmap();
    virtual QSharedPointer<ResourceEditor> CreateEditor();

    //Accessors for type of sprite
    int GetType() const;
    void SetType(int value);
    //Accessors for X Origin
    int GetXOrigin() const;
    void SetXOrigin(int value);
    //Accessors for Y Origin
    int GetYOrigin() const;
    void SetYOrigin(int value);
    //Accessors for Color Kind
    int GetColKind() const;
    void SetColKind(int value);
    //Accessors for Color Tolerance
    int GetColTolerance() const;
    void SetColTolerance(int value);
    //Accessors for Seperation Masks
    bool GetSepMasks() const;
    void SetSepMasks(bool value);
    //Accessors for BBox Mode
    int GetBboxMode() const;
    void SetBboxMode(int value);
    //Accessors for BBox
    QRect GetBbox() const;
    void SetBbox(const QRect &value);
    //Accessors for Horizontal Tile (Texture Settings)
    bool GetHTile() const;
    void SetHTile(bool value);
    //Accessors for Vertical Tile (Texture Settings)
    bool GetVTile() const;
    void SetVTile(bool value);
    //Accessors for For 3D (Texture Settings)
    bool GetFor3D() const;
    void SetFor3D(bool value);
    //Accessors Size of the sprite
    QSize GetSize() const;
    void SetSize(const QSize &value);

    //Get pixmap for specified frame index (will load from disk)
    QPixmap GetFramePixmap(int frameIndex);

private:
    //Sprite Properties
    int type;             //Type of sprite
    int xOrigin;          //X Origin
    int yOrigin;          //Y Origin
    int colKind;          //Color kind (?)
    int colTolerance;     //Color Tolerance
    bool sepMasks;        //Seperate collision masks
    int bboxMode;         //Bounding Box mode
    QRect bbox;           //Bounding box size
    bool hTile;           //Texture Settings: Tile: Horizontal
    bool vTile;           //Texture Settings: Tile: Vertical
    bool for3D;           //Texture Settings: Used for 3D (Must be a power of 2)
    QSize size;           //Dimensions os sprite;
    QList<QFileInfo> frames;  //Frames in the  sprite (List of Pixmaps)

};

#endif // GMRESOURCE_SPRITE_H
