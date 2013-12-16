#ifndef WORKSPACE_H
#define WORKSPACE_H

#include "GMProject.h"
#include <QSharedPointer>
#include "WorkspaceEditorTabCluster.h"
#include "ResourceEditor.h"

class Workspace
{
public:
    Workspace();
    void SetCurrentProject(QSharedPointer<GMProject> &project);
    QSharedPointer<GMProject> GetCurrentProject();
    WorkspaceEditorTabCluster* GetDefaultEditorTabCluster() { return defaultEditorTabCluster; }

    //Open the resource editor for the specified resource
    void OpenResourceEditor(QSharedPointer<GMResource> resource);
    //Find an open resource editor in any of the editor tab clusters.
    QSharedPointer<ResourceEditor> FindOpenResourceEditor(QSharedPointer<GMResource> resource);

    static Workspace* GetSingleton() { return singleton; }
    static void SetSingleton(Workspace* ptr) { singleton = ptr; }
private:
    QSharedPointer<GMProject> currentProject;
    WorkspaceEditorTabCluster* defaultEditorTabCluster;

    static Workspace* singleton;
};

#endif // WORKSPACE_H
