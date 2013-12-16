#ifndef WORKSPACEEDITORTABCLUSTER_H
#define WORKSPACEEDITORTABCLUSTER_H

#include <QMainWindow>
#include "ResourceEditor.h"

namespace Ui {
class WorkspaceEditorTabCluster;
}

class WorkspaceEditorTabCluster : public QMainWindow
{
    Q_OBJECT

public:
    explicit WorkspaceEditorTabCluster(QWidget *parent = 0);
    ~WorkspaceEditorTabCluster();

    //Add a resource editor to this cluster
    void AppendResourceEditor(QSharedPointer<ResourceEditor> editor);

private:
    Ui::WorkspaceEditorTabCluster *ui;

    std::vector<QSharedPointer<ResourceEditor> > EditorList;
};

#endif // WORKSPACEEDITORTABCLUSTER_H
