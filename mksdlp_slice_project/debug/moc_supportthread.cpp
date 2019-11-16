/****************************************************************************
** Meta object code from reading C++ file 'supportthread.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../supportthread.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'supportthread.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_supportThread_t {
    QByteArrayData data[14];
    char stringdata0[108];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_supportThread_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_supportThread_t qt_meta_stringdata_supportThread = {
    {
QT_MOC_LITERAL(0, 0, 13), // "supportThread"
QT_MOC_LITERAL(1, 14, 9), // "addfinish"
QT_MOC_LITERAL(2, 24, 0), // ""
QT_MOC_LITERAL(3, 25, 10), // "addsupport"
QT_MOC_LITERAL(4, 36, 4), // "mpos"
QT_MOC_LITERAL(5, 41, 2), // "id"
QT_MOC_LITERAL(6, 44, 8), // "setModel"
QT_MOC_LITERAL(7, 53, 10), // "ModelData*"
QT_MOC_LITERAL(8, 64, 2), // "md"
QT_MOC_LITERAL(9, 67, 5), // "stype"
QT_MOC_LITERAL(10, 73, 6), // "xangle"
QT_MOC_LITERAL(11, 80, 10), // "supportlen"
QT_MOC_LITERAL(12, 91, 7), // "zoffset"
QT_MOC_LITERAL(13, 99, 8) // "sprecent"

    },
    "supportThread\0addfinish\0\0addsupport\0"
    "mpos\0id\0setModel\0ModelData*\0md\0stype\0"
    "xangle\0supportlen\0zoffset\0sprecent"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_supportThread[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   49,    2, 0x06 /* Public */,
       3,    2,   50,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    6,   55,    2, 0x0a /* Public */,
       6,    5,   68,    2, 0x2a /* Public | MethodCloned */,
       6,    4,   79,    2, 0x2a /* Public | MethodCloned */,
       6,    3,   88,    2, 0x2a /* Public | MethodCloned */,
       6,    2,   95,    2, 0x2a /* Public | MethodCloned */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QVector3D, QMetaType::Int,    4,    5,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 7, QMetaType::QString, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float,    8,    9,   10,   11,   12,   13,
    QMetaType::Void, 0x80000000 | 7, QMetaType::QString, QMetaType::Float, QMetaType::Float, QMetaType::Float,    8,    9,   10,   11,   12,
    QMetaType::Void, 0x80000000 | 7, QMetaType::QString, QMetaType::Float, QMetaType::Float,    8,    9,   10,   11,
    QMetaType::Void, 0x80000000 | 7, QMetaType::QString, QMetaType::Float,    8,    9,   10,
    QMetaType::Void, 0x80000000 | 7, QMetaType::QString,    8,    9,

       0        // eod
};

void supportThread::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        supportThread *_t = static_cast<supportThread *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->addfinish(); break;
        case 1: _t->addsupport((*reinterpret_cast< QVector3D(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 2: _t->setModel((*reinterpret_cast< ModelData*(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< float(*)>(_a[3])),(*reinterpret_cast< float(*)>(_a[4])),(*reinterpret_cast< float(*)>(_a[5])),(*reinterpret_cast< float(*)>(_a[6]))); break;
        case 3: _t->setModel((*reinterpret_cast< ModelData*(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< float(*)>(_a[3])),(*reinterpret_cast< float(*)>(_a[4])),(*reinterpret_cast< float(*)>(_a[5]))); break;
        case 4: _t->setModel((*reinterpret_cast< ModelData*(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< float(*)>(_a[3])),(*reinterpret_cast< float(*)>(_a[4]))); break;
        case 5: _t->setModel((*reinterpret_cast< ModelData*(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< float(*)>(_a[3]))); break;
        case 6: _t->setModel((*reinterpret_cast< ModelData*(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< ModelData* >(); break;
            }
            break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< ModelData* >(); break;
            }
            break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< ModelData* >(); break;
            }
            break;
        case 5:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< ModelData* >(); break;
            }
            break;
        case 6:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< ModelData* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (supportThread::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&supportThread::addfinish)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (supportThread::*_t)(QVector3D , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&supportThread::addsupport)) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject supportThread::staticMetaObject = {
    { &QThread::staticMetaObject, qt_meta_stringdata_supportThread.data,
      qt_meta_data_supportThread,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *supportThread::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *supportThread::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_supportThread.stringdata0))
        return static_cast<void*>(this);
    return QThread::qt_metacast(_clname);
}

int supportThread::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QThread::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void supportThread::addfinish()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void supportThread::addsupport(QVector3D _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
