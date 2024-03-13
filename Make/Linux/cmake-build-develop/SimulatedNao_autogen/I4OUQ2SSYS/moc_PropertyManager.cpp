/****************************************************************************
** Meta object code from reading C++ file 'PropertyManager.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.2.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../Src/Libs/SimulatedNao/Views/DataView/PropertyManager.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'PropertyManager.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.2.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_PropertyManager_t {
    const uint offsetsAndSize[16];
    char stringdata0[74];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_PropertyManager_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_PropertyManager_t qt_meta_stringdata_PropertyManager = {
    {
QT_MOC_LITERAL(0, 15), // "PropertyManager"
QT_MOC_LITERAL(16, 8), // "setValue"
QT_MOC_LITERAL(25, 0), // ""
QT_MOC_LITERAL(26, 11), // "QtProperty*"
QT_MOC_LITERAL(38, 8), // "property"
QT_MOC_LITERAL(47, 3), // "val"
QT_MOC_LITERAL(51, 16), // "slotValueChanged"
QT_MOC_LITERAL(68, 5) // "value"

    },
    "PropertyManager\0setValue\0\0QtProperty*\0"
    "property\0val\0slotValueChanged\0value"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PropertyManager[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    2,   26,    2, 0x0a,    1 /* Public */,
       6,    2,   31,    2, 0x08,    4 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3, QMetaType::QVariant,    4,    5,
    QMetaType::Void, 0x80000000 | 3, QMetaType::QVariant,    4,    7,

       0        // eod
};

void PropertyManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PropertyManager *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->setValue((*reinterpret_cast< std::add_pointer_t<QtProperty*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QVariant>>(_a[2]))); break;
        case 1: _t->slotValueChanged((*reinterpret_cast< std::add_pointer_t<QtProperty*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QVariant>>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObject PropertyManager::staticMetaObject = { {
    QMetaObject::SuperData::link<QtVariantPropertyManager::staticMetaObject>(),
    qt_meta_stringdata_PropertyManager.offsetsAndSize,
    qt_meta_data_PropertyManager,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_PropertyManager_t
, QtPrivate::TypeAndForceComplete<PropertyManager, std::true_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QtProperty *, std::false_type>, QtPrivate::TypeAndForceComplete<const QVariant &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QtProperty *, std::false_type>, QtPrivate::TypeAndForceComplete<const QVariant &, std::false_type>


>,
    nullptr
} };


const QMetaObject *PropertyManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PropertyManager::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PropertyManager.stringdata0))
        return static_cast<void*>(this);
    return QtVariantPropertyManager::qt_metacast(_clname);
}

int PropertyManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QtVariantPropertyManager::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 2;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
