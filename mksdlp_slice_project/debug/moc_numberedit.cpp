/****************************************************************************
** Meta object code from reading C++ file 'numberedit.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../numberedit.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'numberedit.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_NumberEdit_t {
    QByteArrayData data[17];
    char stringdata0[163];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_NumberEdit_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_NumberEdit_t qt_meta_stringdata_NumberEdit = {
    {
QT_MOC_LITERAL(0, 0, 10), // "NumberEdit"
QT_MOC_LITERAL(1, 11, 14), // "edittextChange"
QT_MOC_LITERAL(2, 26, 0), // ""
QT_MOC_LITERAL(3, 27, 10), // "paintEvent"
QT_MOC_LITERAL(4, 38, 12), // "QPaintEvent*"
QT_MOC_LITERAL(5, 51, 5), // "event"
QT_MOC_LITERAL(6, 57, 15), // "mousePressEvent"
QT_MOC_LITERAL(7, 73, 12), // "QMouseEvent*"
QT_MOC_LITERAL(8, 86, 8), // "setTitle"
QT_MOC_LITERAL(9, 95, 5), // "title"
QT_MOC_LITERAL(10, 101, 10), // "setNumText"
QT_MOC_LITERAL(11, 112, 7), // "numtext"
QT_MOC_LITERAL(12, 120, 9), // "judgetext"
QT_MOC_LITERAL(13, 130, 11), // "setInterval"
QT_MOC_LITERAL(14, 142, 6), // "interv"
QT_MOC_LITERAL(15, 149, 11), // "needDegreen"
QT_MOC_LITERAL(16, 161, 1) // "b"

    },
    "NumberEdit\0edittextChange\0\0paintEvent\0"
    "QPaintEvent*\0event\0mousePressEvent\0"
    "QMouseEvent*\0setTitle\0title\0setNumText\0"
    "numtext\0judgetext\0setInterval\0interv\0"
    "needDegreen\0b"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_NumberEdit[] = {

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
      10,    1,   66,    2, 0x0a /* Public */,
      12,    0,   69,    2, 0x0a /* Public */,
      13,    1,   70,    2, 0x0a /* Public */,
      15,    1,   73,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    2,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void, 0x80000000 | 7,    5,
    QMetaType::Void, QMetaType::QString,    9,
    QMetaType::Void, QMetaType::QString,   11,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Float,   14,
    QMetaType::Void, QMetaType::Bool,   16,

       0        // eod
};

void NumberEdit::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        NumberEdit *_t = static_cast<NumberEdit *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->edittextChange((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->paintEvent((*reinterpret_cast< QPaintEvent*(*)>(_a[1]))); break;
        case 2: _t->mousePressEvent((*reinterpret_cast< QMouseEvent*(*)>(_a[1]))); break;
        case 3: _t->setTitle((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 4: _t->setNumText((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 5: _t->judgetext(); break;
        case 6: _t->setInterval((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 7: _t->needDegreen((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (NumberEdit::*_t)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&NumberEdit::edittextChange)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject NumberEdit::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_NumberEdit.data,
      qt_meta_data_NumberEdit,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *NumberEdit::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *NumberEdit::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_NumberEdit.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int NumberEdit::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void NumberEdit::edittextChange(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
