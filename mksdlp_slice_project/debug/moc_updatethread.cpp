/****************************************************************************
** Meta object code from reading C++ file 'updatethread.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../updatethread.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'updatethread.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_updateThread_t {
    QByteArrayData data[18];
    char stringdata0[183];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_updateThread_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_updateThread_t qt_meta_stringdata_updateThread = {
    {
QT_MOC_LITERAL(0, 0, 12), // "updateThread"
QT_MOC_LITERAL(1, 13, 14), // "updateProgress"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 8), // "addmodel"
QT_MOC_LITERAL(4, 38, 11), // "updatemodel"
QT_MOC_LITERAL(5, 50, 10), // "ModelData*"
QT_MOC_LITERAL(6, 61, 16), // "initUpdateThread"
QT_MOC_LITERAL(7, 78, 2), // "md"
QT_MOC_LITERAL(8, 81, 14), // "initLoadThread"
QT_MOC_LITERAL(9, 96, 14), // "initReadThread"
QT_MOC_LITERAL(10, 111, 12), // "ModelLoader*"
QT_MOC_LITERAL(11, 124, 3), // "mdl"
QT_MOC_LITERAL(12, 128, 15), // "initImageThread"
QT_MOC_LITERAL(13, 144, 5), // "value"
QT_MOC_LITERAL(14, 150, 8), // "MCanvas*"
QT_MOC_LITERAL(15, 159, 2), // "mc"
QT_MOC_LITERAL(16, 162, 11), // "ModelUpdate"
QT_MOC_LITERAL(17, 174, 8) // "progress"

    },
    "updateThread\0updateProgress\0\0addmodel\0"
    "updatemodel\0ModelData*\0initUpdateThread\0"
    "md\0initLoadThread\0initReadThread\0"
    "ModelLoader*\0mdl\0initImageThread\0value\0"
    "MCanvas*\0mc\0ModelUpdate\0progress"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_updateThread[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   54,    2, 0x06 /* Public */,
       3,    0,   57,    2, 0x06 /* Public */,
       4,    1,   58,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    1,   61,    2, 0x0a /* Public */,
       8,    1,   64,    2, 0x0a /* Public */,
       9,    1,   67,    2, 0x0a /* Public */,
      12,    2,   70,    2, 0x0a /* Public */,
      16,    1,   75,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 5,    2,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 5,    7,
    QMetaType::Void, 0x80000000 | 5,    7,
    QMetaType::Void, 0x80000000 | 10,   11,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 14,   13,   15,
    QMetaType::Void, QMetaType::Int,   17,

       0        // eod
};

void updateThread::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        updateThread *_t = static_cast<updateThread *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->updateProgress((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->addmodel(); break;
        case 2: _t->updatemodel((*reinterpret_cast< ModelData*(*)>(_a[1]))); break;
        case 3: _t->initUpdateThread((*reinterpret_cast< ModelData*(*)>(_a[1]))); break;
        case 4: _t->initLoadThread((*reinterpret_cast< ModelData*(*)>(_a[1]))); break;
        case 5: _t->initReadThread((*reinterpret_cast< ModelLoader*(*)>(_a[1]))); break;
        case 6: _t->initImageThread((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< MCanvas*(*)>(_a[2]))); break;
        case 7: _t->ModelUpdate((*reinterpret_cast< int(*)>(_a[1]))); break;
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
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< ModelLoader* >(); break;
            }
            break;
        case 6:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< MCanvas* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (updateThread::*_t)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&updateThread::updateProgress)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (updateThread::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&updateThread::addmodel)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (updateThread::*_t)(ModelData * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&updateThread::updatemodel)) {
                *result = 2;
                return;
            }
        }
    }
}

const QMetaObject updateThread::staticMetaObject = {
    { &QThread::staticMetaObject, qt_meta_stringdata_updateThread.data,
      qt_meta_data_updateThread,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *updateThread::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *updateThread::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_updateThread.stringdata0))
        return static_cast<void*>(this);
    return QThread::qt_metacast(_clname);
}

int updateThread::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QThread::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void updateThread::updateProgress(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void updateThread::addmodel()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void updateThread::updatemodel(ModelData * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
