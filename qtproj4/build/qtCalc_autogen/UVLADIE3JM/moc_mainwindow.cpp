/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../src/mainwindow.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.4.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
namespace {
struct qt_meta_stringdata_MainWindow_t {
    uint offsetsAndSizes[26];
    char stringdata0[11];
    char stringdata1[13];
    char stringdata2[1];
    char stringdata3[16];
    char stringdata4[14];
    char stringdata5[13];
    char stringdata6[13];
    char stringdata7[15];
    char stringdata8[12];
    char stringdata9[12];
    char stringdata10[16];
    char stringdata11[13];
    char stringdata12[10];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_MainWindow_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
        QT_MOC_LITERAL(0, 10),  // "MainWindow"
        QT_MOC_LITERAL(11, 12),  // "digitClicked"
        QT_MOC_LITERAL(24, 0),  // ""
        QT_MOC_LITERAL(25, 15),  // "operatorClicked"
        QT_MOC_LITERAL(41, 13),  // "memoryClicked"
        QT_MOC_LITERAL(55, 12),  // "equalClicked"
        QT_MOC_LITERAL(68, 12),  // "clearClicked"
        QT_MOC_LITERAL(81, 14),  // "percentClicked"
        QT_MOC_LITERAL(96, 11),  // "signClicked"
        QT_MOC_LITERAL(108, 11),  // "sqrtClicked"
        QT_MOC_LITERAL(120, 15),  // "convertToBinary"
        QT_MOC_LITERAL(136, 12),  // "convertToHex"
        QT_MOC_LITERAL(149, 9)   // "showAbout"
    },
    "MainWindow",
    "digitClicked",
    "",
    "operatorClicked",
    "memoryClicked",
    "equalClicked",
    "clearClicked",
    "percentClicked",
    "signClicked",
    "sqrtClicked",
    "convertToBinary",
    "convertToHex",
    "showAbout"
};
#undef QT_MOC_LITERAL
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_MainWindow[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   80,    2, 0x08,    1 /* Private */,
       3,    0,   81,    2, 0x08,    2 /* Private */,
       4,    0,   82,    2, 0x08,    3 /* Private */,
       5,    0,   83,    2, 0x08,    4 /* Private */,
       6,    0,   84,    2, 0x08,    5 /* Private */,
       7,    0,   85,    2, 0x08,    6 /* Private */,
       8,    0,   86,    2, 0x08,    7 /* Private */,
       9,    0,   87,    2, 0x08,    8 /* Private */,
      10,    0,   88,    2, 0x08,    9 /* Private */,
      11,    0,   89,    2, 0x08,   10 /* Private */,
      12,    0,   90,    2, 0x08,   11 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject MainWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_MainWindow.offsetsAndSizes,
    qt_meta_data_MainWindow,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_MainWindow_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<MainWindow, std::true_type>,
        // method 'digitClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'operatorClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'memoryClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'equalClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'clearClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'percentClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'signClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'sqrtClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'convertToBinary'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'convertToHex'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'showAbout'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MainWindow *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->digitClicked(); break;
        case 1: _t->operatorClicked(); break;
        case 2: _t->memoryClicked(); break;
        case 3: _t->equalClicked(); break;
        case 4: _t->clearClicked(); break;
        case 5: _t->percentClicked(); break;
        case 6: _t->signClicked(); break;
        case 7: _t->sqrtClicked(); break;
        case 8: _t->convertToBinary(); break;
        case 9: _t->convertToHex(); break;
        case 10: _t->showAbout(); break;
        default: ;
        }
    }
    (void)_a;
}

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
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 11;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
