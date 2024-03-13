/****************************************************************************
** Meta object code from reading C++ file 'ConsoleView.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.2.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../Src/Libs/SimulatedNao/Views/ConsoleView.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ConsoleView.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.2.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ConsoleWidget_t {
    const uint offsetsAndSize[20];
    char stringdata0[102];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_ConsoleWidget_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_ConsoleWidget_t qt_meta_stringdata_ConsoleWidget = {
    {
QT_MOC_LITERAL(0, 13), // "ConsoleWidget"
QT_MOC_LITERAL(14, 14), // "pasteAvailable"
QT_MOC_LITERAL(29, 0), // ""
QT_MOC_LITERAL(30, 9), // "available"
QT_MOC_LITERAL(40, 13), // "copyAvailable"
QT_MOC_LITERAL(54, 13), // "redoAvailable"
QT_MOC_LITERAL(68, 13), // "undoAvailable"
QT_MOC_LITERAL(82, 3), // "cut"
QT_MOC_LITERAL(86, 4), // "copy"
QT_MOC_LITERAL(91, 10) // "deleteText"

    },
    "ConsoleWidget\0pasteAvailable\0\0available\0"
    "copyAvailable\0redoAvailable\0undoAvailable\0"
    "cut\0copy\0deleteText"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ConsoleWidget[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   56,    2, 0x06,    1 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       4,    1,   59,    2, 0x08,    3 /* Private */,
       5,    1,   62,    2, 0x08,    5 /* Private */,
       6,    1,   65,    2, 0x08,    7 /* Private */,
       7,    0,   68,    2, 0x08,    9 /* Private */,
       8,    0,   69,    2, 0x08,   10 /* Private */,
       9,    0,   70,    2, 0x08,   11 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool,    3,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void ConsoleWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ConsoleWidget *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->pasteAvailable((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 1: _t->copyAvailable((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 2: _t->redoAvailable((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 3: _t->undoAvailable((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 4: _t->cut(); break;
        case 5: _t->copy(); break;
        case 6: _t->deleteText(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ConsoleWidget::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ConsoleWidget::pasteAvailable)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject ConsoleWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<QTextEdit::staticMetaObject>(),
    qt_meta_stringdata_ConsoleWidget.offsetsAndSize,
    qt_meta_data_ConsoleWidget,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_ConsoleWidget_t
, QtPrivate::TypeAndForceComplete<ConsoleWidget, std::true_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<bool, std::false_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<bool, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<bool, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<bool, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>


>,
    nullptr
} };


const QMetaObject *ConsoleWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ConsoleWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ConsoleWidget.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "SimRobot::Widget"))
        return static_cast< SimRobot::Widget*>(this);
    return QTextEdit::qt_metacast(_clname);
}

int ConsoleWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QTextEdit::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void ConsoleWidget::pasteAvailable(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
