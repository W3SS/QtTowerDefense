/****************************************************************************
** Meta object code from reading C++ file 'tower.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../tower.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'tower.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_Tower_t {
    QByteArrayData data[8];
    char stringdata0[70];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Tower_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Tower_t qt_meta_stringdata_Tower = {
    {
QT_MOC_LITERAL(0, 0, 5), // "Tower"
QT_MOC_LITERAL(1, 6, 12), // "getDraggable"
QT_MOC_LITERAL(2, 19, 0), // ""
QT_MOC_LITERAL(3, 20, 12), // "setDraggable"
QT_MOC_LITERAL(4, 33, 12), // "is_draggable"
QT_MOC_LITERAL(5, 46, 8), // "getState"
QT_MOC_LITERAL(6, 55, 8), // "setState"
QT_MOC_LITERAL(7, 64, 5) // "state"

    },
    "Tower\0getDraggable\0\0setDraggable\0"
    "is_draggable\0getState\0setState\0state"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Tower[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   34,    2, 0x0a /* Public */,
       3,    1,   35,    2, 0x0a /* Public */,
       5,    0,   38,    2, 0x0a /* Public */,
       6,    1,   39,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Bool,
    QMetaType::Void, QMetaType::Bool,    4,
    QMetaType::Int,
    QMetaType::Void, QMetaType::Int,    7,

       0        // eod
};

void Tower::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Tower *_t = static_cast<Tower *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: { bool _r = _t->getDraggable();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 1: _t->setDraggable((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: { int _r = _t->getState();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 3: _t->setState((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject Tower::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_Tower.data,
      qt_meta_data_Tower,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *Tower::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Tower::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_Tower.stringdata0))
        return static_cast<void*>(const_cast< Tower*>(this));
    return QObject::qt_metacast(_clname);
}

int Tower::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
