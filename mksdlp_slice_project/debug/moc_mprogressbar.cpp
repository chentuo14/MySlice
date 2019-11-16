/****************************************************************************
** Meta object code from reading C++ file 'mprogressbar.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../mprogressbar.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mprogressbar.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MProgressBar_t {
    QByteArrayData data[17];
    char stringdata0[164];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MProgressBar_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MProgressBar_t qt_meta_stringdata_MProgressBar = {
    {
QT_MOC_LITERAL(0, 0, 12), // "MProgressBar"
QT_MOC_LITERAL(1, 13, 12), // "sliderChange"
QT_MOC_LITERAL(2, 26, 0), // ""
QT_MOC_LITERAL(3, 27, 10), // "paintEvent"
QT_MOC_LITERAL(4, 38, 12), // "QPaintEvent*"
QT_MOC_LITERAL(5, 51, 5), // "event"
QT_MOC_LITERAL(6, 57, 14), // "mouseMoveEvent"
QT_MOC_LITERAL(7, 72, 12), // "QMouseEvent*"
QT_MOC_LITERAL(8, 85, 15), // "mousePressEvent"
QT_MOC_LITERAL(9, 101, 7), // "setType"
QT_MOC_LITERAL(10, 109, 2), // "ty"
QT_MOC_LITERAL(11, 112, 11), // "setProgress"
QT_MOC_LITERAL(12, 124, 8), // "progress"
QT_MOC_LITERAL(13, 133, 7), // "setMaxs"
QT_MOC_LITERAL(14, 141, 4), // "Maxs"
QT_MOC_LITERAL(15, 146, 10), // "isShowText"
QT_MOC_LITERAL(16, 157, 6) // "isShow"

    },
    "MProgressBar\0sliderChange\0\0paintEvent\0"
    "QPaintEvent*\0event\0mouseMoveEvent\0"
    "QMouseEvent*\0mousePressEvent\0setType\0"
    "ty\0setProgress\0progress\0setMaxs\0Maxs\0"
    "isShowText\0isShow"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MProgressBar[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   54,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    1,   57,    2, 0x0a /* Public */,
       6,    1,   60,    2, 0x0a /* Public */,
       8,    1,   63,    2, 0x0a /* Public */,
       9,    1,   66,    2, 0x0a /* Public */,
      11,    1,   69,    2, 0x0a /* Public */,
      13,    1,   72,    2, 0x0a /* Public */,
      15,    1,   75,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    2,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void, 0x80000000 | 7,    5,
    QMetaType::Void, 0x80000000 | 7,    5,
    QMetaType::Void, QMetaType::QString,   10,
    QMetaType::Void, QMetaType::Int,   12,
    QMetaType::Void, QMetaType::Int,   14,
    QMetaType::Void, QMetaType::Bool,   16,

       0        // eod
};

void MProgressBar::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MProgressBar *_t = static_cast<MProgressBar *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->sliderChange((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->paintEvent((*reinterpret_cast< QPaintEvent*(*)>(_a[1]))); break;
        case 2: _t->mouseMoveEvent((*reinterpret_cast< QMouseEvent*(*)>(_a[1]))); break;
        case 3: _t->mousePressEvent((*reinterpret_cast< QMouseEvent*(*)>(_a[1]))); break;
        case 4: _t->setType((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 5: _t->setProgress((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->setMaxs((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->isShowText((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (MProgressBar::*_t)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MProgressBar::sliderChange)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject MProgressBar::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_MProgressBar.data,
      qt_meta_data_MProgressBar,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *MProgressBar::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MProgressBar::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MProgressBar.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int MProgressBar::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void MProgressBar::sliderChange(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
