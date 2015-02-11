#include "MainWindow.h"
#include "ui_mainwindow.h"
#include "Workspace.h"
#include "Logger.h"
#include "TextEditIODevice.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->frame->layout()->addWidget(Workspace::GetSingleton()->GetDefaultEditorTabCluster());
    Workspace::GetSingleton()->GetDefaultEditorTabCluster()->show();


    Logger::SetIODevice(LogIDE,new TextEditIODevice(ui->plainTextEdit_ide_log));

    QSharedPointer<GMProject> project (new GMProject());
    project->Load("D:\\Dropbox\\nGod\\Game with Sounds\\nGod.gmx/nGod.project.gmx");
    Workspace::GetSingleton()->SetCurrentProject(project);
    ui->treeView->setModel(Workspace::GetSingleton()->GetCurrentProject()->ItemModel());

}
MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_treeView_doubleClicked(const QModelIndex &index)
{
    if (index.parent().isValid()) {
        QSharedPointer<GMAsset> resource;
        resource = index.data(Qt::UserRole).value<QSharedPointer<GMAsset> >();
        if (!resource.isNull()) {
            Workspace::GetSingleton()->OpenAssetEditor(resource);
        }
    }
}
