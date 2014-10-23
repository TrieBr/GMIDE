#include "AssetEditor_Sound.h"
#include "ui_AssetEditor_Sound.h"

AssetEditor_Sound::AssetEditor_Sound(GMAsset_Sound* asset, QWidget *parent) :
    AssetEditor(asset, parent),
    ui(new Ui::AssetEditor_Sound)
{
    ui->setupUi(this);

    //Populate streaming combobox
    ui->comboBox_streaming->addItem("Not Streamed");
    ui->comboBox_streaming->addItem("Not Streamed (Uncompress on Load)");
    ui->comboBox_streaming->addItem("Stream From Disk");

    //Populate Channels combobox
    ui->comboBox_channels->addItem("Mono");
    ui->comboBox_channels->addItem("Stereo");
    ui->comboBox_channels->addItem("3D");

    //Populate Sample Rate combo box
    ui->comboBox_sampleRate->addItem("5,512 Hz");
    ui->comboBox_sampleRate->addItem("11,025 Hz");
    ui->comboBox_sampleRate->addItem("22,050 Hz");
    ui->comboBox_sampleRate->addItem("32,000 Hz");
    ui->comboBox_sampleRate->addItem("44,100 Hz");
    ui->comboBox_sampleRate->addItem("48,000 Hz");

    //Populate Depth combobox
    ui->comboBox_depth->addItem("16-bit");
    ui->comboBox_depth->addItem("8-bit");

    //Populate Bitrate
    ui->comboBox_bitRate->addItem("8 Kbps");
    ui->comboBox_bitRate->addItem("16 Kbps");
    ui->comboBox_bitRate->addItem("24 Kbps");
    ui->comboBox_bitRate->addItem("32 Kbps");
    ui->comboBox_bitRate->addItem("32 Kbps");
    ui->comboBox_bitRate->addItem("40 Kbps");
    ui->comboBox_bitRate->addItem("48 Kbps");
    ui->comboBox_bitRate->addItem("56 Kbps");
    ui->comboBox_bitRate->addItem("64 Kbps");
    ui->comboBox_bitRate->addItem("80 Kbps");
    ui->comboBox_bitRate->addItem("96 Kbps");
    ui->comboBox_bitRate->addItem("112 Kbps");
    ui->comboBox_bitRate->addItem("128 Kbps");
    ui->comboBox_bitRate->addItem("144 Kbps");
    ui->comboBox_bitRate->addItem("160 Kbps");
    ui->comboBox_bitRate->addItem("192 Kbps");
    ui->comboBox_bitRate->addItem("224 Kbps");
    ui->comboBox_bitRate->addItem("256 Kbps");
    ui->comboBox_bitRate->addItem("320 Kbps");
    ui->comboBox_bitRate->addItem("512 Kbps");

}

AssetEditor_Sound::~AssetEditor_Sound()
{
    delete ui;
}
