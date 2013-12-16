#include "WorkspaceEditorTabCluster.h"
#include "ui_workspaceeditortabcluster.h"

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

void WorkspaceEditorTabCluster::AppendResourceEditor(QSharedPointer<ResourceEditor> editor) {
    EditorList.push_back(editor);
    ui->tabWidget->addTab(editor->GetEditorWidget(),"Nig");
}
