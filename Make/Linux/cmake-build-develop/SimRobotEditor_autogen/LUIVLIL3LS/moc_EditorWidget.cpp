/****************************************************************************
** Meta object code from reading C++ file 'EditorWidget.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.2.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../Util/SimRobot/Src/SimRobotEditor/EditorWidget.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'EditorWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.2.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_EditorWidget_t {
    const uint offsetsAndSize[38];
    char stringdata0[218];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_EditorWidget_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_EditorWidget_t qt_meta_stringdata_EditorWidget = {
    {
QT_MOC_LITERAL(0, 12), // "EditorWidget"
QT_MOC_LITERAL(13, 14), // "pasteAvailable"
QT_MOC_LITERAL(28, 0), // ""
QT_MOC_LITERAL(29, 9), // "available"
QT_MOC_LITERAL(39, 14), // "updateEditMenu"
QT_MOC_LITERAL(54, 13), // "copyAvailable"
QT_MOC_LITERAL(68, 13), // "redoAvailable"
QT_MOC_LITERAL(82, 13), // "undoAvailable"
QT_MOC_LITERAL(96, 4), // "save"
QT_MOC_LITERAL(101, 3), // "cut"
QT_MOC_LITERAL(105, 4), // "copy"
QT_MOC_LITERAL(110, 10), // "deleteText"
QT_MOC_LITERAL(121, 18), // "openFindAndReplace"
QT_MOC_LITERAL(140, 14), // "findAndReplace"
QT_MOC_LITERAL(155, 6), // "action"
QT_MOC_LITERAL(162, 12), // "openSettings"
QT_MOC_LITERAL(175, 24), // "updateSettingsFromDialog"
QT_MOC_LITERAL(200, 8), // "openFile"
QT_MOC_LITERAL(209, 8) // "fileName"

    },
    "EditorWidget\0pasteAvailable\0\0available\0"
    "updateEditMenu\0copyAvailable\0redoAvailable\0"
    "undoAvailable\0save\0cut\0copy\0deleteText\0"
    "openFindAndReplace\0findAndReplace\0"
    "action\0openSettings\0updateSettingsFromDialog\0"
    "openFile\0fileName"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_EditorWidget[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   98,    2, 0x06,    1 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       4,    0,  101,    2, 0x08,    3 /* Private */,
       5,    1,  102,    2, 0x08,    4 /* Private */,
       6,    1,  105,    2, 0x08,    6 /* Private */,
       7,    1,  108,    2, 0x08,    8 /* Private */,
       8,    0,  111,    2, 0x08,   10 /* Private */,
       9,    0,  112,    2, 0x08,   11 /* Private */,
      10,    0,  113,    2, 0x08,   12 /* Private */,
      11,    0,  114,    2, 0x08,   13 /* Private */,
      12,    0,  115,    2, 0x08,   14 /* Private */,
      13,    1,  116,    2, 0x08,   15 /* Private */,
      15,    0,  119,    2, 0x08,   17 /* Private */,
      16,    0,  120,    2, 0x08,   18 /* Private */,
      17,    1,  121,    2, 0x08,   19 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool,    3,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   14,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   18,

       0        // eod
};

void EditorWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<EditorWidget *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->pasteAvailable((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 1: _t->updateEditMenu(); break;
        case 2: _t->copyAvailable((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 3: _t->redoAvailable((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 4: _t->undoAvailable((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 5: _t->save(); break;
        case 6: _t->cut(); break;
        case 7: _t->copy(); break;
        case 8: _t->deleteText(); break;
        case 9: _t->openFindAndReplace(); break;
        case 10: _t->findAndReplace((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 11: _t->openSettings(); break;
        case 12: _t->updateSettingsFromDialog(); break;
        case 13: _t->openFile((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (EditorWidget::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&EditorWidget::pasteAvailable)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject EditorWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<QTextEdit::staticMetaObject>(),
    qt_meta_stringdata_EditorWidget.offsetsAndSize,
    qt_meta_data_EditorWidget,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_EditorWidget_t
, QtPrivate::TypeAndForceComplete<EditorWidget, std::true_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<bool, std::false_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<bool, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<bool, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<bool, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QString &, std::false_type>


>,
    nullptr
} };


const QMetaObject *EditorWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *EditorWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_EditorWidget.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "SimRobot::Widget"))
        return static_cast< SimRobot::Widget*>(this);
    return QTextEdit::qt_metacast(_clname);
}

int EditorWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QTextEdit::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 14)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 14;
    }
    return _id;
}

// SIGNAL 0
void EditorWidget::pasteAvailable(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
