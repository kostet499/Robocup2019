/****************************************************************************
** Meta object code from reading C++ file 'qhttpnetworkreply_p.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../git/src/network/access/qhttpnetworkreply_p.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qhttpnetworkreply_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QHttpNetworkReply_t {
    QByteArrayData data[32];
    char stringdata0[464];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QHttpNetworkReply_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QHttpNetworkReply_t qt_meta_stringdata_QHttpNetworkReply = {
    {
QT_MOC_LITERAL(0, 0, 17), // "QHttpNetworkReply"
QT_MOC_LITERAL(1, 18, 9), // "encrypted"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 9), // "sslErrors"
QT_MOC_LITERAL(4, 39, 16), // "QList<QSslError>"
QT_MOC_LITERAL(5, 56, 6), // "errors"
QT_MOC_LITERAL(6, 63, 34), // "preSharedKeyAuthenticationReq..."
QT_MOC_LITERAL(7, 98, 30), // "QSslPreSharedKeyAuthenticator*"
QT_MOC_LITERAL(8, 129, 13), // "authenticator"
QT_MOC_LITERAL(9, 143, 9), // "readyRead"
QT_MOC_LITERAL(10, 153, 8), // "finished"
QT_MOC_LITERAL(11, 162, 17), // "finishedWithError"
QT_MOC_LITERAL(12, 180, 27), // "QNetworkReply::NetworkError"
QT_MOC_LITERAL(13, 208, 9), // "errorCode"
QT_MOC_LITERAL(14, 218, 6), // "detail"
QT_MOC_LITERAL(15, 225, 13), // "headerChanged"
QT_MOC_LITERAL(16, 239, 16), // "dataReadProgress"
QT_MOC_LITERAL(17, 256, 4), // "done"
QT_MOC_LITERAL(18, 261, 5), // "total"
QT_MOC_LITERAL(19, 267, 16), // "dataSendProgress"
QT_MOC_LITERAL(20, 284, 16), // "cacheCredentials"
QT_MOC_LITERAL(21, 301, 19), // "QHttpNetworkRequest"
QT_MOC_LITERAL(22, 321, 7), // "request"
QT_MOC_LITERAL(23, 329, 15), // "QAuthenticator*"
QT_MOC_LITERAL(24, 345, 27), // "proxyAuthenticationRequired"
QT_MOC_LITERAL(25, 373, 13), // "QNetworkProxy"
QT_MOC_LITERAL(26, 387, 5), // "proxy"
QT_MOC_LITERAL(27, 393, 22), // "authenticationRequired"
QT_MOC_LITERAL(28, 416, 10), // "redirected"
QT_MOC_LITERAL(29, 427, 3), // "url"
QT_MOC_LITERAL(30, 431, 10), // "httpStatus"
QT_MOC_LITERAL(31, 442, 21) // "maxRedirectsRemaining"

    },
    "QHttpNetworkReply\0encrypted\0\0sslErrors\0"
    "QList<QSslError>\0errors\0"
    "preSharedKeyAuthenticationRequired\0"
    "QSslPreSharedKeyAuthenticator*\0"
    "authenticator\0readyRead\0finished\0"
    "finishedWithError\0QNetworkReply::NetworkError\0"
    "errorCode\0detail\0headerChanged\0"
    "dataReadProgress\0done\0total\0"
    "dataSendProgress\0cacheCredentials\0"
    "QHttpNetworkRequest\0request\0QAuthenticator*\0"
    "proxyAuthenticationRequired\0QNetworkProxy\0"
    "proxy\0authenticationRequired\0redirected\0"
    "url\0httpStatus\0maxRedirectsRemaining"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QHttpNetworkReply[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      14,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   84,    2, 0x06 /* Public */,
       3,    1,   85,    2, 0x06 /* Public */,
       6,    1,   88,    2, 0x06 /* Public */,
       9,    0,   91,    2, 0x06 /* Public */,
      10,    0,   92,    2, 0x06 /* Public */,
      11,    2,   93,    2, 0x06 /* Public */,
      11,    1,   98,    2, 0x26 /* Public | MethodCloned */,
      15,    0,  101,    2, 0x06 /* Public */,
      16,    2,  102,    2, 0x06 /* Public */,
      19,    2,  107,    2, 0x06 /* Public */,
      20,    2,  112,    2, 0x06 /* Public */,
      24,    2,  117,    2, 0x06 /* Public */,
      27,    2,  122,    2, 0x06 /* Public */,
      28,    3,  127,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void, 0x80000000 | 7,    8,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 12, QMetaType::QString,   13,   14,
    QMetaType::Void, 0x80000000 | 12,   13,
    QMetaType::Void,
    QMetaType::Void, QMetaType::LongLong, QMetaType::LongLong,   17,   18,
    QMetaType::Void, QMetaType::LongLong, QMetaType::LongLong,   17,   18,
    QMetaType::Void, 0x80000000 | 21, 0x80000000 | 23,   22,    8,
    QMetaType::Void, 0x80000000 | 25, 0x80000000 | 23,   26,    8,
    QMetaType::Void, 0x80000000 | 21, 0x80000000 | 23,   22,    8,
    QMetaType::Void, QMetaType::QUrl, QMetaType::Int, QMetaType::Int,   29,   30,   31,

       0        // eod
};

void QHttpNetworkReply::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QHttpNetworkReply *_t = static_cast<QHttpNetworkReply *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->encrypted(); break;
        case 1: _t->sslErrors((*reinterpret_cast< const QList<QSslError>(*)>(_a[1]))); break;
        case 2: _t->preSharedKeyAuthenticationRequired((*reinterpret_cast< QSslPreSharedKeyAuthenticator*(*)>(_a[1]))); break;
        case 3: _t->readyRead(); break;
        case 4: _t->finished(); break;
        case 5: _t->finishedWithError((*reinterpret_cast< QNetworkReply::NetworkError(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 6: _t->finishedWithError((*reinterpret_cast< QNetworkReply::NetworkError(*)>(_a[1]))); break;
        case 7: _t->headerChanged(); break;
        case 8: _t->dataReadProgress((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint64(*)>(_a[2]))); break;
        case 9: _t->dataSendProgress((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint64(*)>(_a[2]))); break;
        case 10: _t->cacheCredentials((*reinterpret_cast< const QHttpNetworkRequest(*)>(_a[1])),(*reinterpret_cast< QAuthenticator*(*)>(_a[2]))); break;
        case 11: _t->proxyAuthenticationRequired((*reinterpret_cast< const QNetworkProxy(*)>(_a[1])),(*reinterpret_cast< QAuthenticator*(*)>(_a[2]))); break;
        case 12: _t->authenticationRequired((*reinterpret_cast< const QHttpNetworkRequest(*)>(_a[1])),(*reinterpret_cast< QAuthenticator*(*)>(_a[2]))); break;
        case 13: _t->redirected((*reinterpret_cast< const QUrl(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<QSslError> >(); break;
            }
            break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSslPreSharedKeyAuthenticator* >(); break;
            }
            break;
        case 5:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkReply::NetworkError >(); break;
            }
            break;
        case 6:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkReply::NetworkError >(); break;
            }
            break;
        case 10:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QHttpNetworkRequest >(); break;
            }
            break;
        case 12:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QHttpNetworkRequest >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (QHttpNetworkReply::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QHttpNetworkReply::encrypted)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QHttpNetworkReply::*_t)(const QList<QSslError> & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QHttpNetworkReply::sslErrors)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (QHttpNetworkReply::*_t)(QSslPreSharedKeyAuthenticator * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QHttpNetworkReply::preSharedKeyAuthenticationRequired)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (QHttpNetworkReply::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QHttpNetworkReply::readyRead)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (QHttpNetworkReply::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QHttpNetworkReply::finished)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (QHttpNetworkReply::*_t)(QNetworkReply::NetworkError , const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QHttpNetworkReply::finishedWithError)) {
                *result = 5;
                return;
            }
        }
        {
            typedef void (QHttpNetworkReply::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QHttpNetworkReply::headerChanged)) {
                *result = 7;
                return;
            }
        }
        {
            typedef void (QHttpNetworkReply::*_t)(qint64 , qint64 );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QHttpNetworkReply::dataReadProgress)) {
                *result = 8;
                return;
            }
        }
        {
            typedef void (QHttpNetworkReply::*_t)(qint64 , qint64 );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QHttpNetworkReply::dataSendProgress)) {
                *result = 9;
                return;
            }
        }
        {
            typedef void (QHttpNetworkReply::*_t)(const QHttpNetworkRequest & , QAuthenticator * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QHttpNetworkReply::cacheCredentials)) {
                *result = 10;
                return;
            }
        }
        {
            typedef void (QHttpNetworkReply::*_t)(const QNetworkProxy & , QAuthenticator * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QHttpNetworkReply::proxyAuthenticationRequired)) {
                *result = 11;
                return;
            }
        }
        {
            typedef void (QHttpNetworkReply::*_t)(const QHttpNetworkRequest & , QAuthenticator * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QHttpNetworkReply::authenticationRequired)) {
                *result = 12;
                return;
            }
        }
        {
            typedef void (QHttpNetworkReply::*_t)(const QUrl & , int , int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QHttpNetworkReply::redirected)) {
                *result = 13;
                return;
            }
        }
    }
}

const QMetaObject QHttpNetworkReply::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QHttpNetworkReply.data,
      qt_meta_data_QHttpNetworkReply,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QHttpNetworkReply::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QHttpNetworkReply::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QHttpNetworkReply.stringdata0))
        return static_cast<void*>(const_cast< QHttpNetworkReply*>(this));
    if (!strcmp(_clname, "QHttpNetworkHeader"))
        return static_cast< QHttpNetworkHeader*>(const_cast< QHttpNetworkReply*>(this));
    return QObject::qt_metacast(_clname);
}

int QHttpNetworkReply::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    }
    return _id;
}

// SIGNAL 0
void QHttpNetworkReply::encrypted()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void QHttpNetworkReply::sslErrors(const QList<QSslError> & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QHttpNetworkReply::preSharedKeyAuthenticationRequired(QSslPreSharedKeyAuthenticator * _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void QHttpNetworkReply::readyRead()
{
    QMetaObject::activate(this, &staticMetaObject, 3, Q_NULLPTR);
}

// SIGNAL 4
void QHttpNetworkReply::finished()
{
    QMetaObject::activate(this, &staticMetaObject, 4, Q_NULLPTR);
}

// SIGNAL 5
void QHttpNetworkReply::finishedWithError(QNetworkReply::NetworkError _t1, const QString & _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 7
void QHttpNetworkReply::headerChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 7, Q_NULLPTR);
}

// SIGNAL 8
void QHttpNetworkReply::dataReadProgress(qint64 _t1, qint64 _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void QHttpNetworkReply::dataSendProgress(qint64 _t1, qint64 _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void QHttpNetworkReply::cacheCredentials(const QHttpNetworkRequest & _t1, QAuthenticator * _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}

// SIGNAL 11
void QHttpNetworkReply::proxyAuthenticationRequired(const QNetworkProxy & _t1, QAuthenticator * _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 11, _a);
}

// SIGNAL 12
void QHttpNetworkReply::authenticationRequired(const QHttpNetworkRequest & _t1, QAuthenticator * _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 12, _a);
}

// SIGNAL 13
void QHttpNetworkReply::redirected(const QUrl & _t1, int _t2, int _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 13, _a);
}
QT_END_MOC_NAMESPACE
