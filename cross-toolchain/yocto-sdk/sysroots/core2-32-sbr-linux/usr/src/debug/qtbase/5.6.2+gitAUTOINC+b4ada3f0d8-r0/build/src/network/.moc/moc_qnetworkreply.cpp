/****************************************************************************
** Meta object code from reading C++ file 'qnetworkreply.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../git/src/network/access/qnetworkreply.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qnetworkreply.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QNetworkReply_t {
    QByteArrayData data[57];
    char stringdata0[1080];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QNetworkReply_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QNetworkReply_t qt_meta_stringdata_QNetworkReply = {
    {
QT_MOC_LITERAL(0, 0, 13), // "QNetworkReply"
QT_MOC_LITERAL(1, 14, 15), // "metaDataChanged"
QT_MOC_LITERAL(2, 30, 0), // ""
QT_MOC_LITERAL(3, 31, 8), // "finished"
QT_MOC_LITERAL(4, 40, 5), // "error"
QT_MOC_LITERAL(5, 46, 27), // "QNetworkReply::NetworkError"
QT_MOC_LITERAL(6, 74, 9), // "encrypted"
QT_MOC_LITERAL(7, 84, 9), // "sslErrors"
QT_MOC_LITERAL(8, 94, 16), // "QList<QSslError>"
QT_MOC_LITERAL(9, 111, 6), // "errors"
QT_MOC_LITERAL(10, 118, 34), // "preSharedKeyAuthenticationReq..."
QT_MOC_LITERAL(11, 153, 30), // "QSslPreSharedKeyAuthenticator*"
QT_MOC_LITERAL(12, 184, 13), // "authenticator"
QT_MOC_LITERAL(13, 198, 10), // "redirected"
QT_MOC_LITERAL(14, 209, 3), // "url"
QT_MOC_LITERAL(15, 213, 14), // "uploadProgress"
QT_MOC_LITERAL(16, 228, 9), // "bytesSent"
QT_MOC_LITERAL(17, 238, 10), // "bytesTotal"
QT_MOC_LITERAL(18, 249, 16), // "downloadProgress"
QT_MOC_LITERAL(19, 266, 13), // "bytesReceived"
QT_MOC_LITERAL(20, 280, 5), // "abort"
QT_MOC_LITERAL(21, 286, 15), // "ignoreSslErrors"
QT_MOC_LITERAL(22, 302, 12), // "NetworkError"
QT_MOC_LITERAL(23, 315, 7), // "NoError"
QT_MOC_LITERAL(24, 323, 22), // "ConnectionRefusedError"
QT_MOC_LITERAL(25, 346, 21), // "RemoteHostClosedError"
QT_MOC_LITERAL(26, 368, 17), // "HostNotFoundError"
QT_MOC_LITERAL(27, 386, 12), // "TimeoutError"
QT_MOC_LITERAL(28, 399, 22), // "OperationCanceledError"
QT_MOC_LITERAL(29, 422, 23), // "SslHandshakeFailedError"
QT_MOC_LITERAL(30, 446, 28), // "TemporaryNetworkFailureError"
QT_MOC_LITERAL(31, 475, 25), // "NetworkSessionFailedError"
QT_MOC_LITERAL(32, 501, 32), // "BackgroundRequestNotAllowedError"
QT_MOC_LITERAL(33, 534, 21), // "TooManyRedirectsError"
QT_MOC_LITERAL(34, 556, 21), // "InsecureRedirectError"
QT_MOC_LITERAL(35, 578, 19), // "UnknownNetworkError"
QT_MOC_LITERAL(36, 598, 27), // "ProxyConnectionRefusedError"
QT_MOC_LITERAL(37, 626, 26), // "ProxyConnectionClosedError"
QT_MOC_LITERAL(38, 653, 18), // "ProxyNotFoundError"
QT_MOC_LITERAL(39, 672, 17), // "ProxyTimeoutError"
QT_MOC_LITERAL(40, 690, 32), // "ProxyAuthenticationRequiredError"
QT_MOC_LITERAL(41, 723, 17), // "UnknownProxyError"
QT_MOC_LITERAL(42, 741, 19), // "ContentAccessDenied"
QT_MOC_LITERAL(43, 761, 33), // "ContentOperationNotPermittedE..."
QT_MOC_LITERAL(44, 795, 20), // "ContentNotFoundError"
QT_MOC_LITERAL(45, 816, 27), // "AuthenticationRequiredError"
QT_MOC_LITERAL(46, 844, 18), // "ContentReSendError"
QT_MOC_LITERAL(47, 863, 20), // "ContentConflictError"
QT_MOC_LITERAL(48, 884, 16), // "ContentGoneError"
QT_MOC_LITERAL(49, 901, 19), // "UnknownContentError"
QT_MOC_LITERAL(50, 921, 20), // "ProtocolUnknownError"
QT_MOC_LITERAL(51, 942, 29), // "ProtocolInvalidOperationError"
QT_MOC_LITERAL(52, 972, 15), // "ProtocolFailure"
QT_MOC_LITERAL(53, 988, 19), // "InternalServerError"
QT_MOC_LITERAL(54, 1008, 28), // "OperationNotImplementedError"
QT_MOC_LITERAL(55, 1037, 23), // "ServiceUnavailableError"
QT_MOC_LITERAL(56, 1061, 18) // "UnknownServerError"

    },
    "QNetworkReply\0metaDataChanged\0\0finished\0"
    "error\0QNetworkReply::NetworkError\0"
    "encrypted\0sslErrors\0QList<QSslError>\0"
    "errors\0preSharedKeyAuthenticationRequired\0"
    "QSslPreSharedKeyAuthenticator*\0"
    "authenticator\0redirected\0url\0"
    "uploadProgress\0bytesSent\0bytesTotal\0"
    "downloadProgress\0bytesReceived\0abort\0"
    "ignoreSslErrors\0NetworkError\0NoError\0"
    "ConnectionRefusedError\0RemoteHostClosedError\0"
    "HostNotFoundError\0TimeoutError\0"
    "OperationCanceledError\0SslHandshakeFailedError\0"
    "TemporaryNetworkFailureError\0"
    "NetworkSessionFailedError\0"
    "BackgroundRequestNotAllowedError\0"
    "TooManyRedirectsError\0InsecureRedirectError\0"
    "UnknownNetworkError\0ProxyConnectionRefusedError\0"
    "ProxyConnectionClosedError\0"
    "ProxyNotFoundError\0ProxyTimeoutError\0"
    "ProxyAuthenticationRequiredError\0"
    "UnknownProxyError\0ContentAccessDenied\0"
    "ContentOperationNotPermittedError\0"
    "ContentNotFoundError\0AuthenticationRequiredError\0"
    "ContentReSendError\0ContentConflictError\0"
    "ContentGoneError\0UnknownContentError\0"
    "ProtocolUnknownError\0ProtocolInvalidOperationError\0"
    "ProtocolFailure\0InternalServerError\0"
    "OperationNotImplementedError\0"
    "ServiceUnavailableError\0UnknownServerError"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QNetworkReply[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       1,   96, // enums/sets
       0,    0, // constructors
       0,       // flags
       9,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   69,    2, 0x06 /* Public */,
       3,    0,   70,    2, 0x06 /* Public */,
       4,    1,   71,    2, 0x06 /* Public */,
       6,    0,   74,    2, 0x06 /* Public */,
       7,    1,   75,    2, 0x06 /* Public */,
      10,    1,   78,    2, 0x06 /* Public */,
      13,    1,   81,    2, 0x06 /* Public */,
      15,    2,   84,    2, 0x06 /* Public */,
      18,    2,   89,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      20,    0,   94,    2, 0x0a /* Public */,
      21,    0,   95,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 5,    2,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 8,    9,
    QMetaType::Void, 0x80000000 | 11,   12,
    QMetaType::Void, QMetaType::QUrl,   14,
    QMetaType::Void, QMetaType::LongLong, QMetaType::LongLong,   16,   17,
    QMetaType::Void, QMetaType::LongLong, QMetaType::LongLong,   19,   17,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,

 // enums: name, flags, count, data
      22, 0x0,   34,  100,

 // enum data: key, value
      23, uint(QNetworkReply::NoError),
      24, uint(QNetworkReply::ConnectionRefusedError),
      25, uint(QNetworkReply::RemoteHostClosedError),
      26, uint(QNetworkReply::HostNotFoundError),
      27, uint(QNetworkReply::TimeoutError),
      28, uint(QNetworkReply::OperationCanceledError),
      29, uint(QNetworkReply::SslHandshakeFailedError),
      30, uint(QNetworkReply::TemporaryNetworkFailureError),
      31, uint(QNetworkReply::NetworkSessionFailedError),
      32, uint(QNetworkReply::BackgroundRequestNotAllowedError),
      33, uint(QNetworkReply::TooManyRedirectsError),
      34, uint(QNetworkReply::InsecureRedirectError),
      35, uint(QNetworkReply::UnknownNetworkError),
      36, uint(QNetworkReply::ProxyConnectionRefusedError),
      37, uint(QNetworkReply::ProxyConnectionClosedError),
      38, uint(QNetworkReply::ProxyNotFoundError),
      39, uint(QNetworkReply::ProxyTimeoutError),
      40, uint(QNetworkReply::ProxyAuthenticationRequiredError),
      41, uint(QNetworkReply::UnknownProxyError),
      42, uint(QNetworkReply::ContentAccessDenied),
      43, uint(QNetworkReply::ContentOperationNotPermittedError),
      44, uint(QNetworkReply::ContentNotFoundError),
      45, uint(QNetworkReply::AuthenticationRequiredError),
      46, uint(QNetworkReply::ContentReSendError),
      47, uint(QNetworkReply::ContentConflictError),
      48, uint(QNetworkReply::ContentGoneError),
      49, uint(QNetworkReply::UnknownContentError),
      50, uint(QNetworkReply::ProtocolUnknownError),
      51, uint(QNetworkReply::ProtocolInvalidOperationError),
      52, uint(QNetworkReply::ProtocolFailure),
      53, uint(QNetworkReply::InternalServerError),
      54, uint(QNetworkReply::OperationNotImplementedError),
      55, uint(QNetworkReply::ServiceUnavailableError),
      56, uint(QNetworkReply::UnknownServerError),

       0        // eod
};

void QNetworkReply::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QNetworkReply *_t = static_cast<QNetworkReply *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->metaDataChanged(); break;
        case 1: _t->finished(); break;
        case 2: _t->error((*reinterpret_cast< QNetworkReply::NetworkError(*)>(_a[1]))); break;
        case 3: _t->encrypted(); break;
        case 4: _t->sslErrors((*reinterpret_cast< const QList<QSslError>(*)>(_a[1]))); break;
        case 5: _t->preSharedKeyAuthenticationRequired((*reinterpret_cast< QSslPreSharedKeyAuthenticator*(*)>(_a[1]))); break;
        case 6: _t->redirected((*reinterpret_cast< const QUrl(*)>(_a[1]))); break;
        case 7: _t->uploadProgress((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint64(*)>(_a[2]))); break;
        case 8: _t->downloadProgress((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint64(*)>(_a[2]))); break;
        case 9: _t->abort(); break;
        case 10: _t->ignoreSslErrors(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkReply::NetworkError >(); break;
            }
            break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<QSslError> >(); break;
            }
            break;
        case 5:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSslPreSharedKeyAuthenticator* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (QNetworkReply::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QNetworkReply::metaDataChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QNetworkReply::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QNetworkReply::finished)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (QNetworkReply::*_t)(QNetworkReply::NetworkError );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QNetworkReply::error)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (QNetworkReply::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QNetworkReply::encrypted)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (QNetworkReply::*_t)(const QList<QSslError> & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QNetworkReply::sslErrors)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (QNetworkReply::*_t)(QSslPreSharedKeyAuthenticator * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QNetworkReply::preSharedKeyAuthenticationRequired)) {
                *result = 5;
                return;
            }
        }
        {
            typedef void (QNetworkReply::*_t)(const QUrl & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QNetworkReply::redirected)) {
                *result = 6;
                return;
            }
        }
        {
            typedef void (QNetworkReply::*_t)(qint64 , qint64 );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QNetworkReply::uploadProgress)) {
                *result = 7;
                return;
            }
        }
        {
            typedef void (QNetworkReply::*_t)(qint64 , qint64 );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QNetworkReply::downloadProgress)) {
                *result = 8;
                return;
            }
        }
    }
}

const QMetaObject QNetworkReply::staticMetaObject = {
    { &QIODevice::staticMetaObject, qt_meta_stringdata_QNetworkReply.data,
      qt_meta_data_QNetworkReply,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QNetworkReply::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QNetworkReply::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QNetworkReply.stringdata0))
        return static_cast<void*>(const_cast< QNetworkReply*>(this));
    return QIODevice::qt_metacast(_clname);
}

int QNetworkReply::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QIODevice::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    }
    return _id;
}

// SIGNAL 0
void QNetworkReply::metaDataChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void QNetworkReply::finished()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}

// SIGNAL 2
void QNetworkReply::error(QNetworkReply::NetworkError _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void QNetworkReply::encrypted()
{
    QMetaObject::activate(this, &staticMetaObject, 3, Q_NULLPTR);
}

// SIGNAL 4
void QNetworkReply::sslErrors(const QList<QSslError> & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void QNetworkReply::preSharedKeyAuthenticationRequired(QSslPreSharedKeyAuthenticator * _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void QNetworkReply::redirected(const QUrl & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void QNetworkReply::uploadProgress(qint64 _t1, qint64 _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void QNetworkReply::downloadProgress(qint64 _t1, qint64 _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}
QT_END_MOC_NAMESPACE
