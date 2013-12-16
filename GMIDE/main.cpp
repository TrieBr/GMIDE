#include "MainWindow.h"
#include <QApplication>
#include <QStyleFactory>
#include "Workspace.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    a.setStyle(QStyleFactory::create("Fusion"));

    QPalette palette;
    palette.setColor(QPalette::Window, QColor(53,53,53));
    palette.setColor(QPalette::WindowText, Qt::white);
    palette.setColor(QPalette::Base, QColor(40,40,40));
    palette.setColor(QPalette::AlternateBase, QColor(53,53,53));
    palette.setColor(QPalette::ToolTipBase, Qt::white);
    palette.setColor(QPalette::ToolTipText, Qt::white);
    palette.setColor(QPalette::Text, Qt::white);
    palette.setColor(QPalette::Button, QColor(53,53,53));
    palette.setColor(QPalette::ButtonText, Qt::white);
    palette.setColor(QPalette::BrightText, Qt::red);

    palette.setColor(QPalette::Highlight, QColor(45, 130, 195).lighter());
    palette.setColor(QPalette::HighlightedText, Qt::black);
    qApp->setPalette(palette);

    QSharedPointer<GMProject> project (new GMProject());
    project->Load("D:/Dropbox/Mobile Games/Blueprint.gmx/Blueprint.project.gmx");
    Workspace::SetSingleton(new Workspace());
    Workspace::GetSingleton()->SetCurrentProject(project);

    MainWindow w;
    w.show();

    return a.exec();
}
