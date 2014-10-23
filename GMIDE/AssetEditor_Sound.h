#ifndef ASSETEDITOR_SOUND_H
#define ASSETEDITOR_SOUND_H

#include "AssetEditor.h"
#include "GMAsset_Sound.h"

namespace Ui {
class AssetEditor_Sound;
}

class AssetEditor_Sound : public AssetEditor
{
    Q_OBJECT
public:
    explicit AssetEditor_Sound(GMAsset_Sound* asset, QWidget *parent = 0);
    ~AssetEditor_Sound();

private:
    Ui::AssetEditor_Sound *ui;
};

#endif // ASSETEDITOR_SOUND_H
