/****************************************************************************
** Meta object code from reading C++ file 'MwDemineur.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "MwDemineur.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'MwDemineur.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MwDemineur_t {
    QByteArrayData data[10];
    char stringdata0[87];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MwDemineur_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MwDemineur_t qt_meta_stringdata_MwDemineur = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MwDemineur"
QT_MOC_LITERAL(1, 11, 10), // "createGame"
QT_MOC_LITERAL(2, 22, 0), // ""
QT_MOC_LITERAL(3, 23, 9), // "closeGame"
QT_MOC_LITERAL(4, 33, 8), // "showTime"
QT_MOC_LITERAL(5, 42, 5), // "pause"
QT_MOC_LITERAL(6, 48, 5), // "start"
QT_MOC_LITERAL(7, 54, 7), // "restart"
QT_MOC_LITERAL(8, 62, 9), // "onTimeout"
QT_MOC_LITERAL(9, 72, 14) // "runHallOfFrame"

    },
    "MwDemineur\0createGame\0\0closeGame\0"
    "showTime\0pause\0start\0restart\0onTimeout\0"
    "runHallOfFrame"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MwDemineur[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   54,    2, 0x08 /* Private */,
       3,    0,   55,    2, 0x08 /* Private */,
       4,    0,   56,    2, 0x08 /* Private */,
       5,    0,   57,    2, 0x08 /* Private */,
       6,    0,   58,    2, 0x08 /* Private */,
       7,    0,   59,    2, 0x08 /* Private */,
       8,    0,   60,    2, 0x08 /* Private */,
       9,    0,   61,    2, 0x08 /* Private */,

 // slots: parameters
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

void MwDemineur::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MwDemineur *_t = static_cast<MwDemineur *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->createGame(); break;
        case 1: _t->closeGame(); break;
        case 2: _t->showTime(); break;
        case 3: _t->pause(); break;
        case 4: _t->start(); break;
        case 5: _t->restart(); break;
        case 6: _t->onTimeout(); break;
        case 7: _t->runHallOfFrame(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject MwDemineur::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_MwDemineur.data,
      qt_meta_data_MwDemineur,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *MwDemineur::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MwDemineur::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MwDemineur.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MwDemineur::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
