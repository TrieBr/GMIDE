#ifndef ASSETEDITOR_SCRIPT_H
#define ASSETEDITOR_SCRIPT_H

#include <QMainWindow>
#include "AssetEditor.h"
#include "GMAsset_Script.h"

namespace Ui {
class AssetEditor_Script;
}

class AssetEditor_Script :  public AssetEditor
{
    Q_OBJECT

public:
    explicit AssetEditor_Script(GMAsset_Script* asset, QWidget *parent = 0);
    ~AssetEditor_Script();


    //JavaScript bridge functions (So JavaScript can call this C++ code)
        //Called from Javascript to get the text for the script
        Q_INVOKABLE QString js_get_script_text();

private slots:
    void frameLoaded(bool ok);

private:
    Ui::AssetEditor_Script *ui;
    GMAsset_Script* resource;       //The resource being edited in this editor
};

#endif // ASSETEDITOR_SCRIPT_H
