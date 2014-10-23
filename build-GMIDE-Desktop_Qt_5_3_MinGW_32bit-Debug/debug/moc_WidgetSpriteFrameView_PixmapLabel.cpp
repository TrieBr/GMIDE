/****************************************************************************
** Meta object code from reading C++ file 'WidgetSpriteFrameView_PixmapLabel.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.3.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../GMIDE/WidgetSpriteFrameView_PixmapLabel.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'WidgetSpriteFrameView_PixmapLabel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.3.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_WidgetSpriteFrameView_Frame_t {
    QByteArrayData data[8];
    char stringdata[95];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_WidgetSpriteFrameView_Frame_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_WidgetSpriteFrameView_Frame_t qt_meta_stringdata_WidgetSpriteFrameView_Frame = {
    {
QT_MOC_LITERAL(0, 0, 27),
QT_MOC_LITERAL(1, 28, 9),
QT_MOC_LITERAL(2, 38, 0),
QT_MOC_LITERAL(3, 39, 11),
QT_MOC_LITERAL(4, 51, 13),
QT_MOC_LITERAL(5, 65, 10),
QT_MOC_LITERAL(6, 76, 12),
QT_MOC_LITERAL(7, 89, 5)
    },
    "WidgetSpriteFrameView_Frame\0setPixmap\0"
    "\0resizeEvent\0QResizeEvent*\0paintEvent\0"
    "QPaintEvent*\0event"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_WidgetSpriteFrameView_Frame[] = {

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
       1,    1,   29,    2, 0x0a /* Public */,
       3,    1,   32,    2, 0x0a /* Public */,
       5,    1,   35,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::QPixmap,    2,
    QMetaType::Void, 0x80000000 | 4,    2,
    QMetaType::Void, 0x80000000 | 6,    7,

       0        // eod
};

void WidgetSpriteFrameView_Frame::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        WidgetSpriteFrameView_Frame *_t = static_cast<WidgetSpriteFrameView_Frame *>(_o);
        switch (_id) {
        case 0: _t->setPixmap((*reinterpret_cast< const QPixmap(*)>(_a[1]))); break;
        case 1: _t->resizeEvent((*reinterpret_cast< QResizeEvent*(*)>(_a[1]))); break;
        case 2: _t->paintEvent((*reinterpret_cast< QPaintEvent*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject WidgetSpriteFrameView_Frame::staticMetaObject = {
    { &QFrame::staticMetaObject, qt_meta_stringdata_WidgetSpriteFrameView_Frame.data,
      qt_meta_data_WidgetSpriteFrameView_Frame,  qt_static_metacall, 0, 0}
};


const QMetaObject *WidgetSpriteFrameView_Frame::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *WidgetSpriteFrameView_Frame::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_WidgetSpriteFrameView_Frame.stringdata))
        return static_cast<void*>(const_cast< WidgetSpriteFrameView_Frame*>(this));
    return QFrame::qt_metacast(_clname);
}

int WidgetSpriteFrameView_Frame::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QFrame::qt_metacall(_c, _id, _a);
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
