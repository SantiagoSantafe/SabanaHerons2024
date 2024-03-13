/****************************************************************************
** Meta object code from reading C++ file 'RegisteredDockWidget.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.2.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../Util/SimRobot/Src/SimRobot/RegisteredDockWidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'RegisteredDockWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.2.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_RegisteredDockWidget_t {
    const uint offsetsAndSize[20];
    char stringdata0[115];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_RegisteredDockWidget_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_RegisteredDockWidget_t qt_meta_stringdata_RegisteredDockWidget = {
    {
QT_MOC_LITERAL(0, 20), // "RegisteredDockWidget"
QT_MOC_LITERAL(21, 12), // "closedObject"
QT_MOC_LITERAL(34, 0), // ""
QT_MOC_LITERAL(35, 6), // "object"
QT_MOC_LITERAL(42, 17), // "closedContextMenu"
QT_MOC_LITERAL(60, 17), // "visibilityChanged"
QT_MOC_LITERAL(78, 7), // "visible"
QT_MOC_LITERAL(86, 4), // "copy"
QT_MOC_LITERAL(91, 11), // "exportAsSvg"
QT_MOC_LITERAL(103, 11) // "exportAsPng"

    },
    "RegisteredDockWidget\0closedObject\0\0"
    "object\0closedContextMenu\0visibilityChanged\0"
    "visible\0copy\0exportAsSvg\0exportAsPng"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_RegisteredDockWidget[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   50,    2, 0x06,    1 /* Public */,
       4,    0,   53,    2, 0x06,    3 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       5,    1,   54,    2, 0x0a,    4 /* Public */,
       7,    0,   57,    2, 0x08,    6 /* Private */,
       8,    0,   58,    2, 0x08,    7 /* Private */,
       9,    0,   59,    2, 0x08,    8 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    6,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void RegisteredDockWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<RegisteredDockWidget *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->closedObject((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 1: _t->closedContextMenu(); break;
        case 2: _t->visibilityChanged((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 3: _t->copy(); break;
        case 4: _t->exportAsSvg(); break;
        case 5: _t->exportAsPng(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (RegisteredDockWidget::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RegisteredDockWidget::closedObject)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (RegisteredDockWidget::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RegisteredDockWidget::closedContextMenu)) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject RegisteredDockWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<QDockWidget::staticMetaObject>(),
    qt_meta_stringdata_RegisteredDockWidget.offsetsAndSize,
    qt_meta_data_RegisteredDockWidget,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_RegisteredDockWidget_t
, QtPrivate::TypeAndForceComplete<RegisteredDockWidget, std::true_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QString &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<bool, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>


>,
    nullptr
} };


const QMetaObject *RegisteredDockWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *RegisteredDockWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_RegisteredDockWidget.stringdata0))
        return static_cast<void*>(this);
    return QDockWidget::qt_metacast(_clname);
}

int RegisteredDockWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDockWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void RegisteredDockWidget::closedObject(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void RegisteredDockWidget::closedContextMenu()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
