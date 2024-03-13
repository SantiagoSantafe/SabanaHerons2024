/****************************************************************************
** Meta object code from reading C++ file 'qteditorfactory.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.2.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../Util/qtpropertybrowser/qteditorfactory.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qteditorfactory.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.2.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QtSpinBoxFactory_t {
    const uint offsetsAndSize[16];
    char stringdata0[122];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_QtSpinBoxFactory_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_QtSpinBoxFactory_t qt_meta_stringdata_QtSpinBoxFactory = {
    {
QT_MOC_LITERAL(0, 16), // "QtSpinBoxFactory"
QT_MOC_LITERAL(17, 19), // "slotPropertyChanged"
QT_MOC_LITERAL(37, 0), // ""
QT_MOC_LITERAL(38, 11), // "QtProperty*"
QT_MOC_LITERAL(50, 16), // "slotRangeChanged"
QT_MOC_LITERAL(67, 21), // "slotSingleStepChanged"
QT_MOC_LITERAL(89, 12), // "slotSetValue"
QT_MOC_LITERAL(102, 19) // "slotEditorDestroyed"

    },
    "QtSpinBoxFactory\0slotPropertyChanged\0"
    "\0QtProperty*\0slotRangeChanged\0"
    "slotSingleStepChanged\0slotSetValue\0"
    "slotEditorDestroyed"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QtSpinBoxFactory[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    2,   44,    2, 0x08,    1 /* Private */,
       4,    3,   49,    2, 0x08,    4 /* Private */,
       5,    2,   56,    2, 0x08,    8 /* Private */,
       6,    1,   61,    2, 0x08,   11 /* Private */,
       7,    1,   64,    2, 0x08,   13 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3, QMetaType::Int,    2,    2,
    QMetaType::Void, 0x80000000 | 3, QMetaType::Int, QMetaType::Int,    2,    2,    2,
    QMetaType::Void, 0x80000000 | 3, QMetaType::Int,    2,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::QObjectStar,    2,

       0        // eod
};

void QtSpinBoxFactory::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<QtSpinBoxFactory *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->d_func()->slotPropertyChanged((*reinterpret_cast< std::add_pointer_t<QtProperty*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2]))); break;
        case 1: _t->d_func()->slotRangeChanged((*reinterpret_cast< std::add_pointer_t<QtProperty*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[3]))); break;
        case 2: _t->d_func()->slotSingleStepChanged((*reinterpret_cast< std::add_pointer_t<QtProperty*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2]))); break;
        case 3: _t->d_func()->slotSetValue((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 4: _t->d_func()->slotEditorDestroyed((*reinterpret_cast< std::add_pointer_t<QObject*>>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject QtSpinBoxFactory::staticMetaObject = { {
    QMetaObject::SuperData::link<QtAbstractEditorFactory<QtIntPropertyManager>::staticMetaObject>(),
    qt_meta_stringdata_QtSpinBoxFactory.offsetsAndSize,
    qt_meta_data_QtSpinBoxFactory,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_QtSpinBoxFactory_t
, QtPrivate::TypeAndForceComplete<QtSpinBoxFactory, std::true_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QtProperty *, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QtProperty *, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QtProperty *, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QObject *, std::false_type>


>,
    nullptr
} };


const QMetaObject *QtSpinBoxFactory::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QtSpinBoxFactory::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QtSpinBoxFactory.stringdata0))
        return static_cast<void*>(this);
    return QtAbstractEditorFactory<QtIntPropertyManager>::qt_metacast(_clname);
}

int QtSpinBoxFactory::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QtAbstractEditorFactory<QtIntPropertyManager>::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 5;
    }
    return _id;
}
struct qt_meta_stringdata_QtSliderFactory_t {
    const uint offsetsAndSize[16];
    char stringdata0[121];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_QtSliderFactory_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_QtSliderFactory_t qt_meta_stringdata_QtSliderFactory = {
    {
QT_MOC_LITERAL(0, 15), // "QtSliderFactory"
QT_MOC_LITERAL(16, 19), // "slotPropertyChanged"
QT_MOC_LITERAL(36, 0), // ""
QT_MOC_LITERAL(37, 11), // "QtProperty*"
QT_MOC_LITERAL(49, 16), // "slotRangeChanged"
QT_MOC_LITERAL(66, 21), // "slotSingleStepChanged"
QT_MOC_LITERAL(88, 12), // "slotSetValue"
QT_MOC_LITERAL(101, 19) // "slotEditorDestroyed"

    },
    "QtSliderFactory\0slotPropertyChanged\0"
    "\0QtProperty*\0slotRangeChanged\0"
    "slotSingleStepChanged\0slotSetValue\0"
    "slotEditorDestroyed"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QtSliderFactory[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    2,   44,    2, 0x08,    1 /* Private */,
       4,    3,   49,    2, 0x08,    4 /* Private */,
       5,    2,   56,    2, 0x08,    8 /* Private */,
       6,    1,   61,    2, 0x08,   11 /* Private */,
       7,    1,   64,    2, 0x08,   13 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3, QMetaType::Int,    2,    2,
    QMetaType::Void, 0x80000000 | 3, QMetaType::Int, QMetaType::Int,    2,    2,    2,
    QMetaType::Void, 0x80000000 | 3, QMetaType::Int,    2,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::QObjectStar,    2,

       0        // eod
};

void QtSliderFactory::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<QtSliderFactory *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->d_func()->slotPropertyChanged((*reinterpret_cast< std::add_pointer_t<QtProperty*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2]))); break;
        case 1: _t->d_func()->slotRangeChanged((*reinterpret_cast< std::add_pointer_t<QtProperty*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[3]))); break;
        case 2: _t->d_func()->slotSingleStepChanged((*reinterpret_cast< std::add_pointer_t<QtProperty*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2]))); break;
        case 3: _t->d_func()->slotSetValue((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 4: _t->d_func()->slotEditorDestroyed((*reinterpret_cast< std::add_pointer_t<QObject*>>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject QtSliderFactory::staticMetaObject = { {
    QMetaObject::SuperData::link<QtAbstractEditorFactory<QtIntPropertyManager>::staticMetaObject>(),
    qt_meta_stringdata_QtSliderFactory.offsetsAndSize,
    qt_meta_data_QtSliderFactory,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_QtSliderFactory_t
, QtPrivate::TypeAndForceComplete<QtSliderFactory, std::true_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QtProperty *, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QtProperty *, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QtProperty *, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QObject *, std::false_type>


>,
    nullptr
} };


const QMetaObject *QtSliderFactory::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QtSliderFactory::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QtSliderFactory.stringdata0))
        return static_cast<void*>(this);
    return QtAbstractEditorFactory<QtIntPropertyManager>::qt_metacast(_clname);
}

int QtSliderFactory::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QtAbstractEditorFactory<QtIntPropertyManager>::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 5;
    }
    return _id;
}
struct qt_meta_stringdata_QtScrollBarFactory_t {
    const uint offsetsAndSize[16];
    char stringdata0[124];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_QtScrollBarFactory_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_QtScrollBarFactory_t qt_meta_stringdata_QtScrollBarFactory = {
    {
QT_MOC_LITERAL(0, 18), // "QtScrollBarFactory"
QT_MOC_LITERAL(19, 19), // "slotPropertyChanged"
QT_MOC_LITERAL(39, 0), // ""
QT_MOC_LITERAL(40, 11), // "QtProperty*"
QT_MOC_LITERAL(52, 16), // "slotRangeChanged"
QT_MOC_LITERAL(69, 21), // "slotSingleStepChanged"
QT_MOC_LITERAL(91, 12), // "slotSetValue"
QT_MOC_LITERAL(104, 19) // "slotEditorDestroyed"

    },
    "QtScrollBarFactory\0slotPropertyChanged\0"
    "\0QtProperty*\0slotRangeChanged\0"
    "slotSingleStepChanged\0slotSetValue\0"
    "slotEditorDestroyed"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QtScrollBarFactory[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    2,   44,    2, 0x08,    1 /* Private */,
       4,    3,   49,    2, 0x08,    4 /* Private */,
       5,    2,   56,    2, 0x08,    8 /* Private */,
       6,    1,   61,    2, 0x08,   11 /* Private */,
       7,    1,   64,    2, 0x08,   13 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3, QMetaType::Int,    2,    2,
    QMetaType::Void, 0x80000000 | 3, QMetaType::Int, QMetaType::Int,    2,    2,    2,
    QMetaType::Void, 0x80000000 | 3, QMetaType::Int,    2,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::QObjectStar,    2,

       0        // eod
};

void QtScrollBarFactory::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<QtScrollBarFactory *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->d_func()->slotPropertyChanged((*reinterpret_cast< std::add_pointer_t<QtProperty*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2]))); break;
        case 1: _t->d_func()->slotRangeChanged((*reinterpret_cast< std::add_pointer_t<QtProperty*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[3]))); break;
        case 2: _t->d_func()->slotSingleStepChanged((*reinterpret_cast< std::add_pointer_t<QtProperty*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2]))); break;
        case 3: _t->d_func()->slotSetValue((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 4: _t->d_func()->slotEditorDestroyed((*reinterpret_cast< std::add_pointer_t<QObject*>>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject QtScrollBarFactory::staticMetaObject = { {
    QMetaObject::SuperData::link<QtAbstractEditorFactory<QtIntPropertyManager>::staticMetaObject>(),
    qt_meta_stringdata_QtScrollBarFactory.offsetsAndSize,
    qt_meta_data_QtScrollBarFactory,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_QtScrollBarFactory_t
, QtPrivate::TypeAndForceComplete<QtScrollBarFactory, std::true_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QtProperty *, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QtProperty *, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QtProperty *, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QObject *, std::false_type>


>,
    nullptr
} };


const QMetaObject *QtScrollBarFactory::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QtScrollBarFactory::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QtScrollBarFactory.stringdata0))
        return static_cast<void*>(this);
    return QtAbstractEditorFactory<QtIntPropertyManager>::qt_metacast(_clname);
}

int QtScrollBarFactory::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QtAbstractEditorFactory<QtIntPropertyManager>::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 5;
    }
    return _id;
}
struct qt_meta_stringdata_QtCheckBoxFactory_t {
    const uint offsetsAndSize[12];
    char stringdata0[84];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_QtCheckBoxFactory_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_QtCheckBoxFactory_t qt_meta_stringdata_QtCheckBoxFactory = {
    {
QT_MOC_LITERAL(0, 17), // "QtCheckBoxFactory"
QT_MOC_LITERAL(18, 19), // "slotPropertyChanged"
QT_MOC_LITERAL(38, 0), // ""
QT_MOC_LITERAL(39, 11), // "QtProperty*"
QT_MOC_LITERAL(51, 12), // "slotSetValue"
QT_MOC_LITERAL(64, 19) // "slotEditorDestroyed"

    },
    "QtCheckBoxFactory\0slotPropertyChanged\0"
    "\0QtProperty*\0slotSetValue\0slotEditorDestroyed"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QtCheckBoxFactory[] = {

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
       1,    2,   32,    2, 0x08,    1 /* Private */,
       4,    1,   37,    2, 0x08,    4 /* Private */,
       5,    1,   40,    2, 0x08,    6 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3, QMetaType::Bool,    2,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::QObjectStar,    2,

       0        // eod
};

void QtCheckBoxFactory::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<QtCheckBoxFactory *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->d_func()->slotPropertyChanged((*reinterpret_cast< std::add_pointer_t<QtProperty*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[2]))); break;
        case 1: _t->d_func()->slotSetValue((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 2: _t->d_func()->slotEditorDestroyed((*reinterpret_cast< std::add_pointer_t<QObject*>>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject QtCheckBoxFactory::staticMetaObject = { {
    QMetaObject::SuperData::link<QtAbstractEditorFactory<QtBoolPropertyManager>::staticMetaObject>(),
    qt_meta_stringdata_QtCheckBoxFactory.offsetsAndSize,
    qt_meta_data_QtCheckBoxFactory,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_QtCheckBoxFactory_t
, QtPrivate::TypeAndForceComplete<QtCheckBoxFactory, std::true_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QtProperty *, std::false_type>, QtPrivate::TypeAndForceComplete<bool, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<bool, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QObject *, std::false_type>


>,
    nullptr
} };


const QMetaObject *QtCheckBoxFactory::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QtCheckBoxFactory::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QtCheckBoxFactory.stringdata0))
        return static_cast<void*>(this);
    return QtAbstractEditorFactory<QtBoolPropertyManager>::qt_metacast(_clname);
}

int QtCheckBoxFactory::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QtAbstractEditorFactory<QtBoolPropertyManager>::qt_metacall(_c, _id, _a);
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
struct qt_meta_stringdata_QtDoubleSpinBoxFactory_t {
    const uint offsetsAndSize[18];
    char stringdata0[148];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_QtDoubleSpinBoxFactory_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_QtDoubleSpinBoxFactory_t qt_meta_stringdata_QtDoubleSpinBoxFactory = {
    {
QT_MOC_LITERAL(0, 22), // "QtDoubleSpinBoxFactory"
QT_MOC_LITERAL(23, 19), // "slotPropertyChanged"
QT_MOC_LITERAL(43, 0), // ""
QT_MOC_LITERAL(44, 11), // "QtProperty*"
QT_MOC_LITERAL(56, 16), // "slotRangeChanged"
QT_MOC_LITERAL(73, 21), // "slotSingleStepChanged"
QT_MOC_LITERAL(95, 19), // "slotDecimalsChanged"
QT_MOC_LITERAL(115, 12), // "slotSetValue"
QT_MOC_LITERAL(128, 19) // "slotEditorDestroyed"

    },
    "QtDoubleSpinBoxFactory\0slotPropertyChanged\0"
    "\0QtProperty*\0slotRangeChanged\0"
    "slotSingleStepChanged\0slotDecimalsChanged\0"
    "slotSetValue\0slotEditorDestroyed"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QtDoubleSpinBoxFactory[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    2,   50,    2, 0x08,    1 /* Private */,
       4,    3,   55,    2, 0x08,    4 /* Private */,
       5,    2,   62,    2, 0x08,    8 /* Private */,
       6,    2,   67,    2, 0x08,   11 /* Private */,
       7,    1,   72,    2, 0x08,   14 /* Private */,
       8,    1,   75,    2, 0x08,   16 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3, QMetaType::Double,    2,    2,
    QMetaType::Void, 0x80000000 | 3, QMetaType::Double, QMetaType::Double,    2,    2,    2,
    QMetaType::Void, 0x80000000 | 3, QMetaType::Double,    2,    2,
    QMetaType::Void, 0x80000000 | 3, QMetaType::Int,    2,    2,
    QMetaType::Void, QMetaType::Double,    2,
    QMetaType::Void, QMetaType::QObjectStar,    2,

       0        // eod
};

void QtDoubleSpinBoxFactory::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<QtDoubleSpinBoxFactory *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->d_func()->slotPropertyChanged((*reinterpret_cast< std::add_pointer_t<QtProperty*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<double>>(_a[2]))); break;
        case 1: _t->d_func()->slotRangeChanged((*reinterpret_cast< std::add_pointer_t<QtProperty*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<double>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<double>>(_a[3]))); break;
        case 2: _t->d_func()->slotSingleStepChanged((*reinterpret_cast< std::add_pointer_t<QtProperty*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<double>>(_a[2]))); break;
        case 3: _t->d_func()->slotDecimalsChanged((*reinterpret_cast< std::add_pointer_t<QtProperty*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2]))); break;
        case 4: _t->d_func()->slotSetValue((*reinterpret_cast< std::add_pointer_t<double>>(_a[1]))); break;
        case 5: _t->d_func()->slotEditorDestroyed((*reinterpret_cast< std::add_pointer_t<QObject*>>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject QtDoubleSpinBoxFactory::staticMetaObject = { {
    QMetaObject::SuperData::link<QtAbstractEditorFactory<QtDoublePropertyManager>::staticMetaObject>(),
    qt_meta_stringdata_QtDoubleSpinBoxFactory.offsetsAndSize,
    qt_meta_data_QtDoubleSpinBoxFactory,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_QtDoubleSpinBoxFactory_t
, QtPrivate::TypeAndForceComplete<QtDoubleSpinBoxFactory, std::true_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QtProperty *, std::false_type>, QtPrivate::TypeAndForceComplete<double, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QtProperty *, std::false_type>, QtPrivate::TypeAndForceComplete<double, std::false_type>, QtPrivate::TypeAndForceComplete<double, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QtProperty *, std::false_type>, QtPrivate::TypeAndForceComplete<double, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QtProperty *, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<double, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QObject *, std::false_type>


>,
    nullptr
} };


const QMetaObject *QtDoubleSpinBoxFactory::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QtDoubleSpinBoxFactory::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QtDoubleSpinBoxFactory.stringdata0))
        return static_cast<void*>(this);
    return QtAbstractEditorFactory<QtDoublePropertyManager>::qt_metacast(_clname);
}

int QtDoubleSpinBoxFactory::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QtAbstractEditorFactory<QtDoublePropertyManager>::qt_metacall(_c, _id, _a);
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
struct qt_meta_stringdata_QtLineEditFactory_t {
    const uint offsetsAndSize[14];
    char stringdata0[102];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_QtLineEditFactory_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_QtLineEditFactory_t qt_meta_stringdata_QtLineEditFactory = {
    {
QT_MOC_LITERAL(0, 17), // "QtLineEditFactory"
QT_MOC_LITERAL(18, 19), // "slotPropertyChanged"
QT_MOC_LITERAL(38, 0), // ""
QT_MOC_LITERAL(39, 11), // "QtProperty*"
QT_MOC_LITERAL(51, 17), // "slotRegExpChanged"
QT_MOC_LITERAL(69, 12), // "slotSetValue"
QT_MOC_LITERAL(82, 19) // "slotEditorDestroyed"

    },
    "QtLineEditFactory\0slotPropertyChanged\0"
    "\0QtProperty*\0slotRegExpChanged\0"
    "slotSetValue\0slotEditorDestroyed"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QtLineEditFactory[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    2,   38,    2, 0x08,    1 /* Private */,
       4,    2,   43,    2, 0x08,    4 /* Private */,
       5,    0,   48,    2, 0x08,    7 /* Private */,
       6,    1,   49,    2, 0x08,    8 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3, QMetaType::QString,    2,    2,
    QMetaType::Void, 0x80000000 | 3, QMetaType::QRegularExpression,    2,    2,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QObjectStar,    2,

       0        // eod
};

void QtLineEditFactory::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<QtLineEditFactory *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->d_func()->slotPropertyChanged((*reinterpret_cast< std::add_pointer_t<QtProperty*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        case 1: _t->d_func()->slotRegExpChanged((*reinterpret_cast< std::add_pointer_t<QtProperty*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QRegularExpression>>(_a[2]))); break;
        case 2: _t->d_func()->slotSetValue(); break;
        case 3: _t->d_func()->slotEditorDestroyed((*reinterpret_cast< std::add_pointer_t<QObject*>>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject QtLineEditFactory::staticMetaObject = { {
    QMetaObject::SuperData::link<QtAbstractEditorFactory<QtStringPropertyManager>::staticMetaObject>(),
    qt_meta_stringdata_QtLineEditFactory.offsetsAndSize,
    qt_meta_data_QtLineEditFactory,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_QtLineEditFactory_t
, QtPrivate::TypeAndForceComplete<QtLineEditFactory, std::true_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QtProperty *, std::false_type>, QtPrivate::TypeAndForceComplete<const QString &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QtProperty *, std::false_type>, QtPrivate::TypeAndForceComplete<const QRegularExpression &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QObject *, std::false_type>


>,
    nullptr
} };


const QMetaObject *QtLineEditFactory::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QtLineEditFactory::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QtLineEditFactory.stringdata0))
        return static_cast<void*>(this);
    return QtAbstractEditorFactory<QtStringPropertyManager>::qt_metacast(_clname);
}

int QtLineEditFactory::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QtAbstractEditorFactory<QtStringPropertyManager>::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 4;
    }
    return _id;
}
struct qt_meta_stringdata_QtDateEditFactory_t {
    const uint offsetsAndSize[14];
    char stringdata0[101];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_QtDateEditFactory_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_QtDateEditFactory_t qt_meta_stringdata_QtDateEditFactory = {
    {
QT_MOC_LITERAL(0, 17), // "QtDateEditFactory"
QT_MOC_LITERAL(18, 19), // "slotPropertyChanged"
QT_MOC_LITERAL(38, 0), // ""
QT_MOC_LITERAL(39, 11), // "QtProperty*"
QT_MOC_LITERAL(51, 16), // "slotRangeChanged"
QT_MOC_LITERAL(68, 12), // "slotSetValue"
QT_MOC_LITERAL(81, 19) // "slotEditorDestroyed"

    },
    "QtDateEditFactory\0slotPropertyChanged\0"
    "\0QtProperty*\0slotRangeChanged\0"
    "slotSetValue\0slotEditorDestroyed"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QtDateEditFactory[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    2,   38,    2, 0x08,    1 /* Private */,
       4,    3,   43,    2, 0x08,    4 /* Private */,
       5,    1,   50,    2, 0x08,    8 /* Private */,
       6,    1,   53,    2, 0x08,   10 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3, QMetaType::QDate,    2,    2,
    QMetaType::Void, 0x80000000 | 3, QMetaType::QDate, QMetaType::QDate,    2,    2,    2,
    QMetaType::Void, QMetaType::QDate,    2,
    QMetaType::Void, QMetaType::QObjectStar,    2,

       0        // eod
};

void QtDateEditFactory::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<QtDateEditFactory *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->d_func()->slotPropertyChanged((*reinterpret_cast< std::add_pointer_t<QtProperty*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QDate>>(_a[2]))); break;
        case 1: _t->d_func()->slotRangeChanged((*reinterpret_cast< std::add_pointer_t<QtProperty*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QDate>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QDate>>(_a[3]))); break;
        case 2: _t->d_func()->slotSetValue((*reinterpret_cast< std::add_pointer_t<QDate>>(_a[1]))); break;
        case 3: _t->d_func()->slotEditorDestroyed((*reinterpret_cast< std::add_pointer_t<QObject*>>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject QtDateEditFactory::staticMetaObject = { {
    QMetaObject::SuperData::link<QtAbstractEditorFactory<QtDatePropertyManager>::staticMetaObject>(),
    qt_meta_stringdata_QtDateEditFactory.offsetsAndSize,
    qt_meta_data_QtDateEditFactory,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_QtDateEditFactory_t
, QtPrivate::TypeAndForceComplete<QtDateEditFactory, std::true_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QtProperty *, std::false_type>, QtPrivate::TypeAndForceComplete<const QDate &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QtProperty *, std::false_type>, QtPrivate::TypeAndForceComplete<const QDate &, std::false_type>, QtPrivate::TypeAndForceComplete<const QDate &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QDate &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QObject *, std::false_type>


>,
    nullptr
} };


const QMetaObject *QtDateEditFactory::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QtDateEditFactory::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QtDateEditFactory.stringdata0))
        return static_cast<void*>(this);
    return QtAbstractEditorFactory<QtDatePropertyManager>::qt_metacast(_clname);
}

int QtDateEditFactory::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QtAbstractEditorFactory<QtDatePropertyManager>::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 4;
    }
    return _id;
}
struct qt_meta_stringdata_QtTimeEditFactory_t {
    const uint offsetsAndSize[12];
    char stringdata0[84];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_QtTimeEditFactory_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_QtTimeEditFactory_t qt_meta_stringdata_QtTimeEditFactory = {
    {
QT_MOC_LITERAL(0, 17), // "QtTimeEditFactory"
QT_MOC_LITERAL(18, 19), // "slotPropertyChanged"
QT_MOC_LITERAL(38, 0), // ""
QT_MOC_LITERAL(39, 11), // "QtProperty*"
QT_MOC_LITERAL(51, 12), // "slotSetValue"
QT_MOC_LITERAL(64, 19) // "slotEditorDestroyed"

    },
    "QtTimeEditFactory\0slotPropertyChanged\0"
    "\0QtProperty*\0slotSetValue\0slotEditorDestroyed"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QtTimeEditFactory[] = {

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
       1,    2,   32,    2, 0x08,    1 /* Private */,
       4,    1,   37,    2, 0x08,    4 /* Private */,
       5,    1,   40,    2, 0x08,    6 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3, QMetaType::QTime,    2,    2,
    QMetaType::Void, QMetaType::QTime,    2,
    QMetaType::Void, QMetaType::QObjectStar,    2,

       0        // eod
};

void QtTimeEditFactory::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<QtTimeEditFactory *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->d_func()->slotPropertyChanged((*reinterpret_cast< std::add_pointer_t<QtProperty*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QTime>>(_a[2]))); break;
        case 1: _t->d_func()->slotSetValue((*reinterpret_cast< std::add_pointer_t<QTime>>(_a[1]))); break;
        case 2: _t->d_func()->slotEditorDestroyed((*reinterpret_cast< std::add_pointer_t<QObject*>>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject QtTimeEditFactory::staticMetaObject = { {
    QMetaObject::SuperData::link<QtAbstractEditorFactory<QtTimePropertyManager>::staticMetaObject>(),
    qt_meta_stringdata_QtTimeEditFactory.offsetsAndSize,
    qt_meta_data_QtTimeEditFactory,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_QtTimeEditFactory_t
, QtPrivate::TypeAndForceComplete<QtTimeEditFactory, std::true_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QtProperty *, std::false_type>, QtPrivate::TypeAndForceComplete<const QTime &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QTime &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QObject *, std::false_type>


>,
    nullptr
} };


const QMetaObject *QtTimeEditFactory::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QtTimeEditFactory::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QtTimeEditFactory.stringdata0))
        return static_cast<void*>(this);
    return QtAbstractEditorFactory<QtTimePropertyManager>::qt_metacast(_clname);
}

int QtTimeEditFactory::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QtAbstractEditorFactory<QtTimePropertyManager>::qt_metacall(_c, _id, _a);
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
struct qt_meta_stringdata_QtDateTimeEditFactory_t {
    const uint offsetsAndSize[12];
    char stringdata0[88];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_QtDateTimeEditFactory_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_QtDateTimeEditFactory_t qt_meta_stringdata_QtDateTimeEditFactory = {
    {
QT_MOC_LITERAL(0, 21), // "QtDateTimeEditFactory"
QT_MOC_LITERAL(22, 19), // "slotPropertyChanged"
QT_MOC_LITERAL(42, 0), // ""
QT_MOC_LITERAL(43, 11), // "QtProperty*"
QT_MOC_LITERAL(55, 12), // "slotSetValue"
QT_MOC_LITERAL(68, 19) // "slotEditorDestroyed"

    },
    "QtDateTimeEditFactory\0slotPropertyChanged\0"
    "\0QtProperty*\0slotSetValue\0slotEditorDestroyed"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QtDateTimeEditFactory[] = {

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
       1,    2,   32,    2, 0x08,    1 /* Private */,
       4,    1,   37,    2, 0x08,    4 /* Private */,
       5,    1,   40,    2, 0x08,    6 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3, QMetaType::QDateTime,    2,    2,
    QMetaType::Void, QMetaType::QDateTime,    2,
    QMetaType::Void, QMetaType::QObjectStar,    2,

       0        // eod
};

void QtDateTimeEditFactory::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<QtDateTimeEditFactory *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->d_func()->slotPropertyChanged((*reinterpret_cast< std::add_pointer_t<QtProperty*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QDateTime>>(_a[2]))); break;
        case 1: _t->d_func()->slotSetValue((*reinterpret_cast< std::add_pointer_t<QDateTime>>(_a[1]))); break;
        case 2: _t->d_func()->slotEditorDestroyed((*reinterpret_cast< std::add_pointer_t<QObject*>>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject QtDateTimeEditFactory::staticMetaObject = { {
    QMetaObject::SuperData::link<QtAbstractEditorFactory<QtDateTimePropertyManager>::staticMetaObject>(),
    qt_meta_stringdata_QtDateTimeEditFactory.offsetsAndSize,
    qt_meta_data_QtDateTimeEditFactory,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_QtDateTimeEditFactory_t
, QtPrivate::TypeAndForceComplete<QtDateTimeEditFactory, std::true_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QtProperty *, std::false_type>, QtPrivate::TypeAndForceComplete<const QDateTime &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QDateTime &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QObject *, std::false_type>


>,
    nullptr
} };


const QMetaObject *QtDateTimeEditFactory::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QtDateTimeEditFactory::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QtDateTimeEditFactory.stringdata0))
        return static_cast<void*>(this);
    return QtAbstractEditorFactory<QtDateTimePropertyManager>::qt_metacast(_clname);
}

int QtDateTimeEditFactory::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QtAbstractEditorFactory<QtDateTimePropertyManager>::qt_metacall(_c, _id, _a);
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
struct qt_meta_stringdata_QtKeySequenceEditorFactory_t {
    const uint offsetsAndSize[14];
    char stringdata0[106];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_QtKeySequenceEditorFactory_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_QtKeySequenceEditorFactory_t qt_meta_stringdata_QtKeySequenceEditorFactory = {
    {
QT_MOC_LITERAL(0, 26), // "QtKeySequenceEditorFactory"
QT_MOC_LITERAL(27, 19), // "slotPropertyChanged"
QT_MOC_LITERAL(47, 0), // ""
QT_MOC_LITERAL(48, 11), // "QtProperty*"
QT_MOC_LITERAL(60, 12), // "QKeySequence"
QT_MOC_LITERAL(73, 12), // "slotSetValue"
QT_MOC_LITERAL(86, 19) // "slotEditorDestroyed"

    },
    "QtKeySequenceEditorFactory\0"
    "slotPropertyChanged\0\0QtProperty*\0"
    "QKeySequence\0slotSetValue\0slotEditorDestroyed"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QtKeySequenceEditorFactory[] = {

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
       1,    2,   32,    2, 0x08,    1 /* Private */,
       5,    1,   37,    2, 0x08,    4 /* Private */,
       6,    1,   40,    2, 0x08,    6 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 4,    2,    2,
    QMetaType::Void, 0x80000000 | 4,    2,
    QMetaType::Void, QMetaType::QObjectStar,    2,

       0        // eod
};

void QtKeySequenceEditorFactory::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<QtKeySequenceEditorFactory *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->d_func()->slotPropertyChanged((*reinterpret_cast< std::add_pointer_t<QtProperty*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QKeySequence>>(_a[2]))); break;
        case 1: _t->d_func()->slotSetValue((*reinterpret_cast< std::add_pointer_t<QKeySequence>>(_a[1]))); break;
        case 2: _t->d_func()->slotEditorDestroyed((*reinterpret_cast< std::add_pointer_t<QObject*>>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject QtKeySequenceEditorFactory::staticMetaObject = { {
    QMetaObject::SuperData::link<QtAbstractEditorFactory<QtKeySequencePropertyManager>::staticMetaObject>(),
    qt_meta_stringdata_QtKeySequenceEditorFactory.offsetsAndSize,
    qt_meta_data_QtKeySequenceEditorFactory,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_QtKeySequenceEditorFactory_t
, QtPrivate::TypeAndForceComplete<QtKeySequenceEditorFactory, std::true_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QtProperty *, std::false_type>, QtPrivate::TypeAndForceComplete<const QKeySequence &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QKeySequence &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QObject *, std::false_type>


>,
    nullptr
} };


const QMetaObject *QtKeySequenceEditorFactory::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QtKeySequenceEditorFactory::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QtKeySequenceEditorFactory.stringdata0))
        return static_cast<void*>(this);
    return QtAbstractEditorFactory<QtKeySequencePropertyManager>::qt_metacast(_clname);
}

int QtKeySequenceEditorFactory::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QtAbstractEditorFactory<QtKeySequencePropertyManager>::qt_metacall(_c, _id, _a);
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
struct qt_meta_stringdata_QtCharEditorFactory_t {
    const uint offsetsAndSize[12];
    char stringdata0[86];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_QtCharEditorFactory_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_QtCharEditorFactory_t qt_meta_stringdata_QtCharEditorFactory = {
    {
QT_MOC_LITERAL(0, 19), // "QtCharEditorFactory"
QT_MOC_LITERAL(20, 19), // "slotPropertyChanged"
QT_MOC_LITERAL(40, 0), // ""
QT_MOC_LITERAL(41, 11), // "QtProperty*"
QT_MOC_LITERAL(53, 12), // "slotSetValue"
QT_MOC_LITERAL(66, 19) // "slotEditorDestroyed"

    },
    "QtCharEditorFactory\0slotPropertyChanged\0"
    "\0QtProperty*\0slotSetValue\0slotEditorDestroyed"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QtCharEditorFactory[] = {

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
       1,    2,   32,    2, 0x08,    1 /* Private */,
       4,    1,   37,    2, 0x08,    4 /* Private */,
       5,    1,   40,    2, 0x08,    6 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3, QMetaType::QChar,    2,    2,
    QMetaType::Void, QMetaType::QChar,    2,
    QMetaType::Void, QMetaType::QObjectStar,    2,

       0        // eod
};

void QtCharEditorFactory::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<QtCharEditorFactory *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->d_func()->slotPropertyChanged((*reinterpret_cast< std::add_pointer_t<QtProperty*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QChar>>(_a[2]))); break;
        case 1: _t->d_func()->slotSetValue((*reinterpret_cast< std::add_pointer_t<QChar>>(_a[1]))); break;
        case 2: _t->d_func()->slotEditorDestroyed((*reinterpret_cast< std::add_pointer_t<QObject*>>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject QtCharEditorFactory::staticMetaObject = { {
    QMetaObject::SuperData::link<QtAbstractEditorFactory<QtCharPropertyManager>::staticMetaObject>(),
    qt_meta_stringdata_QtCharEditorFactory.offsetsAndSize,
    qt_meta_data_QtCharEditorFactory,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_QtCharEditorFactory_t
, QtPrivate::TypeAndForceComplete<QtCharEditorFactory, std::true_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QtProperty *, std::false_type>, QtPrivate::TypeAndForceComplete<const QChar &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QChar &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QObject *, std::false_type>


>,
    nullptr
} };


const QMetaObject *QtCharEditorFactory::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QtCharEditorFactory::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QtCharEditorFactory.stringdata0))
        return static_cast<void*>(this);
    return QtAbstractEditorFactory<QtCharPropertyManager>::qt_metacast(_clname);
}

int QtCharEditorFactory::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QtAbstractEditorFactory<QtCharPropertyManager>::qt_metacall(_c, _id, _a);
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
struct qt_meta_stringdata_QtEnumEditorFactory_t {
    const uint offsetsAndSize[18];
    char stringdata0[144];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_QtEnumEditorFactory_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_QtEnumEditorFactory_t qt_meta_stringdata_QtEnumEditorFactory = {
    {
QT_MOC_LITERAL(0, 19), // "QtEnumEditorFactory"
QT_MOC_LITERAL(20, 19), // "slotPropertyChanged"
QT_MOC_LITERAL(40, 0), // ""
QT_MOC_LITERAL(41, 11), // "QtProperty*"
QT_MOC_LITERAL(53, 20), // "slotEnumNamesChanged"
QT_MOC_LITERAL(74, 20), // "slotEnumIconsChanged"
QT_MOC_LITERAL(95, 15), // "QMap<int,QIcon>"
QT_MOC_LITERAL(111, 12), // "slotSetValue"
QT_MOC_LITERAL(124, 19) // "slotEditorDestroyed"

    },
    "QtEnumEditorFactory\0slotPropertyChanged\0"
    "\0QtProperty*\0slotEnumNamesChanged\0"
    "slotEnumIconsChanged\0QMap<int,QIcon>\0"
    "slotSetValue\0slotEditorDestroyed"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QtEnumEditorFactory[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    2,   44,    2, 0x08,    1 /* Private */,
       4,    2,   49,    2, 0x08,    4 /* Private */,
       5,    2,   54,    2, 0x08,    7 /* Private */,
       7,    1,   59,    2, 0x08,   10 /* Private */,
       8,    1,   62,    2, 0x08,   12 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3, QMetaType::Int,    2,    2,
    QMetaType::Void, 0x80000000 | 3, QMetaType::QStringList,    2,    2,
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 6,    2,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::QObjectStar,    2,

       0        // eod
};

void QtEnumEditorFactory::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<QtEnumEditorFactory *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->d_func()->slotPropertyChanged((*reinterpret_cast< std::add_pointer_t<QtProperty*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2]))); break;
        case 1: _t->d_func()->slotEnumNamesChanged((*reinterpret_cast< std::add_pointer_t<QtProperty*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QStringList>>(_a[2]))); break;
        case 2: _t->d_func()->slotEnumIconsChanged((*reinterpret_cast< std::add_pointer_t<QtProperty*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QMap<int,QIcon>>>(_a[2]))); break;
        case 3: _t->d_func()->slotSetValue((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 4: _t->d_func()->slotEditorDestroyed((*reinterpret_cast< std::add_pointer_t<QObject*>>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject QtEnumEditorFactory::staticMetaObject = { {
    QMetaObject::SuperData::link<QtAbstractEditorFactory<QtEnumPropertyManager>::staticMetaObject>(),
    qt_meta_stringdata_QtEnumEditorFactory.offsetsAndSize,
    qt_meta_data_QtEnumEditorFactory,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_QtEnumEditorFactory_t
, QtPrivate::TypeAndForceComplete<QtEnumEditorFactory, std::true_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QtProperty *, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QtProperty *, std::false_type>, QtPrivate::TypeAndForceComplete<const QStringList &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QtProperty *, std::false_type>, QtPrivate::TypeAndForceComplete<const QMap<int,QIcon> &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QObject *, std::false_type>


>,
    nullptr
} };


const QMetaObject *QtEnumEditorFactory::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QtEnumEditorFactory::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QtEnumEditorFactory.stringdata0))
        return static_cast<void*>(this);
    return QtAbstractEditorFactory<QtEnumPropertyManager>::qt_metacast(_clname);
}

int QtEnumEditorFactory::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QtAbstractEditorFactory<QtEnumPropertyManager>::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 5;
    }
    return _id;
}
struct qt_meta_stringdata_QtCursorEditorFactory_t {
    const uint offsetsAndSize[12];
    char stringdata0[91];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_QtCursorEditorFactory_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_QtCursorEditorFactory_t qt_meta_stringdata_QtCursorEditorFactory = {
    {
QT_MOC_LITERAL(0, 21), // "QtCursorEditorFactory"
QT_MOC_LITERAL(22, 19), // "slotPropertyChanged"
QT_MOC_LITERAL(42, 0), // ""
QT_MOC_LITERAL(43, 11), // "QtProperty*"
QT_MOC_LITERAL(55, 15), // "slotEnumChanged"
QT_MOC_LITERAL(71, 19) // "slotEditorDestroyed"

    },
    "QtCursorEditorFactory\0slotPropertyChanged\0"
    "\0QtProperty*\0slotEnumChanged\0"
    "slotEditorDestroyed"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QtCursorEditorFactory[] = {

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
       1,    2,   32,    2, 0x08,    1 /* Private */,
       4,    2,   37,    2, 0x08,    4 /* Private */,
       5,    1,   42,    2, 0x08,    7 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3, QMetaType::QCursor,    2,    2,
    QMetaType::Void, 0x80000000 | 3, QMetaType::Int,    2,    2,
    QMetaType::Void, QMetaType::QObjectStar,    2,

       0        // eod
};

void QtCursorEditorFactory::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<QtCursorEditorFactory *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->d_func()->slotPropertyChanged((*reinterpret_cast< std::add_pointer_t<QtProperty*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QCursor>>(_a[2]))); break;
        case 1: _t->d_func()->slotEnumChanged((*reinterpret_cast< std::add_pointer_t<QtProperty*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2]))); break;
        case 2: _t->d_func()->slotEditorDestroyed((*reinterpret_cast< std::add_pointer_t<QObject*>>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject QtCursorEditorFactory::staticMetaObject = { {
    QMetaObject::SuperData::link<QtAbstractEditorFactory<QtCursorPropertyManager>::staticMetaObject>(),
    qt_meta_stringdata_QtCursorEditorFactory.offsetsAndSize,
    qt_meta_data_QtCursorEditorFactory,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_QtCursorEditorFactory_t
, QtPrivate::TypeAndForceComplete<QtCursorEditorFactory, std::true_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QtProperty *, std::false_type>, QtPrivate::TypeAndForceComplete<const QCursor &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QtProperty *, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QObject *, std::false_type>


>,
    nullptr
} };


const QMetaObject *QtCursorEditorFactory::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QtCursorEditorFactory::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QtCursorEditorFactory.stringdata0))
        return static_cast<void*>(this);
    return QtAbstractEditorFactory<QtCursorPropertyManager>::qt_metacast(_clname);
}

int QtCursorEditorFactory::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QtAbstractEditorFactory<QtCursorPropertyManager>::qt_metacall(_c, _id, _a);
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
struct qt_meta_stringdata_QtColorEditorFactory_t {
    const uint offsetsAndSize[12];
    char stringdata0[87];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_QtColorEditorFactory_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_QtColorEditorFactory_t qt_meta_stringdata_QtColorEditorFactory = {
    {
QT_MOC_LITERAL(0, 20), // "QtColorEditorFactory"
QT_MOC_LITERAL(21, 19), // "slotPropertyChanged"
QT_MOC_LITERAL(41, 0), // ""
QT_MOC_LITERAL(42, 11), // "QtProperty*"
QT_MOC_LITERAL(54, 19), // "slotEditorDestroyed"
QT_MOC_LITERAL(74, 12) // "slotSetValue"

    },
    "QtColorEditorFactory\0slotPropertyChanged\0"
    "\0QtProperty*\0slotEditorDestroyed\0"
    "slotSetValue"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QtColorEditorFactory[] = {

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
       1,    2,   32,    2, 0x08,    1 /* Private */,
       4,    1,   37,    2, 0x08,    4 /* Private */,
       5,    1,   40,    2, 0x08,    6 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3, QMetaType::QColor,    2,    2,
    QMetaType::Void, QMetaType::QObjectStar,    2,
    QMetaType::Void, QMetaType::QColor,    2,

       0        // eod
};

void QtColorEditorFactory::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<QtColorEditorFactory *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->d_func()->slotPropertyChanged((*reinterpret_cast< std::add_pointer_t<QtProperty*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QColor>>(_a[2]))); break;
        case 1: _t->d_func()->slotEditorDestroyed((*reinterpret_cast< std::add_pointer_t<QObject*>>(_a[1]))); break;
        case 2: _t->d_func()->slotSetValue((*reinterpret_cast< std::add_pointer_t<QColor>>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject QtColorEditorFactory::staticMetaObject = { {
    QMetaObject::SuperData::link<QtAbstractEditorFactory<QtColorPropertyManager>::staticMetaObject>(),
    qt_meta_stringdata_QtColorEditorFactory.offsetsAndSize,
    qt_meta_data_QtColorEditorFactory,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_QtColorEditorFactory_t
, QtPrivate::TypeAndForceComplete<QtColorEditorFactory, std::true_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QtProperty *, std::false_type>, QtPrivate::TypeAndForceComplete<const QColor &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QObject *, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QColor &, std::false_type>


>,
    nullptr
} };


const QMetaObject *QtColorEditorFactory::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QtColorEditorFactory::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QtColorEditorFactory.stringdata0))
        return static_cast<void*>(this);
    return QtAbstractEditorFactory<QtColorPropertyManager>::qt_metacast(_clname);
}

int QtColorEditorFactory::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QtAbstractEditorFactory<QtColorPropertyManager>::qt_metacall(_c, _id, _a);
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
struct qt_meta_stringdata_QtFontEditorFactory_t {
    const uint offsetsAndSize[12];
    char stringdata0[86];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_QtFontEditorFactory_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_QtFontEditorFactory_t qt_meta_stringdata_QtFontEditorFactory = {
    {
QT_MOC_LITERAL(0, 19), // "QtFontEditorFactory"
QT_MOC_LITERAL(20, 19), // "slotPropertyChanged"
QT_MOC_LITERAL(40, 0), // ""
QT_MOC_LITERAL(41, 11), // "QtProperty*"
QT_MOC_LITERAL(53, 19), // "slotEditorDestroyed"
QT_MOC_LITERAL(73, 12) // "slotSetValue"

    },
    "QtFontEditorFactory\0slotPropertyChanged\0"
    "\0QtProperty*\0slotEditorDestroyed\0"
    "slotSetValue"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QtFontEditorFactory[] = {

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
       1,    2,   32,    2, 0x08,    1 /* Private */,
       4,    1,   37,    2, 0x08,    4 /* Private */,
       5,    1,   40,    2, 0x08,    6 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3, QMetaType::QFont,    2,    2,
    QMetaType::Void, QMetaType::QObjectStar,    2,
    QMetaType::Void, QMetaType::QFont,    2,

       0        // eod
};

void QtFontEditorFactory::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<QtFontEditorFactory *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->d_func()->slotPropertyChanged((*reinterpret_cast< std::add_pointer_t<QtProperty*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QFont>>(_a[2]))); break;
        case 1: _t->d_func()->slotEditorDestroyed((*reinterpret_cast< std::add_pointer_t<QObject*>>(_a[1]))); break;
        case 2: _t->d_func()->slotSetValue((*reinterpret_cast< std::add_pointer_t<QFont>>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject QtFontEditorFactory::staticMetaObject = { {
    QMetaObject::SuperData::link<QtAbstractEditorFactory<QtFontPropertyManager>::staticMetaObject>(),
    qt_meta_stringdata_QtFontEditorFactory.offsetsAndSize,
    qt_meta_data_QtFontEditorFactory,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_QtFontEditorFactory_t
, QtPrivate::TypeAndForceComplete<QtFontEditorFactory, std::true_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QtProperty *, std::false_type>, QtPrivate::TypeAndForceComplete<const QFont &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QObject *, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QFont &, std::false_type>


>,
    nullptr
} };


const QMetaObject *QtFontEditorFactory::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QtFontEditorFactory::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QtFontEditorFactory.stringdata0))
        return static_cast<void*>(this);
    return QtAbstractEditorFactory<QtFontPropertyManager>::qt_metacast(_clname);
}

int QtFontEditorFactory::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QtAbstractEditorFactory<QtFontPropertyManager>::qt_metacall(_c, _id, _a);
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
