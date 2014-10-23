#ifndef WORKSPACEEDITORTABCLUSTER_H
#define WORKSPACEEDITORTABCLUSTER_H

#include <QMainWindow>
#include "AssetEditor.h"

/*
 *  Represents a cluster of tabs for asset editors.
 *  The purpose of this to eventually have detachable tabs and multiple windows with their own set of tabs
 * */

namespace Ui {
class WorkspaceEditorTabCluster;
}

class WorkspaceEditorTabCluster : public QMainWindow
{
    Q_OBJECT

public:
    explicit WorkspaceEditorTabCluster(QWidget *parent = 0);
    ~WorkspaceEditorTabCluster();

    //Add an asset editor to this cluster
    void AppendAssetEditor(QSharedPointer<AssetEditor> editor);

private:
    Ui::WorkspaceEditorTabCluster *ui;

    std::vector<QSharedPointer<AssetEditor> > EditorList;
};

#endif // WORKSPACEEDITORTABCLUSTER_H
