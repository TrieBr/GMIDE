#ifndef RESOURCEEDITOR_H
#define RESOURCEEDITOR_H

#include <QWidget>

class ResourceEditor
{
public:
    ResourceEditor();

    QWidget* GetEditorWidget() { return editorWidget; }
    void SetEditorWidget(QWidget* widget) { editorWidget = widget; }
private:

protected:
    QWidget* editorWidget;

};

#endif // RESOURCEEDITOR_H
