#include "AssetEditor_Script.h"
#include "ui_AssetEditor_Script.h"
#include <QWebFrame>

AssetEditor_Script::AssetEditor_Script(GMAsset_Script* asset, QWidget *parent) :
    AssetEditor(asset, parent),
    ui(new Ui::AssetEditor_Script),
    resource(asset)
{
    ui->setupUi(this);

        connect(ui->webView->page()->mainFrame(),SIGNAL(loadFinished(bool)),this,SLOT(frameLoaded(bool)));

}

AssetEditor_Script::~AssetEditor_Script()
{
    delete ui;
}

//Called from Javascript to get the text for the script
QString AssetEditor_Script::js_get_script_text()
{
     return resource->GetScript();
}


void AssetEditor_Script::frameLoaded(bool ok)
{
    QWebFrame* frame = ui->webView->page()->mainFrame();
    frame->addToJavaScriptWindowObject("bridge",this);
    frame->evaluateJavaScript("editor.setValue(bridge.js_get_script_text())");  //Tell editor to set its text to te script text
    frame->evaluateJavaScript("editor.setShowPrintMargin(false);");
     frame->evaluateJavaScript("editor.selection.moveCursorFileStart();");

}
