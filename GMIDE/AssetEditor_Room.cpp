#include "AssetEditor_Room.h"
#include "ui_asseteditor_room.h"

//Constructor
AssetEditor_Room::AssetEditor_Room(GMAsset_Room* asset, QWidget *parent) :
    AssetEditor(asset, parent),
    ui(new Ui::AssetEditor_Room)
{
    ui->setupUi(this);  //Setup the UI elements
    this->resource = resource;

    //Create the graphics scene for the tile/object editor
    graphicsScene = new QGraphicsScene();

    //Create a texture for a transparent background patten (checkerboard)
    QPixmap transparencyTexture(32,32);
    QPainter *painter = new QPainter(&transparencyTexture);
    painter->fillRect(QRect(0,0,16,16),Qt::gray);
    painter->fillRect(QRect(16,16,32,32),Qt::gray);
    delete painter;

    //Set the background to the checkerboard pattern
    QBrush backgroundBrush(transparencyTexture);
    graphicsScene->setBackgroundBrush(backgroundBrush);

    //Set the scene of the graphics view to the scene we just made
    ui->graphicsView->setScene(graphicsScene);
}

//Destructor
AssetEditor_Room::~AssetEditor_Room()
{
    delete ui;
}
