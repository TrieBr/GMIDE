#ifndef GMRESOURCEGROUP_H
#define GMRESOURCEGROUP_H

#include <QString>
#include <QSharedPointer>
 #include <QStandardItemModel>
#include <QStandardItem>
#include <vector>


template<class T>
class GMResourceNode : public QStandardItem
{
public:
    GMResourceNode() {

    }
    void SetName(const QString &name, bool bold = false) {
        groupName = name;
        boldName = bold;
    }
    QString GetName() const {
        if (!resource.isNull()) {
            return resource->GetName();
        }
        return groupName;
    }

    void SetResource(QSharedPointer<T> resourcePtr) {
        resource = resourcePtr;
    }

    GMResourceNode* CreateChild(const QString &childName) {
        GMResourceNode* child = new GMResourceNode();
        child->SetName(childName);
        this->appendRow(child);
        return child;
    }

    virtual QVariant data( int role) const {
        if (role==Qt::DisplayRole || role==Qt::EditRole) {
            return QVariant(GetName());
        }
        if (role==Qt::FontRole && boldName) {
            QFont oFont =  QStandardItem::data(role).value<QFont>();
            oFont.setBold(true);
            return oFont;
        }
        if (role==Qt::DecorationRole) {
            if (!resource.isNull()) { //If not a folder/group
                QPixmap resourceIcon = resource->GetPixmap();
                if (resourceIcon.isNull()) {

                }else{
                    return resourceIcon;
                }
            }
        }
        if (role==Qt::UserRole) {
            QVariant r;
            r.setValue<QSharedPointer<GMResource> >(resource);
            return r;
        }
        return QStandardItem::data(role);
    }


private:
    QString groupName;
    QSharedPointer<T> resource;
    bool boldName;  //Is the resource name bold
};

#endif // GMRESOURCEGROUP_H
