#include "ResourceEditor_Sprite.h"
#include "ui_resourceeditor_sprite.h"
#include <QGraphicsPixmapItem>

ResourceEditor_Sprite::ResourceEditor_Sprite(GMResource_Sprite* resource, QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::ResourceEditor_Sprite)
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
    QGraphicsPixmapItem *p = new QGraphicsPixmapItem(resource->GetFramePixmap(0));
    graphicsScene->addItem(p);



    ui->graphicsView->setScene(graphicsScene);
}

ResourceEditor_Sprite::~ResourceEditor_Sprite()
{
    delete ui;
}
