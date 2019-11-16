/****************************************************************************
** Meta object code from reading C++ file 'modeldata.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../modeldata.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'modeldata.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ModelData_t {
    QByteArrayData data[16];
    char stringdata0[138];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ModelData_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ModelData_t qt_meta_stringdata_ModelData = {
    {
QT_MOC_LITERAL(0, 0, 9), // "ModelData"
QT_MOC_LITERAL(1, 10, 14), // "updateProgress"
QT_MOC_LITERAL(2, 25, 0), // ""
QT_MOC_LITERAL(3, 26, 10), // "getNextTri"
QT_MOC_LITERAL(4, 37, 9), // "triangle&"
QT_MOC_LITERAL(5, 47, 3), // "tri"
QT_MOC_LITERAL(6, 51, 9), // "zdistance"
QT_MOC_LITERAL(7, 61, 4), // "int&"
QT_MOC_LITERAL(8, 66, 6), // "nextid"
QT_MOC_LITERAL(9, 73, 11), // "initGetNexy"
QT_MOC_LITERAL(10, 85, 12), // "getZTriCount"
QT_MOC_LITERAL(11, 98, 10), // "rotatPoint"
QT_MOC_LITERAL(12, 109, 10), // "QVector3D&"
QT_MOC_LITERAL(13, 120, 3), // "vec"
QT_MOC_LITERAL(14, 124, 8), // "angledeg"
QT_MOC_LITERAL(15, 133, 4) // "axis"

    },
    "ModelData\0updateProgress\0\0getNextTri\0"
    "triangle&\0tri\0zdistance\0int&\0nextid\0"
    "initGetNexy\0getZTriCount\0rotatPoint\0"
    "QVector3D&\0vec\0angledeg\0axis"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ModelData[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   39,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    3,   42,    2, 0x0a /* Public */,
       9,    0,   49,    2, 0x0a /* Public */,
      10,    1,   50,    2, 0x0a /* Public */,
      11,    3,   53,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    2,

 // slots: parameters
    QMetaType::Bool, 0x80000000 | 4, QMetaType::Float, 0x80000000 | 7,    5,    6,    8,
    QMetaType::Void,
    QMetaType::Int, QMetaType::Float,    6,
    QMetaType::Void, 0x80000000 | 12, QMetaType::Double, QMetaType::QVector3D,   13,   14,   15,

       0        // eod
};

void ModelData::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ModelData *_t = static_cast<ModelData *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->updateProgress((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: { bool _r = _t->getNextTri((*reinterpret_cast< triangle(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 2: _t->initGetNexy(); break;
        case 3: { int _r = _t->getZTriCount((*reinterpret_cast< float(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 4: _t->rotatPoint((*reinterpret_cast< QVector3D(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< QVector3D(*)>(_a[3]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (ModelData::*_t)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ModelData::updateProgress)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject ModelData::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_ModelData.data,
      qt_meta_data_ModelData,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *ModelData::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ModelData::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ModelData.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int ModelData::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void ModelData::updateProgress(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
