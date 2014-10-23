#ifndef GMASSET_SPRITE_H
#define GMASSET_SPRITE_H

#include "GMAsset.h"
#include <QFile>

//Bounding box modes
enum BoundingBoxMode {
    Automatic = 0,
    FullImage = 1,
    Manual = 2
};

//Collision kinds
enum CollisionKind {
    Precise = 0,
    Rectangle = 1,
    Ellipse = 2,
    Diamond = 3
};

/*
 *  Sprite Asset
 *
 * */


class GMAsset_Sprite : public GMAsset
{
public:
    //Constructor
    GMAsset_Sprite();
    //Load the asset from the specified file
    virtual bool Load(const QFileInfo &file);
    //Get the pixmap icon for this asset
    virtual QPixmap GetPixmap();
    //Create an editor for this asset
    virtual QSharedPointer<AssetEditor> CreateEditor();

    //Accessors for type of sprite
    int GetType() const;
    void SetType(int value);
    //Origin accessors
    QPoint GetOrigin() const;
    void   SetOrigin(const QPoint &value);
    //Accessors for Color Kind
    CollisionKind GetCollisionKind() const;
    void SetCollisionKind(CollisionKind value);
    //Accessors for Color Tolerance
    int GetColTolerance() const;
    void SetColTolerance(int value);
    //Accessors for Seperation Masks
    bool GetSepMasks() const;
    void SetSepMasks(bool value);
    //Accessors for BBox Mode
    BoundingBoxMode GetBboxMode() const;
    void SetBboxMode(BoundingBoxMode value);
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

    //Get number of frames in this sprite
    int GetFrameCount();

    //Get pixmap for specified frame index (will load from disk)
    QPixmap GetFramePixmap(int frameIndex);



private:
    //Sprite Properties
    int type;                               //Type of sprite
    QPoint origin;                          //Origin
    CollisionKind collisionKind;            //Collision Kind
    int colTolerance;                       //Color Tolerance
    bool sepMasks;                          //Seperate collision masks
    BoundingBoxMode bboxMode;               //Bounding Box mode
    QRect bbox;                             //Bounding box size
    bool hTile;                             //Texture Settings: Tile: Horizontal
    bool vTile;                             //Texture Settings: Tile: Vertical
    bool for3D;                             //Texture Settings: Used for 3D (Must be a power of 2)
    QSize size;                             //Dimensions os sprite;
    QList<QFileInfo> frames;                //Frames in the  sprite (List of Pixmaps)

};

#endif // GMASSET_SPRITE_H
