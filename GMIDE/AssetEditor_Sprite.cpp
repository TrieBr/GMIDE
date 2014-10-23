#include "AssetEditor_Sprite.h"
#include "ui_asseteditor_sprite.h"
#include <QGraphicsPixmapItem>

AssetEditor_Sprite::AssetEditor_Sprite(GMAsset_Sprite* asset, QWidget *parent) :
    AssetEditor(asset, parent),resource(asset),
    ui(new Ui::AssetEditor_Sprite)
{
    ui->setupUi(this);  //Setup the UI components

    QList<int> l;
    l.append(ui->frame->sizeHint().width());
    l.append(9000);
    ui->splitter->setSizes(l);

    //Set up the graphics scene for the sprite preview pane
    graphicsScene = new QGraphicsScene();
    QPixmap transparencyTexture(32,32);
    QPainter *painter = new QPainter(&transparencyTexture);
    painter->fillRect(QRect(0,0,32,32),Qt::white);
    painter->fillRect(QRect(0,0,16,16),Qt::gray);
    painter->fillRect(QRect(16,16,32,32),Qt::gray);
    delete painter;
    //Set the background to a transparency checker pattern
    QBrush backgroundBrush(transparencyTexture);
    ui->graphicsView_spritePreview->setBackgroundBrush(backgroundBrush);
    ui->graphicsView_spritePreview->installEventFilter(this);

    //Get the pixmap of the sprite's first frame
    QPixmap spritePixmap = asset->GetFramePixmap(0);
    //Set the pixmap as a graphics item to display in the graphics scene
    spritePixmapItem = new QGraphicsPixmapItem(spritePixmap);

    spritePixmapItem->setPos(0,0);
    graphicsScene->addItem(spritePixmapItem);

    //Set the scene of the graphics view
    ui->graphicsView_spritePreview->setScene(graphicsScene);
    //Set "Drag to pan" mode on the graphics view
    ui->graphicsView_spritePreview->setDragMode(QGraphicsView::ScrollHandDrag);


    //Set the integer validator for the QLineEdits, so only integers can be entered
    ui->lineEdit_originX->setValidator(&integerValidator);
    ui->lineEdit_originY->setValidator(&integerValidator);
    ui->lineEdit_bboxLeft->setValidator(&integerValidator);
    ui->lineEdit_bboxRight->setValidator(&integerValidator);
    ui->lineEdit_bboxTop->setValidator(&integerValidator);
    ui->lineEdit_bboxBottom->setValidator(&integerValidator);


    //Set the combobox items for the bounding box type (with associated enum values)
    ui->comboBox_bboxType->addItem("Automatic",BoundingBoxMode::Automatic);
    ui->comboBox_bboxType->addItem("Full Image",BoundingBoxMode::FullImage);
    ui->comboBox_bboxType->addItem("Manual",BoundingBoxMode::Manual);

    //Set the comboboc item for the bounding box shape (with associated enum values)
    ui->comboBox_bboxShape->addItem("Precise",CollisionKind::Precise);
    ui->comboBox_bboxShape->addItem("Rectangle",CollisionKind::Rectangle);
    ui->comboBox_bboxShape->addItem("Ellipse",CollisionKind::Ellipse);
    ui->comboBox_bboxShape->addItem("Diamond",CollisionKind::Diamond);

    //Setup the Texture group combo box
    ui->comboBox_textureGroup->addItem("Default");
    ui->comboBox_textureGroup->setCurrentIndex(0);


    //Fill all of the appropriate widgets with data from the sprite resource
    ui->label_widthValue->setText(QString::number(GetAsset()->GetSize().width()));
    ui->label_heightValue->setText(QString::number(GetAsset()->GetSize().height()));
    ui->label_numSubimagesValue->setText(QString::number(1));
    ui->lineEdit_originX->setText(QString::number(GetAsset()->GetOrigin().x()));
    ui->lineEdit_originY->setText(QString::number(GetAsset()->GetOrigin().y()));
    ui->checkBox_preciseCollisionChecking->setChecked(GetAsset()->GetCollisionKind()==CollisionKind::Precise); //Colllision kind 0 = precise collision checking
    ui->checkBox_preciseCollisionChecking->setChecked(GetAsset()->GetSepMasks());
    ui->lineEdit_alphaTolerance->setText(QString::number(GetAsset()->GetColTolerance()));
    ui->horizontalSlider_alphaTolerance->setValue(GetAsset()->GetColTolerance());
    ui->comboBox_bboxType->setCurrentIndex(ui->comboBox_bboxType->findData(GetAsset()->GetBboxMode()));
    ui->comboBox_bboxShape->setCurrentIndex(ui->comboBox_bboxShape->findData(GetAsset()->GetCollisionKind()));
    ui->lineEdit_bboxLeft->setText(QString::number(GetAsset()->GetBbox().left()));
    ui->lineEdit_bboxRight->setText(QString::number(GetAsset()->GetBbox().right()));
    ui->lineEdit_bboxTop->setText(QString::number(GetAsset()->GetBbox().top()));
    ui->lineEdit_bboxBottom->setText(QString::number(GetAsset()->GetBbox().bottom()));
    ui->checkBox_tileHorizontal->setChecked(GetAsset()->GetHTile());
    ui->checkBox_tileVertical->setChecked(GetAsset()->GetVTile());
    ui->checkBox_usedFor3D->setChecked(GetAsset()->GetFor3D());


    for (int i=0; i<GetAsset()->GetFrameCount(); i++) { //For each frame in the sprite
        ui->spriteFrameView->AddFrame(asset->GetFramePixmap(i)); //Add frame to the frameview
    }



    SetPreviewFrameIndex(0); //Set the first frame to be previewed
    //Connect the frameView selection changed signal to our selectionChanged SLOT
    connect(ui->spriteFrameView,SIGNAL(frameSelectionChanged(int)),this,SLOT(on_spriteFrameView_selectionChanged(int)));
    //link the animation playbackTimer to the tick slot
    connect(&animationPlaybackTimer,SIGNAL(timeout()),this,SLOT(animationPlayBackTimerTick()));
}

//Event filter for the graphics view
bool AssetEditor_Sprite::eventFilter ( QObject * watched, QEvent * event )
{
    if (watched==ui->graphicsView_spritePreview) {
        if (event->type() == QEvent::Resize)
        {
            if (IsZoomModeFit()) { //IF zoom to fit mode is enabled
                PreviewFitZoomToSprite(); //Fit sprite to fullest size
            }
            return false;
        }
    }
    return QMainWindow::eventFilter(watched,event);
}

//Destructor
AssetEditor_Sprite::~AssetEditor_Sprite()
{
    delete ui;
}

//Set the index to be displayed in the preview
void AssetEditor_Sprite::SetPreviewFrameIndex(int index)
{
    currentPreviewFrameIndex = index;
    ui->spriteFrameView->SetSelected(currentPreviewFrameIndex);    //Select the first frame
}

//Get the asset being edited by this editor
GMAsset_Sprite *AssetEditor_Sprite::GetAsset() const
{
    return resource;
}

void AssetEditor_Sprite::PreviewFitZoomToSprite()
{
    ui->graphicsView_spritePreview->resetTransform();
    //Scale up the image to the graphics view size, keeping the aspect ratio
    QSizeF newSize = spritePixmapItem->boundingRect().size().scaled(ui->graphicsView_spritePreview->size(),Qt::AspectRatioMode::KeepAspectRatio);
    //Now we zoom the view with how much the scale was increased by
    ui->graphicsView_spritePreview->scale(newSize.width()/spritePixmapItem->boundingRect().size().width(),newSize.height()/spritePixmapItem->boundingRect().size().height());
}

//Is Zoom mode = fit?
bool AssetEditor_Sprite::IsZoomModeFit()
{
    return ui->toolButton_zoomFit->isChecked();
}

//Alpha tolerance slider value was changed
void AssetEditor_Sprite::on_horizontalSlider_alphaTolerance_valueChanged(int value)
{
    ui->lineEdit_alphaTolerance->setText(QString::number(value));
}

//Center origin button was clicked
void AssetEditor_Sprite::on_pushButton_originCenter_clicked()
{
    ui->lineEdit_originX->setText(QString::number(floor(resource->GetSize().width()/2)));
    ui->lineEdit_originY->setText(QString::number(floor(resource->GetSize().height()/2)));
}

//When the selected frame on the frame view has changed
void AssetEditor_Sprite::on_spriteFrameView_selectionChanged(int index)
{
    spritePixmapItem->setPixmap(resource->GetFramePixmap(index)); //Set the sprite preview pixmap to the newly selected frame
}

//Play/Pause button was pressed
void AssetEditor_Sprite::on_toolButton_animationToggle_clicked()
{
    if (!animationPlaybackTimer.isActive())
        animationPlaybackTimer.start(33);
    else
        animationPlaybackTimer.stop();
}

//AnimationInterval Timer interval
void AssetEditor_Sprite::animationPlayBackTimerTick()
{
    if (currentPreviewFrameIndex<resource->GetFrameCount()-1) {
        SetPreviewFrameIndex(currentPreviewFrameIndex+1);
    }else{
        SetPreviewFrameIndex(0);
    }
}

void AssetEditor_Sprite::on_toolButton_zoomFit_clicked()
{
    bool checked = ui->toolButton_zoomFit->isChecked();
    if (checked) {
        PreviewFitZoomToSprite(); //Fit the zoom to the sprite so it goes to maximum size to fit in screen
    }
}

void AssetEditor_Sprite::on_toolButton_zoomOriginal_clicked()
{

    ui->toolButton_zoomFit->setChecked(false); //Disable Zoom to fit mode
    ui->graphicsView_spritePreview->resetTransform();
}

void AssetEditor_Sprite::on_toolButton_zoomOut_clicked()
{
    ui->toolButton_zoomFit->setChecked(false); //Disable Zoom to fit mode
    ui->graphicsView_spritePreview->scale(0.5,0.5);


}

void AssetEditor_Sprite::on_toolButton_zoomIn_clicked()
{
   ui->toolButton_zoomFit->setChecked(false); //Disable Zoom to fit mode
   ui->graphicsView_spritePreview->scale(2,2);
}
