/****************************************************************************
** Meta object code from reading C++ file 'qttreepropertybrowser.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.2.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../Util/qtpropertybrowser/qttreepropertybrowser.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qttreepropertybrowser.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.2.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QtTreePropertyBrowser_t {
    const uint offsetsAndSize[48];
    char stringdata0[349];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_QtTreePropertyBrowser_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_QtTreePropertyBrowser_t qt_meta_stringdata_QtTreePropertyBrowser = {
    {
QT_MOC_LITERAL(0, 21), // "QtTreePropertyBrowser"
QT_MOC_LITERAL(22, 9), // "collapsed"
QT_MOC_LITERAL(32, 0), // ""
QT_MOC_LITERAL(33, 14), // "QtBrowserItem*"
QT_MOC_LITERAL(48, 4), // "item"
QT_MOC_LITERAL(53, 8), // "expanded"
QT_MOC_LITERAL(62, 13), // "slotCollapsed"
QT_MOC_LITERAL(76, 11), // "QModelIndex"
QT_MOC_LITERAL(88, 12), // "slotExpanded"
QT_MOC_LITERAL(101, 29), // "slotCurrentBrowserItemChanged"
QT_MOC_LITERAL(131, 26), // "slotCurrentTreeItemChanged"
QT_MOC_LITERAL(158, 16), // "QTreeWidgetItem*"
QT_MOC_LITERAL(175, 11), // "indentation"
QT_MOC_LITERAL(187, 15), // "rootIsDecorated"
QT_MOC_LITERAL(203, 20), // "alternatingRowColors"
QT_MOC_LITERAL(224, 13), // "headerVisible"
QT_MOC_LITERAL(238, 10), // "resizeMode"
QT_MOC_LITERAL(249, 10), // "ResizeMode"
QT_MOC_LITERAL(260, 16), // "splitterPosition"
QT_MOC_LITERAL(277, 28), // "propertiesWithoutValueMarked"
QT_MOC_LITERAL(306, 11), // "Interactive"
QT_MOC_LITERAL(318, 7), // "Stretch"
QT_MOC_LITERAL(326, 5), // "Fixed"
QT_MOC_LITERAL(332, 16) // "ResizeToContents"

    },
    "QtTreePropertyBrowser\0collapsed\0\0"
    "QtBrowserItem*\0item\0expanded\0slotCollapsed\0"
    "QModelIndex\0slotExpanded\0"
    "slotCurrentBrowserItemChanged\0"
    "slotCurrentTreeItemChanged\0QTreeWidgetItem*\0"
    "indentation\0rootIsDecorated\0"
    "alternatingRowColors\0headerVisible\0"
    "resizeMode\0ResizeMode\0splitterPosition\0"
    "propertiesWithoutValueMarked\0Interactive\0"
    "Stretch\0Fixed\0ResizeToContents"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QtTreePropertyBrowser[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       7,   70, // properties
       1,  105, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   50,    2, 0x06,    8 /* Public */,
       5,    1,   53,    2, 0x06,   10 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       6,    1,   56,    2, 0x08,   12 /* Private */,
       8,    1,   59,    2, 0x08,   14 /* Private */,
       9,    1,   62,    2, 0x08,   16 /* Private */,
      10,    2,   65,    2, 0x08,   18 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 7,    2,
    QMetaType::Void, 0x80000000 | 7,    2,
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void, 0x80000000 | 11, 0x80000000 | 11,    2,    2,

 // properties: name, type, flags
      12, QMetaType::Int, 0x00015103, uint(-1), 0,
      13, QMetaType::Bool, 0x00015103, uint(-1), 0,
      14, QMetaType::Bool, 0x00015103, uint(-1), 0,
      15, QMetaType::Bool, 0x00015103, uint(-1), 0,
      16, 0x80000000 | 17, 0x0001510b, uint(-1), 0,
      18, QMetaType::Int, 0x00015103, uint(-1), 0,
      19, QMetaType::Bool, 0x00015103, uint(-1), 0,

 // enums: name, alias, flags, count, data
      17,   17, 0x0,    4,  110,

 // enum data: key, value
      20, uint(QtTreePropertyBrowser::Interactive),
      21, uint(QtTreePropertyBrowser::Stretch),
      22, uint(QtTreePropertyBrowser::Fixed),
      23, uint(QtTreePropertyBrowser::ResizeToContents),

       0        // eod
};

void QtTreePropertyBrowser::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<QtTreePropertyBrowser *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->collapsed((*reinterpret_cast< std::add_pointer_t<QtBrowserItem*>>(_a[1]))); break;
        case 1: _t->expanded((*reinterpret_cast< std::add_pointer_t<QtBrowserItem*>>(_a[1]))); break;
        case 2: _t->d_func()->slotCollapsed((*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[1]))); break;
        case 3: _t->d_func()->slotExpanded((*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[1]))); break;
        case 4: _t->d_func()->slotCurrentBrowserItemChanged((*reinterpret_cast< std::add_pointer_t<QtBrowserItem*>>(_a[1]))); break;
        case 5: _t->d_func()->slotCurrentTreeItemChanged((*reinterpret_cast< std::add_pointer_t<QTreeWidgetItem*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QTreeWidgetItem*>>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (QtTreePropertyBrowser::*)(QtBrowserItem * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QtTreePropertyBrowser::collapsed)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (QtTreePropertyBrowser::*)(QtBrowserItem * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QtTreePropertyBrowser::expanded)) {
                *result = 1;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<QtTreePropertyBrowser *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< int*>(_v) = _t->indentation(); break;
        case 1: *reinterpret_cast< bool*>(_v) = _t->rootIsDecorated(); break;
        case 2: *reinterpret_cast< bool*>(_v) = _t->alternatingRowColors(); break;
        case 3: *reinterpret_cast< bool*>(_v) = _t->isHeaderVisible(); break;
        case 4: *reinterpret_cast< ResizeMode*>(_v) = _t->resizeMode(); break;
        case 5: *reinterpret_cast< int*>(_v) = _t->splitterPosition(); break;
        case 6: *reinterpret_cast< bool*>(_v) = _t->propertiesWithoutValueMarked(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<QtTreePropertyBrowser *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setIndentation(*reinterpret_cast< int*>(_v)); break;
        case 1: _t->setRootIsDecorated(*reinterpret_cast< bool*>(_v)); break;
        case 2: _t->setAlternatingRowColors(*reinterpret_cast< bool*>(_v)); break;
        case 3: _t->setHeaderVisible(*reinterpret_cast< bool*>(_v)); break;
        case 4: _t->setResizeMode(*reinterpret_cast< ResizeMode*>(_v)); break;
        case 5: _t->setSplitterPosition(*reinterpret_cast< int*>(_v)); break;
        case 6: _t->setPropertiesWithoutValueMarked(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject QtTreePropertyBrowser::staticMetaObject = { {
    QMetaObject::SuperData::link<QtAbstractPropertyBrowser::staticMetaObject>(),
    qt_meta_stringdata_QtTreePropertyBrowser.offsetsAndSize,
    qt_meta_data_QtTreePropertyBrowser,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_QtTreePropertyBrowser_t
, QtPrivate::TypeAndForceComplete<int, std::true_type>, QtPrivate::TypeAndForceComplete<bool, std::true_type>, QtPrivate::TypeAndForceComplete<bool, std::true_type>, QtPrivate::TypeAndForceComplete<bool, std::true_type>, QtPrivate::TypeAndForceComplete<ResizeMode, std::true_type>, QtPrivate::TypeAndForceComplete<int, std::true_type>, QtPrivate::TypeAndForceComplete<bool, std::true_type>, QtPrivate::TypeAndForceComplete<QtTreePropertyBrowser, std::true_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QtBrowserItem *, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QtBrowserItem *, std::false_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QModelIndex &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QModelIndex &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QtBrowserItem *, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QTreeWidgetItem *, std::false_type>, QtPrivate::TypeAndForceComplete<QTreeWidgetItem *, std::false_type>


>,
    nullptr
} };


const QMetaObject *QtTreePropertyBrowser::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QtTreePropertyBrowser::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QtTreePropertyBrowser.stringdata0))
        return static_cast<void*>(this);
    return QtAbstractPropertyBrowser::qt_metacast(_clname);
}

int QtTreePropertyBrowser::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QtAbstractPropertyBrowser::qt_metacall(_c, _id, _a);
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
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void QtTreePropertyBrowser::collapsed(QtBrowserItem * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QtTreePropertyBrowser::expanded(QtBrowserItem * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
