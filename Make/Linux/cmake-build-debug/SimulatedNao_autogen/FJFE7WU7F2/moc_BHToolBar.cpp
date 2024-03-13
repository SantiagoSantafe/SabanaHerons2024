/****************************************************************************
** Meta object code from reading C++ file 'BHToolBar.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.2.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../Src/Libs/SimulatedNao/BHToolBar.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'BHToolBar.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.2.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_BHToolBar_t {
    const uint offsetsAndSize[12];
    char stringdata0[56];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_BHToolBar_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_BHToolBar_t qt_meta_stringdata_BHToolBar = {
    {
QT_MOC_LITERAL(0, 9), // "BHToolBar"
QT_MOC_LITERAL(10, 12), // "requestStand"
QT_MOC_LITERAL(23, 0), // ""
QT_MOC_LITERAL(24, 6), // "active"
QT_MOC_LITERAL(31, 14), // "requestSitDown"
QT_MOC_LITERAL(46, 9) // "headAngle"

    },
    "BHToolBar\0requestStand\0\0active\0"
    "requestSitDown\0headAngle"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_BHToolBar[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   32,    2, 0x08,    1 /* Private */,
       4,    1,   35,    2, 0x08,    3 /* Private */,
       5,    1,   38,    2, 0x08,    5 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Bool,    3,

       0        // eod
};

void BHToolBar::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<BHToolBar *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->requestStand((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 1: _t->requestSitDown((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 2: _t->headAngle((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject BHToolBar::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_BHToolBar.offsetsAndSize,
    qt_meta_data_BHToolBar,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_BHToolBar_t
, QtPrivate::TypeAndForceComplete<BHToolBar, std::true_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<bool, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<bool, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<bool, std::false_type>


>,
    nullptr
} };


const QMetaObject *BHToolBar::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *BHToolBar::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_BHToolBar.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int BHToolBar::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 3;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
