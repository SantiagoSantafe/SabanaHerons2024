/****************************************************************************
** Meta object code from reading C++ file 'SceneGraphDockWidget.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.2.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../Util/SimRobot/Src/SimRobot/SceneGraphDockWidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'SceneGraphDockWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.2.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_SceneGraphDockWidget_t {
    const uint offsetsAndSize[34];
    char stringdata0[227];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_SceneGraphDockWidget_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_SceneGraphDockWidget_t qt_meta_stringdata_SceneGraphDockWidget = {
    {
QT_MOC_LITERAL(0, 20), // "SceneGraphDockWidget"
QT_MOC_LITERAL(21, 15), // "activatedObject"
QT_MOC_LITERAL(37, 0), // ""
QT_MOC_LITERAL(38, 8), // "fullName"
QT_MOC_LITERAL(47, 23), // "const SimRobot::Module*"
QT_MOC_LITERAL(71, 6), // "module"
QT_MOC_LITERAL(78, 17), // "SimRobot::Object*"
QT_MOC_LITERAL(96, 6), // "object"
QT_MOC_LITERAL(103, 5), // "flags"
QT_MOC_LITERAL(109, 17), // "deactivatedObject"
QT_MOC_LITERAL(127, 13), // "itemActivated"
QT_MOC_LITERAL(141, 11), // "QModelIndex"
QT_MOC_LITERAL(153, 5), // "index"
QT_MOC_LITERAL(159, 13), // "itemCollapsed"
QT_MOC_LITERAL(173, 12), // "itemExpanded"
QT_MOC_LITERAL(186, 17), // "openOrCloseObject"
QT_MOC_LITERAL(204, 22) // "expandOrCollapseObject"

    },
    "SceneGraphDockWidget\0activatedObject\0"
    "\0fullName\0const SimRobot::Module*\0"
    "module\0SimRobot::Object*\0object\0flags\0"
    "deactivatedObject\0itemActivated\0"
    "QModelIndex\0index\0itemCollapsed\0"
    "itemExpanded\0openOrCloseObject\0"
    "expandOrCollapseObject"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SceneGraphDockWidget[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    4,   56,    2, 0x06,    1 /* Public */,
       9,    1,   65,    2, 0x06,    6 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
      10,    1,   68,    2, 0x08,    8 /* Private */,
      13,    1,   71,    2, 0x08,   10 /* Private */,
      14,    1,   74,    2, 0x08,   12 /* Private */,
      15,    0,   77,    2, 0x08,   14 /* Private */,
      16,    0,   78,    2, 0x08,   15 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString, 0x80000000 | 4, 0x80000000 | 6, QMetaType::Int,    3,    5,    7,    8,
    QMetaType::Void, QMetaType::QString,    3,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 11,   12,
    QMetaType::Void, 0x80000000 | 11,   12,
    QMetaType::Void, 0x80000000 | 11,   12,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void SceneGraphDockWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<SceneGraphDockWidget *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->activatedObject((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<const SimRobot::Module*>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<SimRobot::Object*>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[4]))); break;
        case 1: _t->deactivatedObject((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 2: _t->itemActivated((*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[1]))); break;
        case 3: _t->itemCollapsed((*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[1]))); break;
        case 4: _t->itemExpanded((*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[1]))); break;
        case 5: _t->openOrCloseObject(); break;
        case 6: _t->expandOrCollapseObject(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (SceneGraphDockWidget::*)(const QString & , const SimRobot::Module * , SimRobot::Object * , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SceneGraphDockWidget::activatedObject)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (SceneGraphDockWidget::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SceneGraphDockWidget::deactivatedObject)) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject SceneGraphDockWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<QDockWidget::staticMetaObject>(),
    qt_meta_stringdata_SceneGraphDockWidget.offsetsAndSize,
    qt_meta_data_SceneGraphDockWidget,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_SceneGraphDockWidget_t
, QtPrivate::TypeAndForceComplete<SceneGraphDockWidget, std::true_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QString &, std::false_type>, QtPrivate::TypeAndForceComplete<const SimRobot::Module *, std::false_type>, QtPrivate::TypeAndForceComplete<SimRobot::Object *, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QString &, std::false_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QModelIndex &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QModelIndex &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QModelIndex &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>


>,
    nullptr
} };


const QMetaObject *SceneGraphDockWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SceneGraphDockWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SceneGraphDockWidget.stringdata0))
        return static_cast<void*>(this);
    return QDockWidget::qt_metacast(_clname);
}

int SceneGraphDockWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDockWidget::qt_metacall(_c, _id, _a);
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
void SceneGraphDockWidget::activatedObject(const QString & _t1, const SimRobot::Module * _t2, SimRobot::Object * _t3, int _t4)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t4))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void SceneGraphDockWidget::deactivatedObject(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
