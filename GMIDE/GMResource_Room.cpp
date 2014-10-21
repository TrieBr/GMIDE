#include "GMResource_Room.h"
#include "ResourceEditor_Room.h"
GMResource_Room::GMResource_Room()
{
    resourceType = GM_RESOURCE_ROOM;
}

bool GMResource_Room::Load(const QFileInfo &file) {
    this->GMResource::Load(file);
    return false;
}
QPixmap GMResource_Room::GetPixmap() {
    return QPixmap(":/main/icons/projection-screen.png") ;
}
QSharedPointer<ResourceEditor> GMResource_Room::CreateEditor() {
    QSharedPointer<ResourceEditor> editor = QSharedPointer<ResourceEditor>(new ResourceEditor());
    editor->SetEditorWidget(new ResourceEditor_Room(this));

    return editor;
}
