/****************************************************************************
** Meta object code from reading C++ file 'loadingbar.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../loadingbar.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'loadingbar.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_LoadingBar_t {
    QByteArrayData data[16];
    char stringdata0[122];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_LoadingBar_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_LoadingBar_t qt_meta_stringdata_LoadingBar = {
    {
QT_MOC_LITERAL(0, 0, 10), // "LoadingBar"
QT_MOC_LITERAL(1, 11, 6), // "setMax"
QT_MOC_LITERAL(2, 18, 0), // ""
QT_MOC_LITERAL(3, 19, 3), // "max"
QT_MOC_LITERAL(4, 23, 6), // "setMin"
QT_MOC_LITERAL(5, 30, 3), // "min"
QT_MOC_LITERAL(6, 34, 8), // "setValue"
QT_MOC_LITERAL(7, 43, 3), // "val"
QT_MOC_LITERAL(8, 47, 14), // "setDescription"
QT_MOC_LITERAL(9, 62, 3), // "str"
QT_MOC_LITERAL(10, 66, 11), // "setProgress"
QT_MOC_LITERAL(11, 78, 8), // "fraction"
QT_MOC_LITERAL(12, 87, 5), // "total"
QT_MOC_LITERAL(13, 93, 15), // "useCancelButton"
QT_MOC_LITERAL(14, 109, 3), // "use"
QT_MOC_LITERAL(15, 113, 8) // "GetValue"

    },
    "LoadingBar\0setMax\0\0max\0setMin\0min\0"
    "setValue\0val\0setDescription\0str\0"
    "setProgress\0fraction\0total\0useCancelButton\0"
    "use\0GetValue"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_LoadingBar[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   49,    2, 0x0a /* Public */,
       4,    1,   52,    2, 0x0a /* Public */,
       6,    1,   55,    2, 0x0a /* Public */,
       8,    1,   58,    2, 0x0a /* Public */,
      10,    2,   61,    2, 0x0a /* Public */,
      13,    1,   66,    2, 0x0a /* Public */,
      15,    0,   69,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::Int,    7,
    QMetaType::Void, QMetaType::QString,    9,
    QMetaType::Void, QMetaType::LongLong, QMetaType::LongLong,   11,   12,
    QMetaType::Void, QMetaType::Bool,   14,
    QMetaType::Int,

       0        // eod
};

void LoadingBar::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        LoadingBar *_t = static_cast<LoadingBar *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->setMax((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->setMin((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->setValue((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->setDescription((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 4: _t->setProgress((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint64(*)>(_a[2]))); break;
        case 5: _t->useCancelButton((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: { int _r = _t->GetValue();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    }
}

const QMetaObject LoadingBar::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_LoadingBar.data,
      qt_meta_data_LoadingBar,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *LoadingBar::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *LoadingBar::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_LoadingBar.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int LoadingBar::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
