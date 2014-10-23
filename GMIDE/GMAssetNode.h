#ifndef GMASSETGROUP_H
#define GMASSETGROUP_H

#include <QString>
#include <QSharedPointer>
 #include <QStandardItemModel>
#include <QStandardItem>
#include <QFont>
#include <vector>

/*
 * GMAssetNode is a node in the tree that makes up a GameMaker Project (i.e. tree of sprites, backgrounds,etc)
 * It is derives from QStandardItem in order for it to be added to a data model and then displayed in a Tree widget for example
 * The Type is the type of asset this node points to eg:
 *      GMAssetNode<GMAsset_Object>
 * */

template<class T>
class GMAssetNode : public QStandardItem
{
public:
    //Constuctor
    GMAssetNode() {

    }
    //Set the name of the node
    void SetName(const QString &name, bool bold = false) {
        groupName = name;
        boldName = bold;
    }
    //Get the name of the node
    QString GetName() const {
        if (!asset.isNull()) { //If this is points to an asset (non-null) then return the name of the asset
            return asset->GetName();
        }
        return groupName; //Otherwiser, return the group/folder name
    }
    //Set the asset this node points to
    void SetAsset(QSharedPointer<T> resourcePtr) {
        asset = resourcePtr;
    }
    //Create a child GMAssetNode with a specified name
    GMAssetNode* CreateChild(const QString &childName) {
        GMAssetNode* child = new GMAssetNode(); //Create the node
        child->SetName(childName);  //Set the name
        this->appendRow(child); //Append the row (to make it a child of this QStandardItem)
        return child;
    }

    //Get data based on roll
    virtual QVariant data( int role) const {
        if (role==Qt::DisplayRole || role==Qt::EditRole) { //Get the name of the node
            return QVariant(GetName());
        }
        if (role==Qt::FontRole && boldName) { //Get the font
            QFont oFont =  (QStandardItem::data(role).template value< QFont > ()); //Use the QStandardItem font
            oFont.setBold(true); //Set the font to bold
            return oFont;
        }
        if (role==Qt::DecorationRole) { //Decoration for the node (ie icon)
            if (!asset.isNull()) { //If not a folder/group
                QPixmap resourceIcon = asset->GetPixmap(); //Get the pixmap iconof the asset
                if (resourceIcon.isNull()) {

                }else{
                    return resourceIcon;
                }
            }
        }
        if (role==Qt::UserRole) { //User role returns the asset this node points to
            QVariant r;
            r.setValue<QSharedPointer<GMAsset> >(asset);
            return r;
        }
        return QStandardItem::data(role);
    }


private:
    QString groupName;      //Name of the node (ie folder name)
    QSharedPointer<T> asset;//Pointer to the asset this node points to
    bool boldName;          //Is the resource name bold?
};

#endif // GMASSETGROUP_H
