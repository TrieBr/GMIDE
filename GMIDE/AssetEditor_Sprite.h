#ifndef ASSETEDITOR_SPRITE_H
#define ASSETEDITOR_SPRITE_H

#include <QMainWindow>
#include "GMAsset_Sprite.h"
#include <QGraphicsScene>
#include <QIntValidator>
#include <QTimer>
/*
 * A QMainWindow containing an editor for sprite assets
 *
 * */

namespace Ui {
class AssetEditor_Sprite;
}

class AssetEditor_Sprite : public AssetEditor
{
    Q_OBJECT

public:
    //Constructor
    explicit AssetEditor_Sprite(GMAsset_Sprite* asset,QWidget *parent = 0);
    //Destructor
    ~AssetEditor_Sprite();
    //Set the index to be displayed in the preview
    void SetPreviewFrameIndex(int index);
    //Event filter for the graphics view
    virtual bool eventFilter ( QObject * watched, QEvent * event );
private slots:
    //Alpha tolerance slider changed value
    void on_horizontalSlider_alphaTolerance_valueChanged(int value);
    //Center origin button was clicked
    void on_pushButton_originCenter_clicked();
    //Selected frame on the frame view has changed
    void on_spriteFrameView_selectionChanged(int index);
    //Animation play/pause button clicked
    void on_toolButton_animationToggle_clicked();
    //AnimationInterval Timer interval
    void animationPlayBackTimerTick();

    void on_toolButton_zoomFit_clicked();

    void on_toolButton_zoomOriginal_clicked();

    void on_toolButton_zoomOut_clicked();

    void on_toolButton_zoomIn_clicked();

private:
    Ui::AssetEditor_Sprite *ui;             //UI components
    QGraphicsScene* graphicsScene;          //Sprite preview graphics scene
    GMAsset_Sprite* resource;               //Resource being edited by this editor
    QIntValidator integerValidator;         //Integer validator used on QLineEdit's to ensure only an integer is entered
    QGraphicsPixmapItem* spritePixmapItem;  //The pixmap item for the sprite
    QTimer animationPlaybackTimer;         //Timer used to play the animation
    int currentPreviewFrameIndex;           //Cirrent frame being previewed


    //Get the asset this editor is editing
    GMAsset_Sprite *GetAsset() const;
    //Fit the zoom to the sprite preview
    void PreviewFitZoomToSprite();
    //Is Zoom mode = fit?
    bool IsZoomModeFit();
};



#endif // ASSETEDITOR_SPRITE_H
