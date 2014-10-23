#include "WorkspaceEditorTabCluster.h"
#include "ui_workspaceeditortabcluster.h"
#include "GMAsset.h"

WorkspaceEditorTabCluster::WorkspaceEditorTabCluster(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::WorkspaceEditorTabCluster)
{
    ui->setupUi(this);
}

WorkspaceEditorTabCluster::~WorkspaceEditorTabCluster()
{
    delete ui;
}

//Append an asset editor to this tab cluster
void WorkspaceEditorTabCluster::AppendAssetEditor(QSharedPointer<AssetEditor> editor)
{
    EditorList.push_back(editor);
    int newIndex = ui->tabWidget->addTab(editor.data(),editor->GetAsset()->GetPixmap(),editor->GetAsset()->GetName());
    ui->tabWidget->setCurrentIndex(newIndex); //Select the new tab
}
