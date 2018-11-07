/****************************************************************************
** Meta object code from reading C++ file 'qsslsocket.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../git/src/network/ssl/qsslsocket.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qsslsocket.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QSslSocket_t {
    QByteArrayData data[32];
    char stringdata0[546];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QSslSocket_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QSslSocket_t qt_meta_stringdata_QSslSocket = {
    {
QT_MOC_LITERAL(0, 0, 10), // "QSslSocket"
QT_MOC_LITERAL(1, 11, 9), // "encrypted"
QT_MOC_LITERAL(2, 21, 0), // ""
QT_MOC_LITERAL(3, 22, 15), // "peerVerifyError"
QT_MOC_LITERAL(4, 38, 9), // "QSslError"
QT_MOC_LITERAL(5, 48, 5), // "error"
QT_MOC_LITERAL(6, 54, 9), // "sslErrors"
QT_MOC_LITERAL(7, 64, 16), // "QList<QSslError>"
QT_MOC_LITERAL(8, 81, 6), // "errors"
QT_MOC_LITERAL(9, 88, 11), // "modeChanged"
QT_MOC_LITERAL(10, 100, 19), // "QSslSocket::SslMode"
QT_MOC_LITERAL(11, 120, 7), // "newMode"
QT_MOC_LITERAL(12, 128, 21), // "encryptedBytesWritten"
QT_MOC_LITERAL(13, 150, 10), // "totalBytes"
QT_MOC_LITERAL(14, 161, 34), // "preSharedKeyAuthenticationReq..."
QT_MOC_LITERAL(15, 196, 30), // "QSslPreSharedKeyAuthenticator*"
QT_MOC_LITERAL(16, 227, 13), // "authenticator"
QT_MOC_LITERAL(17, 241, 21), // "startClientEncryption"
QT_MOC_LITERAL(18, 263, 21), // "startServerEncryption"
QT_MOC_LITERAL(19, 285, 15), // "ignoreSslErrors"
QT_MOC_LITERAL(20, 301, 16), // "_q_connectedSlot"
QT_MOC_LITERAL(21, 318, 16), // "_q_hostFoundSlot"
QT_MOC_LITERAL(22, 335, 19), // "_q_disconnectedSlot"
QT_MOC_LITERAL(23, 355, 19), // "_q_stateChangedSlot"
QT_MOC_LITERAL(24, 375, 28), // "QAbstractSocket::SocketState"
QT_MOC_LITERAL(25, 404, 12), // "_q_errorSlot"
QT_MOC_LITERAL(26, 417, 28), // "QAbstractSocket::SocketError"
QT_MOC_LITERAL(27, 446, 16), // "_q_readyReadSlot"
QT_MOC_LITERAL(28, 463, 19), // "_q_bytesWrittenSlot"
QT_MOC_LITERAL(29, 483, 19), // "_q_flushWriteBuffer"
QT_MOC_LITERAL(30, 503, 18), // "_q_flushReadBuffer"
QT_MOC_LITERAL(31, 522, 23) // "_q_resumeImplementation"

    },
    "QSslSocket\0encrypted\0\0peerVerifyError\0"
    "QSslError\0error\0sslErrors\0QList<QSslError>\0"
    "errors\0modeChanged\0QSslSocket::SslMode\0"
    "newMode\0encryptedBytesWritten\0totalBytes\0"
    "preSharedKeyAuthenticationRequired\0"
    "QSslPreSharedKeyAuthenticator*\0"
    "authenticator\0startClientEncryption\0"
    "startServerEncryption\0ignoreSslErrors\0"
    "_q_connectedSlot\0_q_hostFoundSlot\0"
    "_q_disconnectedSlot\0_q_stateChangedSlot\0"
    "QAbstractSocket::SocketState\0_q_errorSlot\0"
    "QAbstractSocket::SocketError\0"
    "_q_readyReadSlot\0_q_bytesWrittenSlot\0"
    "_q_flushWriteBuffer\0_q_flushReadBuffer\0"
    "_q_resumeImplementation"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QSslSocket[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      19,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,  109,    2, 0x06 /* Public */,
       3,    1,  110,    2, 0x06 /* Public */,
       6,    1,  113,    2, 0x06 /* Public */,
       9,    1,  116,    2, 0x06 /* Public */,
      12,    1,  119,    2, 0x06 /* Public */,
      14,    1,  122,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      17,    0,  125,    2, 0x0a /* Public */,
      18,    0,  126,    2, 0x0a /* Public */,
      19,    0,  127,    2, 0x0a /* Public */,
      20,    0,  128,    2, 0x08 /* Private */,
      21,    0,  129,    2, 0x08 /* Private */,
      22,    0,  130,    2, 0x08 /* Private */,
      23,    1,  131,    2, 0x08 /* Private */,
      25,    1,  134,    2, 0x08 /* Private */,
      27,    0,  137,    2, 0x08 /* Private */,
      28,    1,  138,    2, 0x08 /* Private */,
      29,    0,  141,    2, 0x08 /* Private */,
      30,    0,  142,    2, 0x08 /* Private */,
      31,    0,  143,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void, 0x80000000 | 7,    8,
    QMetaType::Void, 0x80000000 | 10,   11,
    QMetaType::Void, QMetaType::LongLong,   13,
    QMetaType::Void, 0x80000000 | 15,   16,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 24,    2,
    QMetaType::Void, 0x80000000 | 26,    2,
    QMetaType::Void,
    QMetaType::Void, QMetaType::LongLong,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void QSslSocket::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QSslSocket *_t = static_cast<QSslSocket *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->encrypted(); break;
        case 1: _t->peerVerifyError((*reinterpret_cast< const QSslError(*)>(_a[1]))); break;
        case 2: _t->sslErrors((*reinterpret_cast< const QList<QSslError>(*)>(_a[1]))); break;
        case 3: _t->modeChanged((*reinterpret_cast< QSslSocket::SslMode(*)>(_a[1]))); break;
        case 4: _t->encryptedBytesWritten((*reinterpret_cast< qint64(*)>(_a[1]))); break;
        case 5: _t->preSharedKeyAuthenticationRequired((*reinterpret_cast< QSslPreSharedKeyAuthenticator*(*)>(_a[1]))); break;
        case 6: _t->startClientEncryption(); break;
        case 7: _t->startServerEncryption(); break;
        case 8: _t->ignoreSslErrors(); break;
        case 9: _t->d_func()->_q_connectedSlot(); break;
        case 10: _t->d_func()->_q_hostFoundSlot(); break;
        case 11: _t->d_func()->_q_disconnectedSlot(); break;
        case 12: _t->d_func()->_q_stateChangedSlot((*reinterpret_cast< QAbstractSocket::SocketState(*)>(_a[1]))); break;
        case 13: _t->d_func()->_q_errorSlot((*reinterpret_cast< QAbstractSocket::SocketError(*)>(_a[1]))); break;
        case 14: _t->d_func()->_q_readyReadSlot(); break;
        case 15: _t->d_func()->_q_bytesWrittenSlot((*reinterpret_cast< qint64(*)>(_a[1]))); break;
        case 16: _t->d_func()->_q_flushWriteBuffer(); break;
        case 17: _t->d_func()->_q_flushReadBuffer(); break;
        case 18: _t->d_func()->_q_resumeImplementation(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<QSslError> >(); break;
            }
            break;
        case 12:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAbstractSocket::SocketState >(); break;
            }
            break;
        case 13:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAbstractSocket::SocketError >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (QSslSocket::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QSslSocket::encrypted)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QSslSocket::*_t)(const QSslError & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QSslSocket::peerVerifyError)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (QSslSocket::*_t)(const QList<QSslError> & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QSslSocket::sslErrors)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (QSslSocket::*_t)(QSslSocket::SslMode );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QSslSocket::modeChanged)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (QSslSocket::*_t)(qint64 );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QSslSocket::encryptedBytesWritten)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (QSslSocket::*_t)(QSslPreSharedKeyAuthenticator * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QSslSocket::preSharedKeyAuthenticationRequired)) {
                *result = 5;
                return;
            }
        }
    }
}

const QMetaObject QSslSocket::staticMetaObject = {
    { &QTcpSocket::staticMetaObject, qt_meta_stringdata_QSslSocket.data,
      qt_meta_data_QSslSocket,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QSslSocket::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QSslSocket::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QSslSocket.stringdata0))
        return static_cast<void*>(const_cast< QSslSocket*>(this));
    return QTcpSocket::qt_metacast(_clname);
}

int QSslSocket::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QTcpSocket::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 19)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 19;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 19)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 19;
    }
    return _id;
}

// SIGNAL 0
void QSslSocket::encrypted()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void QSslSocket::peerVerifyError(const QSslError & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QSslSocket::sslErrors(const QList<QSslError> & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void QSslSocket::modeChanged(QSslSocket::SslMode _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void QSslSocket::encryptedBytesWritten(qint64 _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void QSslSocket::preSharedKeyAuthenticationRequired(QSslPreSharedKeyAuthenticator * _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}
QT_END_MOC_NAMESPACE
