/****************************************************************************
** Meta object code from reading C++ file 'mytcp.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../mytcp.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mytcp.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_mytcp_t {
    QByteArrayData data[11];
    char stringdata0[171];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_mytcp_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_mytcp_t qt_meta_stringdata_mytcp = {
    {
QT_MOC_LITERAL(0, 0, 5), // "mytcp"
QT_MOC_LITERAL(1, 6, 8), // "ReadData"
QT_MOC_LITERAL(2, 15, 0), // ""
QT_MOC_LITERAL(3, 16, 9), // "ReadError"
QT_MOC_LITERAL(4, 26, 28), // "QAbstractSocket::SocketError"
QT_MOC_LITERAL(5, 55, 19), // "on_conRobot_clicked"
QT_MOC_LITERAL(6, 75, 16), // "on_conK4_clicked"
QT_MOC_LITERAL(7, 92, 18), // "on_btnSend_clicked"
QT_MOC_LITERAL(8, 111, 21), // "on_clearRobot_clicked"
QT_MOC_LITERAL(9, 133, 18), // "on_clearK4_clicked"
QT_MOC_LITERAL(10, 152, 18) // "on_autoCon_clicked"

    },
    "mytcp\0ReadData\0\0ReadError\0"
    "QAbstractSocket::SocketError\0"
    "on_conRobot_clicked\0on_conK4_clicked\0"
    "on_btnSend_clicked\0on_clearRobot_clicked\0"
    "on_clearK4_clicked\0on_autoCon_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_mytcp[] = {

 // content:
       8,       // revision
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
       3,    1,   55,    2, 0x08 /* Private */,
       5,    0,   58,    2, 0x08 /* Private */,
       6,    0,   59,    2, 0x08 /* Private */,
       7,    0,   60,    2, 0x08 /* Private */,
       8,    0,   61,    2, 0x08 /* Private */,
       9,    0,   62,    2, 0x08 /* Private */,
      10,    0,   63,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void mytcp::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<mytcp *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->ReadData(); break;
        case 1: _t->ReadError((*reinterpret_cast< QAbstractSocket::SocketError(*)>(_a[1]))); break;
        case 2: _t->on_conRobot_clicked(); break;
        case 3: _t->on_conK4_clicked(); break;
        case 4: _t->on_btnSend_clicked(); break;
        case 5: _t->on_clearRobot_clicked(); break;
        case 6: _t->on_clearK4_clicked(); break;
        case 7: _t->on_autoCon_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAbstractSocket::SocketError >(); break;
            }
            break;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject mytcp::staticMetaObject = { {
    &QMainWindow::staticMetaObject,
    qt_meta_stringdata_mytcp.data,
    qt_meta_data_mytcp,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *mytcp::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *mytcp::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_mytcp.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int mytcp::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
