#include "AssetEditor.h"

//Constructor
AssetEditor::AssetEditor(GMAsset* asset, QWidget *parent)
    :asset(asset), QMainWindow(parent)
{

}

//Get the asset this editor is editing
GMAsset* AssetEditor::GetAsset()
{
    return asset;
}
