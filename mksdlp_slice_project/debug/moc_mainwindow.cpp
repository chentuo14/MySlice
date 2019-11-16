/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../mainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MainWindow_t {
    QByteArrayData data[25];
    char stringdata0[255];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MainWindow"
QT_MOC_LITERAL(1, 11, 9), // "loadscene"
QT_MOC_LITERAL(2, 21, 0), // ""
QT_MOC_LITERAL(3, 22, 7), // "savedlp"
QT_MOC_LITERAL(4, 30, 13), // "CancelSlicing"
QT_MOC_LITERAL(5, 44, 11), // "showPreView"
QT_MOC_LITERAL(6, 56, 7), // "savestl"
QT_MOC_LITERAL(7, 64, 7), // "loadZip"
QT_MOC_LITERAL(8, 72, 8), // "filename"
QT_MOC_LITERAL(9, 81, 7), // "loadCWS"
QT_MOC_LITERAL(10, 89, 9), // "showToast"
QT_MOC_LITERAL(11, 99, 1), // "t"
QT_MOC_LITERAL(12, 101, 2), // "tm"
QT_MOC_LITERAL(13, 104, 15), // "showSliceFinish"
QT_MOC_LITERAL(14, 120, 14), // "UpdateLanguage"
QT_MOC_LITERAL(15, 135, 16), // "OutputScreenShot"
QT_MOC_LITERAL(16, 152, 12), // "QDataStream&"
QT_MOC_LITERAL(17, 165, 3), // "out"
QT_MOC_LITERAL(18, 169, 9), // "addmodels"
QT_MOC_LITERAL(19, 179, 9), // "copyModel"
QT_MOC_LITERAL(20, 189, 3), // "key"
QT_MOC_LITERAL(21, 193, 8), // "position"
QT_MOC_LITERAL(22, 202, 11), // "closedialog"
QT_MOC_LITERAL(23, 214, 16), // "getModelInstance"
QT_MOC_LITERAL(24, 231, 23) // "std::vector<ModelData*>"

    },
    "MainWindow\0loadscene\0\0savedlp\0"
    "CancelSlicing\0showPreView\0savestl\0"
    "loadZip\0filename\0loadCWS\0showToast\0t\0"
    "tm\0showSliceFinish\0UpdateLanguage\0"
    "OutputScreenShot\0QDataStream&\0out\0"
    "addmodels\0copyModel\0key\0position\0"
    "closedialog\0getModelInstance\0"
    "std::vector<ModelData*>"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      15,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   89,    2, 0x0a /* Public */,
       3,    0,   90,    2, 0x0a /* Public */,
       4,    0,   91,    2, 0x0a /* Public */,
       5,    0,   92,    2, 0x0a /* Public */,
       6,    0,   93,    2, 0x0a /* Public */,
       7,    1,   94,    2, 0x0a /* Public */,
       9,    1,   97,    2, 0x0a /* Public */,
      10,    2,  100,    2, 0x0a /* Public */,
      13,    0,  105,    2, 0x0a /* Public */,
      14,    0,  106,    2, 0x0a /* Public */,
      15,    1,  107,    2, 0x0a /* Public */,
      18,    0,  110,    2, 0x0a /* Public */,
      19,    2,  111,    2, 0x0a /* Public */,
      22,    0,  116,    2, 0x0a /* Public */,
      23,    0,  117,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    8,
    QMetaType::Void, QMetaType::QString,    8,
    QMetaType::Void, QMetaType::QString, QMetaType::Int,   11,   12,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 16,   17,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::QVector3D,   20,   21,
    QMetaType::Void,
    0x80000000 | 24,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MainWindow *_t = static_cast<MainWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->loadscene(); break;
        case 1: _t->savedlp(); break;
        case 2: _t->CancelSlicing(); break;
        case 3: _t->showPreView(); break;
        case 4: _t->savestl(); break;
        case 5: _t->loadZip((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 6: _t->loadCWS((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 7: _t->showToast((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 8: _t->showSliceFinish(); break;
        case 9: _t->UpdateLanguage(); break;
        case 10: _t->OutputScreenShot((*reinterpret_cast< QDataStream(*)>(_a[1]))); break;
        case 11: _t->addmodels(); break;
        case 12: _t->copyModel((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QVector3D(*)>(_a[2]))); break;
        case 13: _t->closedialog(); break;
        case 14: { std::vector<ModelData*> _r = _t->getModelInstance();
            if (_a[0]) *reinterpret_cast< std::vector<ModelData*>*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    }
}

const QMetaObject MainWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_MainWindow.data,
      qt_meta_data_MainWindow,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 15)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 15;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
