/****************************************************************************
** Meta object code from reading C++ file 'mdialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../mdialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mdialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MDialog_t {
    QByteArrayData data[26];
    char stringdata0[231];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MDialog_t qt_meta_stringdata_MDialog = {
    {
QT_MOC_LITERAL(0, 0, 7), // "MDialog"
QT_MOC_LITERAL(1, 8, 8), // "OnCancel"
QT_MOC_LITERAL(2, 17, 0), // ""
QT_MOC_LITERAL(3, 18, 7), // "tbClose"
QT_MOC_LITERAL(4, 26, 10), // "tbMinimize"
QT_MOC_LITERAL(5, 37, 6), // "tbMove"
QT_MOC_LITERAL(6, 44, 1), // "p"
QT_MOC_LITERAL(7, 46, 8), // "btnPress"
QT_MOC_LITERAL(8, 55, 10), // "btnRelease"
QT_MOC_LITERAL(9, 66, 11), // "setProgress"
QT_MOC_LITERAL(10, 78, 8), // "progress"
QT_MOC_LITERAL(11, 87, 11), // "setDragText"
QT_MOC_LITERAL(12, 99, 9), // "thickness"
QT_MOC_LITERAL(13, 109, 10), // "exposetime"
QT_MOC_LITERAL(14, 120, 8), // "offlight"
QT_MOC_LITERAL(15, 129, 9), // "botexpose"
QT_MOC_LITERAL(16, 139, 8), // "botcount"
QT_MOC_LITERAL(17, 148, 10), // "paintEvent"
QT_MOC_LITERAL(18, 159, 12), // "QPaintEvent*"
QT_MOC_LITERAL(19, 172, 5), // "event"
QT_MOC_LITERAL(20, 178, 13), // "MSliderChange"
QT_MOC_LITERAL(21, 192, 5), // "value"
QT_MOC_LITERAL(22, 198, 8), // "setLayer"
QT_MOC_LITERAL(23, 207, 5), // "layer"
QT_MOC_LITERAL(24, 213, 12), // "setLabelText"
QT_MOC_LITERAL(25, 226, 4) // "text"

    },
    "MDialog\0OnCancel\0\0tbClose\0tbMinimize\0"
    "tbMove\0p\0btnPress\0btnRelease\0setProgress\0"
    "progress\0setDragText\0thickness\0"
    "exposetime\0offlight\0botexpose\0botcount\0"
    "paintEvent\0QPaintEvent*\0event\0"
    "MSliderChange\0value\0setLayer\0layer\0"
    "setLabelText\0text"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MDialog[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   74,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,   75,    2, 0x0a /* Public */,
       4,    0,   76,    2, 0x0a /* Public */,
       5,    1,   77,    2, 0x0a /* Public */,
       7,    0,   80,    2, 0x0a /* Public */,
       8,    0,   81,    2, 0x0a /* Public */,
       9,    1,   82,    2, 0x0a /* Public */,
      11,    5,   85,    2, 0x0a /* Public */,
      17,    1,   96,    2, 0x0a /* Public */,
      20,    1,   99,    2, 0x0a /* Public */,
      22,    1,  102,    2, 0x0a /* Public */,
      24,    1,  105,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QPoint,    6,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   10,
    QMetaType::Void, QMetaType::Float, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Int,   12,   13,   14,   15,   16,
    QMetaType::Void, 0x80000000 | 18,   19,
    QMetaType::Void, QMetaType::Int,   21,
    QMetaType::Void, QMetaType::QString,   23,
    QMetaType::Void, QMetaType::QString,   25,

       0        // eod
};

void MDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MDialog *_t = static_cast<MDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->OnCancel(); break;
        case 1: _t->tbClose(); break;
        case 2: _t->tbMinimize(); break;
        case 3: _t->tbMove((*reinterpret_cast< QPoint(*)>(_a[1]))); break;
        case 4: _t->btnPress(); break;
        case 5: _t->btnRelease(); break;
        case 6: _t->setProgress((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->setDragText((*reinterpret_cast< float(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4])),(*reinterpret_cast< int(*)>(_a[5]))); break;
        case 8: _t->paintEvent((*reinterpret_cast< QPaintEvent*(*)>(_a[1]))); break;
        case 9: _t->MSliderChange((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 10: _t->setLayer((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 11: _t->setLabelText((*reinterpret_cast< QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (MDialog::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MDialog::OnCancel)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject MDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_MDialog.data,
      qt_meta_data_MDialog,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *MDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MDialog.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int MDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 12;
    }
    return _id;
}

// SIGNAL 0
void MDialog::OnCancel()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
