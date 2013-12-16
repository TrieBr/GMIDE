#include "GMResource_Room.h"
#include "ResourceEditor_Room.h"
GMResource_Room::GMResource_Room()
{
}

bool GMResource_Room::Load(const QString &fileName) {
    this->GMResource::Load(fileName);
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
