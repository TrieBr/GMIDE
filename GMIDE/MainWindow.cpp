#include "MainWindow.h"
#include "ui_mainwindow.h"
#include "Workspace.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    ui->frame->layout()->addWidget(Workspace::GetSingleton()->GetDefaultEditorTabCluster());
    Workspace::GetSingleton()->GetDefaultEditorTabCluster()->show();
    ui->treeView->setModel(Workspace::GetSingleton()->GetCurrentProject()->ItemModel());


}
MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_treeView_doubleClicked(const QModelIndex &index)
{
    if (index.parent().isValid()) {
        QSharedPointer<GMResource> resource;
        resource = index.data(Qt::UserRole).value<QSharedPointer<GMResource> >();
        if (!resource.isNull()) {
            Workspace::GetSingleton()->OpenResourceEditor(resource);
        }
    }
}
