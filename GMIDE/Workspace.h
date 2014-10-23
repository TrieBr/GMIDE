#ifndef WORKSPACE_H
#define WORKSPACE_H

#include "GMProject.h"
#include <QSharedPointer>
#include "WorkspaceEditorTabCluster.h"
#include "AssetEditor.h"

/*
 * Represents a "session" in the IDE with an active project, and manages other properties like tab clusters
 *
 * */

class Workspace
{
public:
    //Constructor
    Workspace();
    //Set the current project for this workspace
    void SetCurrentProject(QSharedPointer<GMProject> &project);
    //Get the current project for this workspace
    QSharedPointer<GMProject> GetCurrentProject();
    //Get the default tab cluster
    WorkspaceEditorTabCluster* GetDefaultEditorTabCluster() { return defaultEditorTabCluster; }
    //Open the asset editor for the specified asset
    void OpenAssetEditor(QSharedPointer<GMAsset> resource);
    //Find an open asset editor in any of the editor tab clusters.
    QSharedPointer<AssetEditor> FindOpenAssetEditor(QSharedPointer<GMAsset> asset);

    //Get workspace singleton
    static Workspace* GetSingleton() { return singleton; }

    static void SetSingleton(Workspace* ptr) { singleton = ptr; }
private:
    QSharedPointer<GMProject> currentProject;           //Current project for this workspace
    WorkspaceEditorTabCluster* defaultEditorTabCluster; //Default tab cluster

    static Workspace* singleton;
};

#endif // WORKSPACE_H
