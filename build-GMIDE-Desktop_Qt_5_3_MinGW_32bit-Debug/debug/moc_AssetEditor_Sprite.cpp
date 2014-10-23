/****************************************************************************
** Meta object code from reading C++ file 'AssetEditor_Sprite.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.3.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../GMIDE/AssetEditor_Sprite.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'AssetEditor_Sprite.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.3.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_AssetEditor_Sprite_t {
    QByteArrayData data[13];
    char stringdata[340];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AssetEditor_Sprite_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AssetEditor_Sprite_t qt_meta_stringdata_AssetEditor_Sprite = {
    {
QT_MOC_LITERAL(0, 0, 18),
QT_MOC_LITERAL(1, 19, 47),
QT_MOC_LITERAL(2, 67, 0),
QT_MOC_LITERAL(3, 68, 5),
QT_MOC_LITERAL(4, 74, 34),
QT_MOC_LITERAL(5, 109, 35),
QT_MOC_LITERAL(6, 145, 5),
QT_MOC_LITERAL(7, 151, 37),
QT_MOC_LITERAL(8, 189, 26),
QT_MOC_LITERAL(9, 216, 29),
QT_MOC_LITERAL(10, 246, 34),
QT_MOC_LITERAL(11, 281, 29),
QT_MOC_LITERAL(12, 311, 28)
    },
    "AssetEditor_Sprite\0"
    "on_horizontalSlider_alphaTolerance_valueChanged\0"
    "\0value\0on_pushButton_originCenter_clicked\0"
    "on_spriteFrameView_selectionChanged\0"
    "index\0on_toolButton_animationToggle_clicked\0"
    "animationPlayBackTimerTick\0"
    "on_toolButton_zoomFit_clicked\0"
    "on_toolButton_zoomOriginal_clicked\0"
    "on_toolButton_zoomOut_clicked\0"
    "on_toolButton_zoomIn_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AssetEditor_Sprite[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   59,    2, 0x08 /* Private */,
       4,    0,   62,    2, 0x08 /* Private */,
       5,    1,   63,    2, 0x08 /* Private */,
       7,    0,   66,    2, 0x08 /* Private */,
       8,    0,   67,    2, 0x08 /* Private */,
       9,    0,   68,    2, 0x08 /* Private */,
      10,    0,   69,    2, 0x08 /* Private */,
      11,    0,   70,    2, 0x08 /* Private */,
      12,    0,   71,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void AssetEditor_Sprite::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        AssetEditor_Sprite *_t = static_cast<AssetEditor_Sprite *>(_o);
        switch (_id) {
        case 0: _t->on_horizontalSlider_alphaTolerance_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->on_pushButton_originCenter_clicked(); break;
        case 2: _t->on_spriteFrameView_selectionChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->on_toolButton_animationToggle_clicked(); break;
        case 4: _t->animationPlayBackTimerTick(); break;
        case 5: _t->on_toolButton_zoomFit_clicked(); break;
        case 6: _t->on_toolButton_zoomOriginal_clicked(); break;
        case 7: _t->on_toolButton_zoomOut_clicked(); break;
        case 8: _t->on_toolButton_zoomIn_clicked(); break;
        default: ;
        }
    }
}

const QMetaObject AssetEditor_Sprite::staticMetaObject = {
    { &AssetEditor::staticMetaObject, qt_meta_stringdata_AssetEditor_Sprite.data,
      qt_meta_data_AssetEditor_Sprite,  qt_static_metacall, 0, 0}
};


const QMetaObject *AssetEditor_Sprite::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AssetEditor_Sprite::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_AssetEditor_Sprite.stringdata))
        return static_cast<void*>(const_cast< AssetEditor_Sprite*>(this));
    return AssetEditor::qt_metacast(_clname);
}

int AssetEditor_Sprite::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AssetEditor::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 9;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
