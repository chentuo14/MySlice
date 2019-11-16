/****************************************************************************
** Meta object code from reading C++ file 'mcanvas.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../mcanvas.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QVector>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mcanvas.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MCanvas_t {
    QByteArrayData data[17];
    char stringdata0[183];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MCanvas_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MCanvas_t qt_meta_stringdata_MCanvas = {
    {
QT_MOC_LITERAL(0, 0, 7), // "MCanvas"
QT_MOC_LITERAL(1, 8, 10), // "paintEvent"
QT_MOC_LITERAL(2, 19, 0), // ""
QT_MOC_LITERAL(3, 20, 12), // "QPaintEvent*"
QT_MOC_LITERAL(4, 33, 1), // "e"
QT_MOC_LITERAL(5, 35, 10), // "wheelEvent"
QT_MOC_LITERAL(6, 46, 12), // "QWheelEvent*"
QT_MOC_LITERAL(7, 59, 5), // "event"
QT_MOC_LITERAL(8, 65, 15), // "mousePressEvent"
QT_MOC_LITERAL(9, 81, 12), // "QMouseEvent*"
QT_MOC_LITERAL(10, 94, 14), // "mouseMoveEvent"
QT_MOC_LITERAL(11, 109, 17), // "mouseReleaseEvent"
QT_MOC_LITERAL(12, 127, 10), // "leaveEvent"
QT_MOC_LITERAL(13, 138, 7), // "QEvent*"
QT_MOC_LITERAL(14, 146, 12), // "setImagelist"
QT_MOC_LITERAL(15, 159, 15), // "QVector<QImage>"
QT_MOC_LITERAL(16, 175, 7) // "imglist"

    },
    "MCanvas\0paintEvent\0\0QPaintEvent*\0e\0"
    "wheelEvent\0QWheelEvent*\0event\0"
    "mousePressEvent\0QMouseEvent*\0"
    "mouseMoveEvent\0mouseReleaseEvent\0"
    "leaveEvent\0QEvent*\0setImagelist\0"
    "QVector<QImage>\0imglist"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MCanvas[] = {

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
       5,    1,   52,    2, 0x0a /* Public */,
       8,    1,   55,    2, 0x0a /* Public */,
      10,    1,   58,    2, 0x0a /* Public */,
      11,    1,   61,    2, 0x0a /* Public */,
      12,    1,   64,    2, 0x0a /* Public */,
      14,    1,   67,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void, 0x80000000 | 9,    4,
    QMetaType::Void, 0x80000000 | 9,    4,
    QMetaType::Void, 0x80000000 | 9,    4,
    QMetaType::Void, 0x80000000 | 13,    4,
    QMetaType::Void, 0x80000000 | 15,   16,

       0        // eod
};

void MCanvas::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MCanvas *_t = static_cast<MCanvas *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->paintEvent((*reinterpret_cast< QPaintEvent*(*)>(_a[1]))); break;
        case 1: _t->wheelEvent((*reinterpret_cast< QWheelEvent*(*)>(_a[1]))); break;
        case 2: _t->mousePressEvent((*reinterpret_cast< QMouseEvent*(*)>(_a[1]))); break;
        case 3: _t->mouseMoveEvent((*reinterpret_cast< QMouseEvent*(*)>(_a[1]))); break;
        case 4: _t->mouseReleaseEvent((*reinterpret_cast< QMouseEvent*(*)>(_a[1]))); break;
        case 5: _t->leaveEvent((*reinterpret_cast< QEvent*(*)>(_a[1]))); break;
        case 6: _t->setImagelist((*reinterpret_cast< QVector<QImage>(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 6:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QVector<QImage> >(); break;
            }
            break;
        }
    }
}

const QMetaObject MCanvas::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_MCanvas.data,
      qt_meta_data_MCanvas,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *MCanvas::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MCanvas::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MCanvas.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int MCanvas::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
