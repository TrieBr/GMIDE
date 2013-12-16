#include "ResourceEditor_Room.h"
#include "ui_resourceeditor_room.h"

ResourceEditor_Room::ResourceEditor_Room(GMResource_Room* resource, QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::ResourceEditor_Room)
{
    ui->setupUi(this);
    this->resource = resource;
    graphicsScene = new QGraphicsScene();
    QPixmap transparencyTexture(32,32);
    QPainter *painter = new QPainter(&transparencyTexture);

    painter->fillRect(QRect(0,0,16,16),Qt::gray);
    painter->fillRect(QRect(16,16,32,32),Qt::gray);
    delete painter;

    QBrush backgroundBrush(transparencyTexture);
    graphicsScene->setBackgroundBrush(backgroundBrush);


    ui->graphicsView->setScene(graphicsScene);
}

ResourceEditor_Room::~ResourceEditor_Room()
{
    delete ui;
}
