/****************************************************************************
** Meta object code from reading C++ file 'SimObjectWidget.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.2.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../Util/SimRobot/Src/SimRobotCore2/SimObjectWidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'SimObjectWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.2.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_SimObjectWidget_t {
    const uint offsetsAndSize[46];
    char stringdata0[261];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_SimObjectWidget_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_SimObjectWidget_t qt_meta_stringdata_SimObjectWidget = {
    {
QT_MOC_LITERAL(0, 15), // "SimObjectWidget"
QT_MOC_LITERAL(16, 4), // "copy"
QT_MOC_LITERAL(21, 0), // ""
QT_MOC_LITERAL(22, 19), // "setSurfaceShadeMode"
QT_MOC_LITERAL(42, 5), // "style"
QT_MOC_LITERAL(48, 19), // "setPhysicsShadeMode"
QT_MOC_LITERAL(68, 20), // "setDrawingsShadeMode"
QT_MOC_LITERAL(89, 20), // "setDrawingsOcclusion"
QT_MOC_LITERAL(110, 4), // "flag"
QT_MOC_LITERAL(115, 13), // "setCameraMode"
QT_MOC_LITERAL(129, 4), // "mode"
QT_MOC_LITERAL(134, 7), // "setFovY"
QT_MOC_LITERAL(142, 4), // "fovY"
QT_MOC_LITERAL(147, 12), // "setDragPlane"
QT_MOC_LITERAL(160, 5), // "plane"
QT_MOC_LITERAL(166, 11), // "setDragMode"
QT_MOC_LITERAL(178, 11), // "resetCamera"
QT_MOC_LITERAL(190, 16), // "toggleCameraMode"
QT_MOC_LITERAL(207, 9), // "fitCamera"
QT_MOC_LITERAL(217, 16), // "toggleRenderFlag"
QT_MOC_LITERAL(234, 13), // "exportAsImage"
QT_MOC_LITERAL(248, 5), // "width"
QT_MOC_LITERAL(254, 6) // "height"

    },
    "SimObjectWidget\0copy\0\0setSurfaceShadeMode\0"
    "style\0setPhysicsShadeMode\0"
    "setDrawingsShadeMode\0setDrawingsOcclusion\0"
    "flag\0setCameraMode\0mode\0setFovY\0fovY\0"
    "setDragPlane\0plane\0setDragMode\0"
    "resetCamera\0toggleCameraMode\0fitCamera\0"
    "toggleRenderFlag\0exportAsImage\0width\0"
    "height"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SimObjectWidget[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   98,    2, 0x08,    1 /* Private */,
       3,    1,   99,    2, 0x08,    2 /* Private */,
       5,    1,  102,    2, 0x08,    4 /* Private */,
       6,    1,  105,    2, 0x08,    6 /* Private */,
       7,    1,  108,    2, 0x08,    8 /* Private */,
       9,    1,  111,    2, 0x08,   10 /* Private */,
      11,    1,  114,    2, 0x08,   12 /* Private */,
      13,    1,  117,    2, 0x08,   14 /* Private */,
      15,    1,  120,    2, 0x08,   16 /* Private */,
      16,    0,  123,    2, 0x08,   18 /* Private */,
      17,    0,  124,    2, 0x08,   19 /* Private */,
      18,    0,  125,    2, 0x08,   20 /* Private */,
      19,    1,  126,    2, 0x08,   21 /* Private */,
      20,    2,  129,    2, 0x08,   23 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void, QMetaType::Int,    8,
    QMetaType::Void, QMetaType::Int,   10,
    QMetaType::Void, QMetaType::Int,   12,
    QMetaType::Void, QMetaType::Int,   14,
    QMetaType::Void, QMetaType::Int,   10,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    8,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   21,   22,

       0        // eod
};

void SimObjectWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<SimObjectWidget *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->copy(); break;
        case 1: _t->setSurfaceShadeMode((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 2: _t->setPhysicsShadeMode((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 3: _t->setDrawingsShadeMode((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 4: _t->setDrawingsOcclusion((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 5: _t->setCameraMode((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 6: _t->setFovY((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 7: _t->setDragPlane((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 8: _t->setDragMode((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 9: _t->resetCamera(); break;
        case 10: _t->toggleCameraMode(); break;
        case 11: _t->fitCamera(); break;
        case 12: _t->toggleRenderFlag((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 13: _t->exportAsImage((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObject SimObjectWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<QOpenGLWidget::staticMetaObject>(),
    qt_meta_stringdata_SimObjectWidget.offsetsAndSize,
    qt_meta_data_SimObjectWidget,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_SimObjectWidget_t
, QtPrivate::TypeAndForceComplete<SimObjectWidget, std::true_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>


>,
    nullptr
} };


const QMetaObject *SimObjectWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SimObjectWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SimObjectWidget.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "SimRobot::Widget"))
        return static_cast< SimRobot::Widget*>(this);
    return QOpenGLWidget::qt_metacast(_clname);
}

int SimObjectWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QOpenGLWidget::qt_metacall(_c, _id, _a);
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
