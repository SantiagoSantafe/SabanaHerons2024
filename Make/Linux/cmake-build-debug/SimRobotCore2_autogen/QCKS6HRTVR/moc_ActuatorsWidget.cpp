/****************************************************************************
** Meta object code from reading C++ file 'ActuatorsWidget.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.2.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../Util/SimRobot/Src/SimRobotCore2/ActuatorsWidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ActuatorsWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.2.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ActuatorsWidget_t {
    const uint offsetsAndSize[6];
    char stringdata0[31];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_ActuatorsWidget_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_ActuatorsWidget_t qt_meta_stringdata_ActuatorsWidget = {
    {
QT_MOC_LITERAL(0, 15), // "ActuatorsWidget"
QT_MOC_LITERAL(16, 13), // "closeActuator"
QT_MOC_LITERAL(30, 0) // ""

    },
    "ActuatorsWidget\0closeActuator\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ActuatorsWidget[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   20,    2, 0x08,    1 /* Private */,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void ActuatorsWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ActuatorsWidget *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->closeActuator(); break;
        default: ;
        }
    }
    (void)_a;
}

const QMetaObject ActuatorsWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_ActuatorsWidget.offsetsAndSize,
    qt_meta_data_ActuatorsWidget,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_ActuatorsWidget_t
, QtPrivate::TypeAndForceComplete<ActuatorsWidget, std::true_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>


>,
    nullptr
} };


const QMetaObject *ActuatorsWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ActuatorsWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ActuatorsWidget.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "SimRobot::Widget"))
        return static_cast< SimRobot::Widget*>(this);
    return QWidget::qt_metacast(_clname);
}

int ActuatorsWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 1;
    }
    return _id;
}
struct qt_meta_stringdata_ActuatorWidget_t {
    const uint offsetsAndSize[10];
    char stringdata0[49];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_ActuatorWidget_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_ActuatorWidget_t qt_meta_stringdata_ActuatorWidget = {
    {
QT_MOC_LITERAL(0, 14), // "ActuatorWidget"
QT_MOC_LITERAL(15, 13), // "releasedClose"
QT_MOC_LITERAL(29, 0), // ""
QT_MOC_LITERAL(30, 12), // "valueChanged"
QT_MOC_LITERAL(43, 5) // "value"

    },
    "ActuatorWidget\0releasedClose\0\0"
    "valueChanged\0value"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ActuatorWidget[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   32,    2, 0x06,    1 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       3,    1,   33,    2, 0x0a,    2 /* Public */,
       3,    1,   36,    2, 0x0a,    4 /* Public */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void, QMetaType::Double,    4,

       0        // eod
};

void ActuatorWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ActuatorWidget *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->releasedClose(); break;
        case 1: _t->valueChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 2: _t->valueChanged((*reinterpret_cast< std::add_pointer_t<double>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ActuatorWidget::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ActuatorWidget::releasedClose)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject ActuatorWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_ActuatorWidget.offsetsAndSize,
    qt_meta_data_ActuatorWidget,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_ActuatorWidget_t
, QtPrivate::TypeAndForceComplete<ActuatorWidget, std::true_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<double, std::false_type>


>,
    nullptr
} };


const QMetaObject *ActuatorWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ActuatorWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ActuatorWidget.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int ActuatorWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void ActuatorWidget::releasedClose()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
