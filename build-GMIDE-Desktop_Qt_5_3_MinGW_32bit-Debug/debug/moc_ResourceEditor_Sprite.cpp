/****************************************************************************
** Meta object code from reading C++ file 'ResourceEditor_Sprite.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.3.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../GMIDE/ResourceEditor_Sprite.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ResourceEditor_Sprite.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.3.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_ResourceEditor_Sprite_t {
    QByteArrayData data[7];
    char stringdata[154];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ResourceEditor_Sprite_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ResourceEditor_Sprite_t qt_meta_stringdata_ResourceEditor_Sprite = {
    {
QT_MOC_LITERAL(0, 0, 21),
QT_MOC_LITERAL(1, 22, 47),
QT_MOC_LITERAL(2, 70, 0),
QT_MOC_LITERAL(3, 71, 5),
QT_MOC_LITERAL(4, 77, 34),
QT_MOC_LITERAL(5, 112, 35),
QT_MOC_LITERAL(6, 148, 5)
    },
    "ResourceEditor_Sprite\0"
    "on_horizontalSlider_alphaTolerance_valueChanged\0"
    "\0value\0on_pushButton_originCenter_clicked\0"
    "on_spriteFrameView_selectionChanged\0"
    "index"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ResourceEditor_Sprite[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   29,    2, 0x08 /* Private */,
       4,    0,   32,    2, 0x08 /* Private */,
       5,    1,   33,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    6,

       0        // eod
};

void ResourceEditor_Sprite::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ResourceEditor_Sprite *_t = static_cast<ResourceEditor_Sprite *>(_o);
        switch (_id) {
        case 0: _t->on_horizontalSlider_alphaTolerance_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->on_pushButton_originCenter_clicked(); break;
        case 2: _t->on_spriteFrameView_selectionChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject ResourceEditor_Sprite::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_ResourceEditor_Sprite.data,
      qt_meta_data_ResourceEditor_Sprite,  qt_static_metacall, 0, 0}
};


const QMetaObject *ResourceEditor_Sprite::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ResourceEditor_Sprite::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ResourceEditor_Sprite.stringdata))
        return static_cast<void*>(const_cast< ResourceEditor_Sprite*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int ResourceEditor_Sprite::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
