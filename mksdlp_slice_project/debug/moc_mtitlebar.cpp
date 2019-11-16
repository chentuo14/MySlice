/****************************************************************************
** Meta object code from reading C++ file 'mtitlebar.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../mtitlebar.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mtitlebar.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MTitleBar_t {
    QByteArrayData data[12];
    char stringdata0[129];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MTitleBar_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MTitleBar_t qt_meta_stringdata_MTitleBar = {
    {
QT_MOC_LITERAL(0, 0, 9), // "MTitleBar"
QT_MOC_LITERAL(1, 10, 7), // "OnClose"
QT_MOC_LITERAL(2, 18, 0), // ""
QT_MOC_LITERAL(3, 19, 10), // "OnMinimize"
QT_MOC_LITERAL(4, 30, 6), // "OnMove"
QT_MOC_LITERAL(5, 37, 10), // "paintEvent"
QT_MOC_LITERAL(6, 48, 12), // "QPaintEvent*"
QT_MOC_LITERAL(7, 61, 5), // "event"
QT_MOC_LITERAL(8, 67, 14), // "mouseMoveEvent"
QT_MOC_LITERAL(9, 82, 12), // "QMouseEvent*"
QT_MOC_LITERAL(10, 95, 15), // "mousePressEvent"
QT_MOC_LITERAL(11, 111, 17) // "mouseReleaseEvent"

    },
    "MTitleBar\0OnClose\0\0OnMinimize\0OnMove\0"
    "paintEvent\0QPaintEvent*\0event\0"
    "mouseMoveEvent\0QMouseEvent*\0mousePressEvent\0"
    "mouseReleaseEvent"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MTitleBar[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   49,    2, 0x06 /* Public */,
       3,    0,   50,    2, 0x06 /* Public */,
       4,    1,   51,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    1,   54,    2, 0x0a /* Public */,
       8,    1,   57,    2, 0x0a /* Public */,
      10,    1,   60,    2, 0x0a /* Public */,
      11,    1,   63,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QPoint,    2,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void, 0x80000000 | 9,    7,
    QMetaType::Void, 0x80000000 | 9,    7,
    QMetaType::Void, 0x80000000 | 9,    7,

       0        // eod
};

void MTitleBar::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MTitleBar *_t = static_cast<MTitleBar *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->OnClose(); break;
        case 1: _t->OnMinimize(); break;
        case 2: _t->OnMove((*reinterpret_cast< QPoint(*)>(_a[1]))); break;
        case 3: _t->paintEvent((*reinterpret_cast< QPaintEvent*(*)>(_a[1]))); break;
        case 4: _t->mouseMoveEvent((*reinterpret_cast< QMouseEvent*(*)>(_a[1]))); break;
        case 5: _t->mousePressEvent((*reinterpret_cast< QMouseEvent*(*)>(_a[1]))); break;
        case 6: _t->mouseReleaseEvent((*reinterpret_cast< QMouseEvent*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (MTitleBar::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MTitleBar::OnClose)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (MTitleBar::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MTitleBar::OnMinimize)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (MTitleBar::*_t)(QPoint );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MTitleBar::OnMove)) {
                *result = 2;
                return;
            }
        }
    }
}

const QMetaObject MTitleBar::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_MTitleBar.data,
      qt_meta_data_MTitleBar,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *MTitleBar::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MTitleBar::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MTitleBar.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int MTitleBar::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void MTitleBar::OnClose()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void MTitleBar::OnMinimize()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void MTitleBar::OnMove(QPoint _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
