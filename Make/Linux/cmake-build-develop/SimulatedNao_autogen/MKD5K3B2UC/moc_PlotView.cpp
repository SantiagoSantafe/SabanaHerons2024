/****************************************************************************
** Meta object code from reading C++ file 'PlotView.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.2.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../Src/Libs/SimulatedNao/Views/PlotView.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'PlotView.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.2.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_PlotWidget_t {
    const uint offsetsAndSize[14];
    char stringdata0[101];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_PlotWidget_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_PlotWidget_t qt_meta_stringdata_PlotWidget = {
    {
QT_MOC_LITERAL(0, 10), // "PlotWidget"
QT_MOC_LITERAL(11, 20), // "determineMinMaxValue"
QT_MOC_LITERAL(32, 0), // ""
QT_MOC_LITERAL(33, 15), // "toggleDrawUnits"
QT_MOC_LITERAL(49, 16), // "toggleDrawLegend"
QT_MOC_LITERAL(66, 18), // "toggleAntialiasing"
QT_MOC_LITERAL(85, 15) // "exportAsGnuplot"

    },
    "PlotWidget\0determineMinMaxValue\0\0"
    "toggleDrawUnits\0toggleDrawLegend\0"
    "toggleAntialiasing\0exportAsGnuplot"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PlotWidget[] = {

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
       1,    0,   44,    2, 0x0a,    1 /* Public */,
       3,    0,   45,    2, 0x0a,    2 /* Public */,
       4,    0,   46,    2, 0x0a,    3 /* Public */,
       5,    0,   47,    2, 0x0a,    4 /* Public */,
       6,    0,   48,    2, 0x0a,    5 /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void PlotWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PlotWidget *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->determineMinMaxValue(); break;
        case 1: _t->toggleDrawUnits(); break;
        case 2: _t->toggleDrawLegend(); break;
        case 3: _t->toggleAntialiasing(); break;
        case 4: _t->exportAsGnuplot(); break;
        default: ;
        }
    }
    (void)_a;
}

const QMetaObject PlotWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_PlotWidget.offsetsAndSize,
    qt_meta_data_PlotWidget,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_PlotWidget_t
, QtPrivate::TypeAndForceComplete<PlotWidget, std::true_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>


>,
    nullptr
} };


const QMetaObject *PlotWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PlotWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PlotWidget.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "SimRobot::Widget"))
        return static_cast< SimRobot::Widget*>(this);
    return QWidget::qt_metacast(_clname);
}

int PlotWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
