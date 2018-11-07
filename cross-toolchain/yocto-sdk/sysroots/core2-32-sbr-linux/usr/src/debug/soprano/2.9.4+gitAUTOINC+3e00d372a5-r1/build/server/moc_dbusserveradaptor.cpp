/****************************************************************************
** Meta object code from reading C++ file 'dbusserveradaptor.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../git/server/dbus/dbusserveradaptor.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'dbusserveradaptor.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_Soprano__Server__DBusServerAdaptor_t {
    QByteArrayData data[11];
    char stringdata0[589];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Soprano__Server__DBusServerAdaptor_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Soprano__Server__DBusServerAdaptor_t qt_meta_stringdata_Soprano__Server__DBusServerAdaptor = {
    {
QT_MOC_LITERAL(0, 0, 34), // "Soprano::Server::DBusServerAd..."
QT_MOC_LITERAL(1, 35, 15), // "D-Bus Interface"
QT_MOC_LITERAL(2, 51, 18), // "org.soprano.Server"
QT_MOC_LITERAL(3, 70, 19), // "D-Bus Introspection"
QT_MOC_LITERAL(4, 90, 445), // "  <interface name=\"org.sopra..."
QT_MOC_LITERAL(5, 492, 9), // "allModels"
QT_MOC_LITERAL(6, 502, 0), // ""
QT_MOC_LITERAL(7, 503, 12), // "QDBusMessage"
QT_MOC_LITERAL(8, 516, 11), // "createModel"
QT_MOC_LITERAL(9, 528, 4), // "name"
QT_MOC_LITERAL(10, 533, 11) // "removeModel"

    },
    "Soprano::Server::DBusServerAdaptor\0"
    "D-Bus Interface\0org.soprano.Server\0"
    "D-Bus Introspection\0"
    "  <interface name=\"org.soprano.Server\" >\n    <method name=\"createM"
    "odel\" >\n      <arg direction=\"in\" type=\"s\" name=\"name\" />\n   "
    "   <arg direction=\"out\" type=\"s\" name=\"model\" />\n    </method>\n"
    "    <method name=\"removeModel\" >\n      <arg direction=\"in\" type=\""
    "s\" name=\"name\" />\n    </method>\n    <method name=\"allModels\" >\n"
    "      <arg direction=\"out\" type=\"as\" name=\"models\" />\n    </met"
    "hod>\n  </interface>\n\0"
    "allModels\0\0QDBusMessage\0createModel\0"
    "name\0removeModel"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Soprano__Server__DBusServerAdaptor[] = {

 // content:
       7,       // revision
       0,       // classname
       2,   14, // classinfo
       3,   18, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // classinfo: key, value
       1,    2,
       3,    4,

 // slots: name, argc, parameters, tag, flags
       5,    1,   33,    6, 0x0a /* Public */,
       8,    2,   36,    6, 0x0a /* Public */,
      10,    2,   41,    6, 0x0a /* Public */,

 // slots: parameters
    QMetaType::QStringList, 0x80000000 | 7,    6,
    QMetaType::QString, QMetaType::QString, 0x80000000 | 7,    9,    6,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 7,    9,    6,

       0        // eod
};

void Soprano::Server::DBusServerAdaptor::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        DBusServerAdaptor *_t = static_cast<DBusServerAdaptor *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: { QStringList _r = _t->allModels((*reinterpret_cast< const QDBusMessage(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QStringList*>(_a[0]) = _r; }  break;
        case 1: { QString _r = _t->createModel((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QDBusMessage(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 2: _t->removeModel((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QDBusMessage(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QDBusMessage >(); break;
            }
            break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QDBusMessage >(); break;
            }
            break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QDBusMessage >(); break;
            }
            break;
        }
    }
}

const QMetaObject Soprano::Server::DBusServerAdaptor::staticMetaObject = {
    { &QDBusAbstractAdaptor::staticMetaObject, qt_meta_stringdata_Soprano__Server__DBusServerAdaptor.data,
      qt_meta_data_Soprano__Server__DBusServerAdaptor,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *Soprano::Server::DBusServerAdaptor::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Soprano::Server::DBusServerAdaptor::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_Soprano__Server__DBusServerAdaptor.stringdata0))
        return static_cast<void*>(const_cast< DBusServerAdaptor*>(this));
    return QDBusAbstractAdaptor::qt_metacast(_clname);
}

int Soprano::Server::DBusServerAdaptor::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDBusAbstractAdaptor::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
