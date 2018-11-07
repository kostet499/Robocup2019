/****************************************************************************
** Meta object code from reading C++ file 'dbusstatementiteratoradaptor.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../git/server/dbus/dbusstatementiteratoradaptor.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'dbusstatementiteratoradaptor.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_Soprano__Server__DBusStatementIteratorAdaptor_t {
    QByteArrayData data[12];
    char stringdata0[604];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Soprano__Server__DBusStatementIteratorAdaptor_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Soprano__Server__DBusStatementIteratorAdaptor_t qt_meta_stringdata_Soprano__Server__DBusStatementIteratorAdaptor = {
    {
QT_MOC_LITERAL(0, 0, 45), // "Soprano::Server::DBusStatemen..."
QT_MOC_LITERAL(1, 46, 15), // "D-Bus Interface"
QT_MOC_LITERAL(2, 62, 29), // "org.soprano.StatementIterator"
QT_MOC_LITERAL(3, 92, 19), // "D-Bus Introspection"
QT_MOC_LITERAL(4, 112, 437), // "  <interface name=\"org.sopra..."
QT_MOC_LITERAL(5, 516, 7), // "current"
QT_MOC_LITERAL(6, 524, 18), // "Soprano::Statement"
QT_MOC_LITERAL(7, 543, 0), // ""
QT_MOC_LITERAL(8, 544, 12), // "QDBusMessage"
QT_MOC_LITERAL(9, 557, 1), // "m"
QT_MOC_LITERAL(10, 559, 4), // "next"
QT_MOC_LITERAL(11, 564, 5) // "close"

    },
    "Soprano::Server::DBusStatementIteratorAdaptor\0"
    "D-Bus Interface\0org.soprano.StatementIterator\0"
    "D-Bus Introspection\0"
    "  <interface name=\"org.soprano.StatementIterator\" >\n    <method nam"
    "e=\"next\" >\n      <arg direction=\"out\" type=\"b\" name=\"reply\" /"
    ">\n    </method>\n    <method name=\"current\" >\n      <arg direction"
    "=\"out\" type=\"((isss)(isss)(isss)(isss))\" name=\"statement\" />\n  "
    "    <annotation value=\"Soprano::Statement\" name=\"com.trolltech.QtDB"
    "us.QtTypeName.Out0\" />\n    </method>\n    <method name=\"close\" />\n"
    "  </interface>\n\0"
    "current\0Soprano::Statement\0\0QDBusMessage\0"
    "m\0next\0close"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Soprano__Server__DBusStatementIteratorAdaptor[] = {

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
       5,    1,   33,    7, 0x0a /* Public */,
      10,    1,   36,    7, 0x0a /* Public */,
      11,    1,   39,    7, 0x0a /* Public */,

 // slots: parameters
    0x80000000 | 6, 0x80000000 | 8,    9,
    QMetaType::Bool, 0x80000000 | 8,    9,
    QMetaType::Void, 0x80000000 | 8,    9,

       0        // eod
};

void Soprano::Server::DBusStatementIteratorAdaptor::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        DBusStatementIteratorAdaptor *_t = static_cast<DBusStatementIteratorAdaptor *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: { Soprano::Statement _r = _t->current((*reinterpret_cast< const QDBusMessage(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< Soprano::Statement*>(_a[0]) = _r; }  break;
        case 1: { bool _r = _t->next((*reinterpret_cast< const QDBusMessage(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 2: _t->close((*reinterpret_cast< const QDBusMessage(*)>(_a[1]))); break;
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
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QDBusMessage >(); break;
            }
            break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QDBusMessage >(); break;
            }
            break;
        }
    }
}

const QMetaObject Soprano::Server::DBusStatementIteratorAdaptor::staticMetaObject = {
    { &QDBusAbstractAdaptor::staticMetaObject, qt_meta_stringdata_Soprano__Server__DBusStatementIteratorAdaptor.data,
      qt_meta_data_Soprano__Server__DBusStatementIteratorAdaptor,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *Soprano::Server::DBusStatementIteratorAdaptor::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Soprano::Server::DBusStatementIteratorAdaptor::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_Soprano__Server__DBusStatementIteratorAdaptor.stringdata0))
        return static_cast<void*>(const_cast< DBusStatementIteratorAdaptor*>(this));
    return QDBusAbstractAdaptor::qt_metacast(_clname);
}

int Soprano::Server::DBusStatementIteratorAdaptor::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
