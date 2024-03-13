/****************************************************************************
** Meta object code from reading C++ file 'DataWidget.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.2.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../Src/Libs/SimulatedNao/Views/DataView/DataWidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'DataWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.2.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_DataWidget_t {
    const uint offsetsAndSize[24];
    char stringdata0[127];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_DataWidget_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_DataWidget_t qt_meta_stringdata_DataWidget = {
    {
QT_MOC_LITERAL(0, 10), // "DataWidget"
QT_MOC_LITERAL(11, 10), // "setPressed"
QT_MOC_LITERAL(22, 0), // ""
QT_MOC_LITERAL(23, 14), // "autoSetToggled"
QT_MOC_LITERAL(38, 7), // "checked"
QT_MOC_LITERAL(46, 16), // "unchangedPressed"
QT_MOC_LITERAL(63, 12), // "valueChanged"
QT_MOC_LITERAL(76, 11), // "QtProperty*"
QT_MOC_LITERAL(88, 9), // "collapsed"
QT_MOC_LITERAL(98, 14), // "QtBrowserItem*"
QT_MOC_LITERAL(113, 4), // "item"
QT_MOC_LITERAL(118, 8) // "expanded"

    },
    "DataWidget\0setPressed\0\0autoSetToggled\0"
    "checked\0unchangedPressed\0valueChanged\0"
    "QtProperty*\0collapsed\0QtBrowserItem*\0"
    "item\0expanded"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DataWidget[] = {

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
       1,    0,   50,    2, 0x08,    1 /* Private */,
       3,    1,   51,    2, 0x08,    2 /* Private */,
       5,    0,   54,    2, 0x08,    4 /* Private */,
       6,    2,   55,    2, 0x08,    5 /* Private */,
       8,    1,   60,    2, 0x08,    8 /* Private */,
      11,    1,   63,    2, 0x08,   10 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    4,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 7, QMetaType::QVariant,    2,    2,
    QMetaType::Void, 0x80000000 | 9,   10,
    QMetaType::Void, 0x80000000 | 9,   10,

       0        // eod
};

void DataWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<DataWidget *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->setPressed(); break;
        case 1: _t->autoSetToggled((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 2: _t->unchangedPressed(); break;
        case 3: _t->valueChanged((*reinterpret_cast< std::add_pointer_t<QtProperty*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QVariant>>(_a[2]))); break;
        case 4: _t->collapsed((*reinterpret_cast< std::add_pointer_t<QtBrowserItem*>>(_a[1]))); break;
        case 5: _t->expanded((*reinterpret_cast< std::add_pointer_t<QtBrowserItem*>>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject DataWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<QtTreePropertyBrowser::staticMetaObject>(),
    qt_meta_stringdata_DataWidget.offsetsAndSize,
    qt_meta_data_DataWidget,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_DataWidget_t
, QtPrivate::TypeAndForceComplete<DataWidget, std::true_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<bool, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QtProperty *, std::false_type>, QtPrivate::TypeAndForceComplete<const QVariant &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QtBrowserItem *, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QtBrowserItem *, std::false_type>


>,
    nullptr
} };


const QMetaObject *DataWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DataWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_DataWidget.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "SimRobot::Widget"))
        return static_cast< SimRobot::Widget*>(this);
    return QtTreePropertyBrowser::qt_metacast(_clname);
}

int DataWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QtTreePropertyBrowser::qt_metacall(_c, _id, _a);
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
