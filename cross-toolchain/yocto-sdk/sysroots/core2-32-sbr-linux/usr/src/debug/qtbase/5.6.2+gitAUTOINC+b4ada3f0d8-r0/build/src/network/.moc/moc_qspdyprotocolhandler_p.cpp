/****************************************************************************
** Meta object code from reading C++ file 'qspdyprotocolhandler_p.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../git/src/network/access/qspdyprotocolhandler_p.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qspdyprotocolhandler_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QSpdyProtocolHandler_t {
    QByteArrayData data[7];
    char stringdata0[106];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QSpdyProtocolHandler_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QSpdyProtocolHandler_t qt_meta_stringdata_QSpdyProtocolHandler = {
    {
QT_MOC_LITERAL(0, 0, 20), // "QSpdyProtocolHandler"
QT_MOC_LITERAL(1, 21, 22), // "_q_uploadDataReadyRead"
QT_MOC_LITERAL(2, 44, 0), // ""
QT_MOC_LITERAL(3, 45, 17), // "_q_replyDestroyed"
QT_MOC_LITERAL(4, 63, 17), // "sendWINDOW_UPDATE"
QT_MOC_LITERAL(5, 81, 8), // "streamID"
QT_MOC_LITERAL(6, 90, 15) // "deltaWindowSize"

    },
    "QSpdyProtocolHandler\0_q_uploadDataReadyRead\0"
    "\0_q_replyDestroyed\0sendWINDOW_UPDATE\0"
    "streamID\0deltaWindowSize"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QSpdyProtocolHandler[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   29,    2, 0x08 /* Private */,
       3,    1,   30,    2, 0x08 /* Private */,

 // methods: name, argc, parameters, tag, flags
       4,    2,   33,    2, 0x00 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QObjectStar,    2,

 // methods: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::UInt,    5,    6,

       0        // eod
};

void QSpdyProtocolHandler::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QSpdyProtocolHandler *_t = static_cast<QSpdyProtocolHandler *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->_q_uploadDataReadyRead(); break;
        case 1: _t->_q_replyDestroyed((*reinterpret_cast< QObject*(*)>(_a[1]))); break;
        case 2: _t->sendWINDOW_UPDATE((*reinterpret_cast< qint32(*)>(_a[1])),(*reinterpret_cast< quint32(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObject QSpdyProtocolHandler::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QSpdyProtocolHandler.data,
      qt_meta_data_QSpdyProtocolHandler,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QSpdyProtocolHandler::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QSpdyProtocolHandler::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QSpdyProtocolHandler.stringdata0))
        return static_cast<void*>(const_cast< QSpdyProtocolHandler*>(this));
    if (!strcmp(_clname, "QAbstractProtocolHandler"))
        return static_cast< QAbstractProtocolHandler*>(const_cast< QSpdyProtocolHandler*>(this));
    return QObject::qt_metacast(_clname);
}

int QSpdyProtocolHandler::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
