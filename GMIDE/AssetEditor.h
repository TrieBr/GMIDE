#ifndef ASSETEDITOR_H
#define ASSETEDITOR_H

#include <QWidget>
#include <QMainWindow>


/*
 *  Abstract class to define an asset editor. This is a QMainWindow that is the ui component to edit the specified asset
 *
 * */

class GMAsset;
class AssetEditor : public QMainWindow
{
    Q_OBJECT
public:
    //Get the asset this editor is editing
    GMAsset* GetAsset();
protected:
    //Constructor
    AssetEditor(GMAsset* asset, QWidget* parent = 0);
private:
    GMAsset* asset;         //Asset being edited by this assetEditor

};

#endif // ASSETEDITOR_H
