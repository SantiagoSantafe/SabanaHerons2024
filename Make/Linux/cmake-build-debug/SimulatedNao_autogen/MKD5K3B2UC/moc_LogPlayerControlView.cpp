/****************************************************************************
** Meta object code from reading C++ file 'LogPlayerControlView.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.2.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../Src/Libs/SimulatedNao/Views/LogPlayerControlView.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'LogPlayerControlView.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.2.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_LogPlayerFrameInputField_t {
    const uint offsetsAndSize[8];
    char stringdata0[47];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_LogPlayerFrameInputField_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_LogPlayerFrameInputField_t qt_meta_stringdata_LogPlayerFrameInputField = {
    {
QT_MOC_LITERAL(0, 24), // "LogPlayerFrameInputField"
QT_MOC_LITERAL(25, 11), // "focusGained"
QT_MOC_LITERAL(37, 0), // ""
QT_MOC_LITERAL(38, 8) // "hasFocus"

    },
    "LogPlayerFrameInputField\0focusGained\0"
    "\0hasFocus"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_LogPlayerFrameInputField[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   20,    2, 0x06,    1 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool,    3,

       0        // eod
};

void LogPlayerFrameInputField::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<LogPlayerFrameInputField *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->focusGained((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (LogPlayerFrameInputField::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&LogPlayerFrameInputField::focusGained)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject LogPlayerFrameInputField::staticMetaObject = { {
    QMetaObject::SuperData::link<QLineEdit::staticMetaObject>(),
    qt_meta_stringdata_LogPlayerFrameInputField.offsetsAndSize,
    qt_meta_data_LogPlayerFrameInputField,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_LogPlayerFrameInputField_t
, QtPrivate::TypeAndForceComplete<LogPlayerFrameInputField, std::true_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<bool, std::false_type>



>,
    nullptr
} };


const QMetaObject *LogPlayerFrameInputField::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *LogPlayerFrameInputField::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_LogPlayerFrameInputField.stringdata0))
        return static_cast<void*>(this);
    return QLineEdit::qt_metacast(_clname);
}

int LogPlayerFrameInputField::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QLineEdit::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void LogPlayerFrameInputField::focusGained(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
struct qt_meta_stringdata_LogPlayerControlWidget_t {
    const uint offsetsAndSize[2];
    char stringdata0[23];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_LogPlayerControlWidget_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_LogPlayerControlWidget_t qt_meta_stringdata_LogPlayerControlWidget = {
    {
QT_MOC_LITERAL(0, 22) // "LogPlayerControlWidget"

    },
    "LogPlayerControlWidget"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_LogPlayerControlWidget[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void LogPlayerControlWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

const QMetaObject LogPlayerControlWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_LogPlayerControlWidget.offsetsAndSize,
    qt_meta_data_LogPlayerControlWidget,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_LogPlayerControlWidget_t
, QtPrivate::TypeAndForceComplete<LogPlayerControlWidget, std::true_type>



>,
    nullptr
} };


const QMetaObject *LogPlayerControlWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *LogPlayerControlWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_LogPlayerControlWidget.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "SimRobot::Widget"))
        return static_cast< SimRobot::Widget*>(this);
    return QWidget::qt_metacast(_clname);
}

int LogPlayerControlWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
