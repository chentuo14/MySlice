/****************************************************************************
** Meta object code from reading C++ file 'rightpanel.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../rightpanel.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'rightpanel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_RightPanel_t {
    QByteArrayData data[21];
    char stringdata0[228];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_RightPanel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_RightPanel_t qt_meta_stringdata_RightPanel = {
    {
QT_MOC_LITERAL(0, 0, 10), // "RightPanel"
QT_MOC_LITERAL(1, 11, 10), // "ChangeMode"
QT_MOC_LITERAL(2, 22, 0), // ""
QT_MOC_LITERAL(3, 23, 4), // "mode"
QT_MOC_LITERAL(4, 28, 10), // "ChangeType"
QT_MOC_LITERAL(5, 39, 7), // "suptype"
QT_MOC_LITERAL(6, 47, 11), // "ChangeShape"
QT_MOC_LITERAL(7, 59, 5), // "shape"
QT_MOC_LITERAL(8, 65, 15), // "OnModelSelected"
QT_MOC_LITERAL(9, 81, 2), // "id"
QT_MOC_LITERAL(10, 84, 9), // "judgeText"
QT_MOC_LITERAL(11, 94, 12), // "mdsizeChange"
QT_MOC_LITERAL(12, 107, 8), // "resetAll"
QT_MOC_LITERAL(13, 116, 10), // "testSignal"
QT_MOC_LITERAL(14, 127, 12), // "OnModeChange"
QT_MOC_LITERAL(15, 140, 15), // "thicknessChange"
QT_MOC_LITERAL(16, 156, 17), // "SupportTypeChange"
QT_MOC_LITERAL(17, 174, 2), // "st"
QT_MOC_LITERAL(18, 177, 18), // "SupportShapeChange"
QT_MOC_LITERAL(19, 196, 15), // "SliceTypeChange"
QT_MOC_LITERAL(20, 212, 15) // "autoSizeClicked"

    },
    "RightPanel\0ChangeMode\0\0mode\0ChangeType\0"
    "suptype\0ChangeShape\0shape\0OnModelSelected\0"
    "id\0judgeText\0mdsizeChange\0resetAll\0"
    "testSignal\0OnModeChange\0thicknessChange\0"
    "SupportTypeChange\0st\0SupportShapeChange\0"
    "SliceTypeChange\0autoSizeClicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_RightPanel[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   84,    2, 0x06 /* Public */,
       4,    1,   87,    2, 0x06 /* Public */,
       6,    1,   90,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       8,    1,   93,    2, 0x0a /* Public */,
      10,    0,   96,    2, 0x0a /* Public */,
      11,    0,   97,    2, 0x0a /* Public */,
      12,    0,   98,    2, 0x0a /* Public */,
      13,    0,   99,    2, 0x0a /* Public */,
      14,    0,  100,    2, 0x0a /* Public */,
      15,    0,  101,    2, 0x0a /* Public */,
      16,    1,  102,    2, 0x0a /* Public */,
      18,    1,  105,    2, 0x0a /* Public */,
      19,    1,  108,    2, 0x0a /* Public */,
      20,    0,  111,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void, QMetaType::QString,    7,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    9,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   17,
    QMetaType::Void, QMetaType::Int,   17,
    QMetaType::Void, QMetaType::Int,   17,
    QMetaType::Void,

       0        // eod
};

void RightPanel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        RightPanel *_t = static_cast<RightPanel *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->ChangeMode((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->ChangeType((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->ChangeShape((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 3: _t->OnModelSelected((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->judgeText(); break;
        case 5: _t->mdsizeChange(); break;
        case 6: _t->resetAll(); break;
        case 7: _t->testSignal(); break;
        case 8: _t->OnModeChange(); break;
        case 9: _t->thicknessChange(); break;
        case 10: _t->SupportTypeChange((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 11: _t->SupportShapeChange((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 12: _t->SliceTypeChange((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 13: _t->autoSizeClicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (RightPanel::*_t)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RightPanel::ChangeMode)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (RightPanel::*_t)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RightPanel::ChangeType)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (RightPanel::*_t)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RightPanel::ChangeShape)) {
                *result = 2;
                return;
            }
        }
    }
}

const QMetaObject RightPanel::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_RightPanel.data,
      qt_meta_data_RightPanel,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *RightPanel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *RightPanel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_RightPanel.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int RightPanel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 14)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 14;
    }
    return _id;
}

// SIGNAL 0
void RightPanel::ChangeMode(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void RightPanel::ChangeType(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void RightPanel::ChangeShape(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
