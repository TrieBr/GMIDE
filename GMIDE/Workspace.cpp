#include "Workspace.h"

Workspace* Workspace::singleton = NULL;

Workspace::Workspace()
{
    defaultEditorTabCluster = new WorkspaceEditorTabCluster(0);

}
void Workspace::SetCurrentProject(QSharedPointer<GMProject> &project) {
    currentProject = project;
}
QSharedPointer<GMProject> Workspace::GetCurrentProject() {
    return currentProject;
}

//Open the resource editor for the specified resource
void Workspace::OpenResourceEditor(QSharedPointer<GMResource> resource) {
    QSharedPointer<ResourceEditor> editor = FindOpenResourceEditor(resource);
    if (!editor.isNull()) {
        //Show this editor
    }else{
        QSharedPointer<ResourceEditor> editorWidget = resource->CreateEditor();
        if (!editorWidget.isNull()) {
            GetDefaultEditorTabCluster()->AppendResourceEditor(editorWidget);
        }
    }
}

//Find an open resource editor in any of the editor tab clusters.
QSharedPointer<ResourceEditor> Workspace::FindOpenResourceEditor(QSharedPointer<GMResource> resource) {
    return QSharedPointer<ResourceEditor>();
}
