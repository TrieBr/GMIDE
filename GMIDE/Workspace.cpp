#include "Workspace.h"

Workspace* Workspace::singleton = NULL;

Workspace::Workspace()
{
    defaultEditorTabCluster = new WorkspaceEditorTabCluster(0); //Create a defailt tab cluster

}
//Set currentproject for this workspace
void Workspace::SetCurrentProject(QSharedPointer<GMProject> &project)
{

    currentProject = project;
}
//Get the current project for this workspace
QSharedPointer<GMProject> Workspace::GetCurrentProject()
{
    return currentProject;
}

//Open the resource editor for the specified resource
void Workspace::OpenAssetEditor(QSharedPointer<GMAsset> asset)
{
    QSharedPointer<AssetEditor> editor = FindOpenAssetEditor(asset); //Find open asset editor if there is already one open for this asset
    if (!editor.isNull()) { //If it exists, show it.
        //Show this editor
    }else{
        QSharedPointer<AssetEditor> editorWidget = asset->CreateEditor(); //Create a new editor for this asset
        if (!editorWidget.isNull()) { //If an editor was sucessfully created, append it to the default cluster
            GetDefaultEditorTabCluster()->AppendAssetEditor(editorWidget);
        }
    }
}

//Find an open resource editor in any of the editor tab clusters.
QSharedPointer<AssetEditor> Workspace::FindOpenAssetEditor(QSharedPointer<GMAsset> resource)
{
    return QSharedPointer<AssetEditor>();
}
