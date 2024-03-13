/****************************************************************************
** Meta object code from reading C++ file 'MainWindow.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.2.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../Util/SimRobot/Src/SimRobot/MainWindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'MainWindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.2.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MainWindow_t {
    const uint offsetsAndSize[76];
    char stringdata0[431];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 10), // "MainWindow"
QT_MOC_LITERAL(11, 8), // "openFile"
QT_MOC_LITERAL(20, 0), // ""
QT_MOC_LITERAL(21, 8), // "fileName"
QT_MOC_LITERAL(30, 12), // "unlockLayout"
QT_MOC_LITERAL(43, 14), // "updateFileMenu"
QT_MOC_LITERAL(58, 20), // "updateRecentFileMenu"
QT_MOC_LITERAL(79, 14), // "updateViewMenu"
QT_MOC_LITERAL(94, 15), // "updateAddonMenu"
QT_MOC_LITERAL(110, 20), // "updateMenuAndToolBar"
QT_MOC_LITERAL(131, 16), // "setGuiUpdateRate"
QT_MOC_LITERAL(148, 4), // "rate"
QT_MOC_LITERAL(153, 4), // "open"
QT_MOC_LITERAL(158, 9), // "closeFile"
QT_MOC_LITERAL(168, 5), // "about"
QT_MOC_LITERAL(174, 9), // "loadAddon"
QT_MOC_LITERAL(184, 4), // "name"
QT_MOC_LITERAL(189, 10), // "openObject"
QT_MOC_LITERAL(200, 8), // "fullName"
QT_MOC_LITERAL(209, 23), // "const SimRobot::Module*"
QT_MOC_LITERAL(233, 6), // "module"
QT_MOC_LITERAL(240, 17), // "SimRobot::Object*"
QT_MOC_LITERAL(258, 6), // "object"
QT_MOC_LITERAL(265, 5), // "flags"
QT_MOC_LITERAL(271, 11), // "closeObject"
QT_MOC_LITERAL(283, 12), // "closedObject"
QT_MOC_LITERAL(296, 17), // "visibilityChanged"
QT_MOC_LITERAL(314, 7), // "visible"
QT_MOC_LITERAL(322, 12), // "focusChanged"
QT_MOC_LITERAL(335, 8), // "QWidget*"
QT_MOC_LITERAL(344, 3), // "old"
QT_MOC_LITERAL(348, 3), // "now"
QT_MOC_LITERAL(352, 8), // "simReset"
QT_MOC_LITERAL(361, 8), // "simStart"
QT_MOC_LITERAL(370, 7), // "simStep"
QT_MOC_LITERAL(378, 7), // "simStop"
QT_MOC_LITERAL(386, 23), // "applicationStateChanged"
QT_MOC_LITERAL(410, 20) // "Qt::ApplicationState"

    },
    "MainWindow\0openFile\0\0fileName\0"
    "unlockLayout\0updateFileMenu\0"
    "updateRecentFileMenu\0updateViewMenu\0"
    "updateAddonMenu\0updateMenuAndToolBar\0"
    "setGuiUpdateRate\0rate\0open\0closeFile\0"
    "about\0loadAddon\0name\0openObject\0"
    "fullName\0const SimRobot::Module*\0"
    "module\0SimRobot::Object*\0object\0flags\0"
    "closeObject\0closedObject\0visibilityChanged\0"
    "visible\0focusChanged\0QWidget*\0old\0now\0"
    "simReset\0simStart\0simStep\0simStop\0"
    "applicationStateChanged\0Qt::ApplicationState"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
      22,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,  146,    2, 0x0a,    1 /* Public */,
       4,    0,  149,    2, 0x08,    3 /* Private */,
       5,    0,  150,    2, 0x08,    4 /* Private */,
       6,    0,  151,    2, 0x08,    5 /* Private */,
       7,    0,  152,    2, 0x08,    6 /* Private */,
       8,    0,  153,    2, 0x08,    7 /* Private */,
       9,    0,  154,    2, 0x08,    8 /* Private */,
      10,    1,  155,    2, 0x08,    9 /* Private */,
      12,    0,  158,    2, 0x08,   11 /* Private */,
      13,    0,  159,    2, 0x08,   12 /* Private */,
      14,    0,  160,    2, 0x08,   13 /* Private */,
      15,    1,  161,    2, 0x08,   14 /* Private */,
      17,    4,  164,    2, 0x08,   16 /* Private */,
      24,    1,  173,    2, 0x08,   21 /* Private */,
      25,    1,  176,    2, 0x08,   23 /* Private */,
      26,    1,  179,    2, 0x08,   25 /* Private */,
      28,    2,  182,    2, 0x08,   27 /* Private */,
      32,    0,  187,    2, 0x0a,   30 /* Public */,
      33,    0,  188,    2, 0x0a,   31 /* Public */,
      34,    0,  189,    2, 0x0a,   32 /* Public */,
      35,    0,  190,    2, 0x0a,   33 /* Public */,
      36,    1,  191,    2, 0x0a,   34 /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   11,
    QMetaType::Void,
    QMetaType::Bool,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   16,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 19, 0x80000000 | 21, QMetaType::Int,   18,   20,   22,   23,
    QMetaType::Void, QMetaType::QString,   18,
    QMetaType::Void, QMetaType::QString,   18,
    QMetaType::Void, QMetaType::Bool,   27,
    QMetaType::Void, 0x80000000 | 29, 0x80000000 | 29,   30,   31,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 37,    2,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MainWindow *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->openFile((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 1: _t->unlockLayout(); break;
        case 2: _t->updateFileMenu(); break;
        case 3: _t->updateRecentFileMenu(); break;
        case 4: _t->updateViewMenu(); break;
        case 5: _t->updateAddonMenu(); break;
        case 6: _t->updateMenuAndToolBar(); break;
        case 7: _t->setGuiUpdateRate((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 8: _t->open(); break;
        case 9: { bool _r = _t->closeFile();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 10: _t->about(); break;
        case 11: _t->loadAddon((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 12: _t->openObject((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<const SimRobot::Module*>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<SimRobot::Object*>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[4]))); break;
        case 13: _t->closeObject((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 14: _t->closedObject((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 15: _t->visibilityChanged((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 16: _t->focusChanged((*reinterpret_cast< std::add_pointer_t<QWidget*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QWidget*>>(_a[2]))); break;
        case 17: _t->simReset(); break;
        case 18: _t->simStart(); break;
        case 19: _t->simStep(); break;
        case 20: _t->simStop(); break;
        case 21: _t->applicationStateChanged((*reinterpret_cast< std::add_pointer_t<Qt::ApplicationState>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 16:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 1:
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QWidget* >(); break;
            }
            break;
        }
    }
}

const QMetaObject MainWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_MainWindow.offsetsAndSize,
    qt_meta_data_MainWindow,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_MainWindow_t
, QtPrivate::TypeAndForceComplete<MainWindow, std::true_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QString &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<bool, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QString &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QString &, std::false_type>, QtPrivate::TypeAndForceComplete<const SimRobot::Module *, std::false_type>, QtPrivate::TypeAndForceComplete<SimRobot::Object *, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QString &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QString &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<bool, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QWidget *, std::false_type>, QtPrivate::TypeAndForceComplete<QWidget *, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<Qt::ApplicationState, std::false_type>


>,
    nullptr
} };


const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "SimRobot::Application"))
        return static_cast< SimRobot::Application*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 22)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 22;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 22)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 22;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
