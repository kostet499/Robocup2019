/****************************************************************************
** Meta object code from reading C++ file 'dbusqueryresultiteratoradaptor.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../git/server/dbus/dbusqueryresultiteratoradaptor.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'dbusqueryresultiteratoradaptor.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_Soprano__Server__DBusQueryResultIteratorAdaptor_t {
    QByteArrayData data[25];
    char stringdata0[2165];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Soprano__Server__DBusQueryResultIteratorAdaptor_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Soprano__Server__DBusQueryResultIteratorAdaptor_t qt_meta_stringdata_Soprano__Server__DBusQueryResultIteratorAdaptor = {
    {
QT_MOC_LITERAL(0, 0, 47), // "Soprano::Server::DBusQueryRes..."
QT_MOC_LITERAL(1, 48, 15), // "D-Bus Interface"
QT_MOC_LITERAL(2, 64, 31), // "org.soprano.QueryResultIterator"
QT_MOC_LITERAL(3, 96, 19), // "D-Bus Introspection"
QT_MOC_LITERAL(4, 116, 1842), // "  <interface name=\"org.sopra..."
QT_MOC_LITERAL(5, 1797, 7), // "current"
QT_MOC_LITERAL(6, 1805, 19), // "Soprano::BindingSet"
QT_MOC_LITERAL(7, 1825, 0), // ""
QT_MOC_LITERAL(8, 1826, 12), // "QDBusMessage"
QT_MOC_LITERAL(9, 1839, 1), // "m"
QT_MOC_LITERAL(10, 1841, 4), // "next"
QT_MOC_LITERAL(11, 1846, 5), // "close"
QT_MOC_LITERAL(12, 1852, 16), // "currentStatement"
QT_MOC_LITERAL(13, 1869, 18), // "Soprano::Statement"
QT_MOC_LITERAL(14, 1888, 14), // "bindingByIndex"
QT_MOC_LITERAL(15, 1903, 13), // "Soprano::Node"
QT_MOC_LITERAL(16, 1917, 5), // "index"
QT_MOC_LITERAL(17, 1923, 13), // "bindingByName"
QT_MOC_LITERAL(18, 1937, 4), // "name"
QT_MOC_LITERAL(19, 1942, 12), // "bindingCount"
QT_MOC_LITERAL(20, 1955, 12), // "bindingNames"
QT_MOC_LITERAL(21, 1968, 9), // "boolValue"
QT_MOC_LITERAL(22, 1978, 9), // "isBinding"
QT_MOC_LITERAL(23, 1988, 6), // "isBool"
QT_MOC_LITERAL(24, 1995, 7) // "isGraph"

    },
    "Soprano::Server::DBusQueryResultIteratorAdaptor\0"
    "D-Bus Interface\0org.soprano.QueryResultIterator\0"
    "D-Bus Introspection\0"
    "  <interface name=\"org.soprano.QueryResultIterator\" >\n    <method n"
    "ame=\"next\" >\n      <arg direction=\"out\" type=\"b\" name=\"reply\""
    " />\n    </method>\n    <method name=\"current\" >\n      <arg directi"
    "on=\"out\" type=\"a{s(isss)}\" name=\"node\" />\n      <annotation val"
    "ue=\"Soprano::BindingSet\" name=\"com.trolltech.QtDBus.QtTypeName.Out0"
    "\" />\n    </method>\n    <method name=\"close\" />\n    <method name="
    "\"currentStatement\" >\n      <arg direction=\"out\" type=\"((isss)(is"
    "ss)(isss)(isss))\" name=\"statement\" />\n      <annotation value=\"So"
    "prano::Statement\" name=\"com.trolltech.QtDBus.QtTypeName.Out0\" />\n "
    "   </method>\n    <method name=\"bindingByName\" >\n      <arg directi"
    "on=\"in\" type=\"s\" name=\"name\" />\n      <arg direction=\"out\" ty"
    "pe=\"(isss)\" name=\"node\" />\n      <annotation value=\"Soprano::Nod"
    "e\" name=\"com.trolltech.QtDBus.QtTypeName.Out0\" />\n    </method>\n "
    "   <method name=\"bindingByIndex\" >\n      <arg direction=\"in\" type"
    "=\"i\" name=\"index\" />\n      <arg direction=\"out\" type=\"(isss)\""
    " name=\"node\" />\n      <annotation value=\"Soprano::Node\" name=\"co"
    "m.trolltech.QtDBus.QtTypeName.Out0\" />\n    </method>\n    <method na"
    "me=\"bindingCount\" >\n      <arg direction=\"out\" type=\"i\" name=\""
    "names\" />\n    </method>\n    <method name=\"bindingNames\" >\n      "
    "<arg direction=\"out\" type=\"as\" name=\"names\" />\n    </method>\n "
    "   <method name=\"boolValue\" >\n      <arg direction=\"out\" type=\"b"
    "\" name=\"reply\" />\n    </method>\n    <method name=\"isGraph\" >\n "
    "     <arg direction=\"out\" type=\"b\" name=\"reply\" />\n    </method"
    ">\n    <method name=\"isBinding\" >\n      <arg direction=\"out\" type"
    "=\"b\" name=\"reply\" />\n    </method>\n    <method name=\"isBool\" >"
    "\n      <arg direction=\"out\" type=\"b\" name=\"reply\" />\n    </met"
    "hod>\n  </interface>\n\0"
    "current\0Soprano::BindingSet\0\0QDBusMessage\0"
    "m\0next\0close\0currentStatement\0"
    "Soprano::Statement\0bindingByIndex\0"
    "Soprano::Node\0index\0bindingByName\0"
    "name\0bindingCount\0bindingNames\0boolValue\0"
    "isBinding\0isBool\0isGraph"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Soprano__Server__DBusQueryResultIteratorAdaptor[] = {

 // content:
       7,       // revision
       0,       // classname
       2,   14, // classinfo
      12,   18, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // classinfo: key, value
       1,    2,
       3,    4,

 // slots: name, argc, parameters, tag, flags
       5,    1,   78,    7, 0x0a /* Public */,
      10,    1,   81,    7, 0x0a /* Public */,
      11,    1,   84,    7, 0x0a /* Public */,
      12,    1,   87,    7, 0x0a /* Public */,
      14,    2,   90,    7, 0x0a /* Public */,
      17,    2,   95,    7, 0x0a /* Public */,
      19,    1,  100,    7, 0x0a /* Public */,
      20,    1,  103,    7, 0x0a /* Public */,
      21,    1,  106,    7, 0x0a /* Public */,
      22,    1,  109,    7, 0x0a /* Public */,
      23,    1,  112,    7, 0x0a /* Public */,
      24,    1,  115,    7, 0x0a /* Public */,

 // slots: parameters
    0x80000000 | 6, 0x80000000 | 8,    9,
    QMetaType::Bool, 0x80000000 | 8,    9,
    QMetaType::Void, 0x80000000 | 8,    9,
    0x80000000 | 13, 0x80000000 | 8,    9,
    0x80000000 | 15, QMetaType::Int, 0x80000000 | 8,   16,    9,
    0x80000000 | 15, QMetaType::QString, 0x80000000 | 8,   18,    9,
    QMetaType::Int, 0x80000000 | 8,    9,
    QMetaType::QStringList, 0x80000000 | 8,    9,
    QMetaType::Bool, 0x80000000 | 8,    9,
    QMetaType::Bool, 0x80000000 | 8,    9,
    QMetaType::Bool, 0x80000000 | 8,    9,
    QMetaType::Bool, 0x80000000 | 8,    9,

       0        // eod
};

void Soprano::Server::DBusQueryResultIteratorAdaptor::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        DBusQueryResultIteratorAdaptor *_t = static_cast<DBusQueryResultIteratorAdaptor *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: { Soprano::BindingSet _r = _t->current((*reinterpret_cast< const QDBusMessage(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< Soprano::BindingSet*>(_a[0]) = _r; }  break;
        case 1: { bool _r = _t->next((*reinterpret_cast< const QDBusMessage(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 2: _t->close((*reinterpret_cast< const QDBusMessage(*)>(_a[1]))); break;
        case 3: { Soprano::Statement _r = _t->currentStatement((*reinterpret_cast< const QDBusMessage(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< Soprano::Statement*>(_a[0]) = _r; }  break;
        case 4: { Soprano::Node _r = _t->bindingByIndex((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QDBusMessage(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< Soprano::Node*>(_a[0]) = _r; }  break;
        case 5: { Soprano::Node _r = _t->bindingByName((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QDBusMessage(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< Soprano::Node*>(_a[0]) = _r; }  break;
        case 6: { int _r = _t->bindingCount((*reinterpret_cast< const QDBusMessage(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 7: { QStringList _r = _t->bindingNames((*reinterpret_cast< const QDBusMessage(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QStringList*>(_a[0]) = _r; }  break;
        case 8: { bool _r = _t->boolValue((*reinterpret_cast< const QDBusMessage(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 9: { bool _r = _t->isBinding((*reinterpret_cast< const QDBusMessage(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 10: { bool _r = _t->isBool((*reinterpret_cast< const QDBusMessage(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 11: { bool _r = _t->isGraph((*reinterpret_cast< const QDBusMessage(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
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
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QDBusMessage >(); break;
            }
            break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QDBusMessage >(); break;
            }
            break;
        case 5:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QDBusMessage >(); break;
            }
            break;
        case 6:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QDBusMessage >(); break;
            }
            break;
        case 7:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QDBusMessage >(); break;
            }
            break;
        case 8:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QDBusMessage >(); break;
            }
            break;
        case 9:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QDBusMessage >(); break;
            }
            break;
        case 10:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QDBusMessage >(); break;
            }
            break;
        case 11:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QDBusMessage >(); break;
            }
            break;
        }
    }
}

const QMetaObject Soprano::Server::DBusQueryResultIteratorAdaptor::staticMetaObject = {
    { &QDBusAbstractAdaptor::staticMetaObject, qt_meta_stringdata_Soprano__Server__DBusQueryResultIteratorAdaptor.data,
      qt_meta_data_Soprano__Server__DBusQueryResultIteratorAdaptor,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *Soprano::Server::DBusQueryResultIteratorAdaptor::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Soprano::Server::DBusQueryResultIteratorAdaptor::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_Soprano__Server__DBusQueryResultIteratorAdaptor.stringdata0))
        return static_cast<void*>(const_cast< DBusQueryResultIteratorAdaptor*>(this));
    return QDBusAbstractAdaptor::qt_metacast(_clname);
}

int Soprano::Server::DBusQueryResultIteratorAdaptor::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDBusAbstractAdaptor::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
