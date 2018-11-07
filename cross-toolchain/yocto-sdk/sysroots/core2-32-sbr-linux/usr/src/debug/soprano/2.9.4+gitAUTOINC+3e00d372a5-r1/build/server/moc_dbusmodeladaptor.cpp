/****************************************************************************
** Meta object code from reading C++ file 'dbusmodeladaptor.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../git/server/dbus/dbusmodeladaptor.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'dbusmodeladaptor.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_Soprano__Server__DBusModelAdaptor_t {
    QByteArrayData data[30];
    char stringdata0[3612];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Soprano__Server__DBusModelAdaptor_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Soprano__Server__DBusModelAdaptor_t qt_meta_stringdata_Soprano__Server__DBusModelAdaptor = {
    {
QT_MOC_LITERAL(0, 0, 33), // "Soprano::Server::DBusModelAda..."
QT_MOC_LITERAL(1, 34, 15), // "D-Bus Interface"
QT_MOC_LITERAL(2, 50, 17), // "org.soprano.Model"
QT_MOC_LITERAL(3, 68, 19), // "D-Bus Introspection"
QT_MOC_LITERAL(4, 88, 3164), // "  <interface name=\"org.sopra..."
QT_MOC_LITERAL(5, 3003, 15), // "statementsAdded"
QT_MOC_LITERAL(6, 3019, 0), // ""
QT_MOC_LITERAL(7, 3020, 17), // "statementsRemoved"
QT_MOC_LITERAL(8, 3038, 14), // "statementAdded"
QT_MOC_LITERAL(9, 3053, 18), // "Soprano::Statement"
QT_MOC_LITERAL(10, 3072, 9), // "statement"
QT_MOC_LITERAL(11, 3082, 16), // "statementRemoved"
QT_MOC_LITERAL(12, 3099, 12), // "addStatement"
QT_MOC_LITERAL(13, 3112, 12), // "QDBusMessage"
QT_MOC_LITERAL(14, 3125, 1), // "m"
QT_MOC_LITERAL(15, 3127, 20), // "containsAnyStatement"
QT_MOC_LITERAL(16, 3148, 17), // "containsStatement"
QT_MOC_LITERAL(17, 3166, 15), // "createBlankNode"
QT_MOC_LITERAL(18, 3182, 13), // "Soprano::Node"
QT_MOC_LITERAL(19, 3196, 12), // "executeQuery"
QT_MOC_LITERAL(20, 3209, 5), // "query"
QT_MOC_LITERAL(21, 3215, 9), // "queryLang"
QT_MOC_LITERAL(22, 3225, 7), // "isEmpty"
QT_MOC_LITERAL(23, 3233, 12), // "listContexts"
QT_MOC_LITERAL(24, 3246, 14), // "listStatements"
QT_MOC_LITERAL(25, 3261, 19), // "removeAllStatements"
QT_MOC_LITERAL(26, 3281, 15), // "removeStatement"
QT_MOC_LITERAL(27, 3297, 14), // "statementCount"
QT_MOC_LITERAL(28, 3312, 21), // "_s_delayedResultReady"
QT_MOC_LITERAL(29, 3334, 27) // "Soprano::Util::AsyncResult*"

    },
    "Soprano::Server::DBusModelAdaptor\0"
    "D-Bus Interface\0org.soprano.Model\0"
    "D-Bus Introspection\0"
    "  <interface name=\"org.soprano.Model\" >\n    <method name=\"addState"
    "ment\" >\n      <arg direction=\"in\" type=\"((isss)(isss)(isss)(isss)"
    ")\" name=\"statement\" />\n      <arg direction=\"out\" type=\"i\" nam"
    "e=\"errorCode\" />\n      <annotation value=\"Soprano::Statement\" nam"
    "e=\"com.trolltech.QtDBus.QtTypeName.In0\" />\n    </method>\n    <meth"
    "od name=\"removeStatement\" >\n      <arg direction=\"in\" type=\"((is"
    "ss)(isss)(isss)(isss))\" name=\"statement\" />\n      <arg direction=\""
    "out\" type=\"i\" name=\"errorCode\" />\n      <annotation value=\"Sopr"
    "ano::Statement\" name=\"com.trolltech.QtDBus.QtTypeName.In0\" />\n    "
    "</method>\n    <method name=\"removeAllStatements\" >\n      <arg dire"
    "ction=\"in\" type=\"((isss)(isss)(isss)(isss))\" name=\"statement\" />"
    "\n      <arg direction=\"out\" type=\"i\" name=\"errorCode\" />\n     "
    " <annotation value=\"Soprano::Statement\" name=\"com.trolltech.QtDBus."
    "QtTypeName.In0\" />\n    </method>\n    <method name=\"containsStateme"
    "nt\" >\n      <arg direction=\"in\" type=\"((isss)(isss)(isss)(isss))\""
    " name=\"statement\" />\n      <arg direction=\"out\" type=\"b\" name=\""
    "reply\" />\n      <annotation value=\"Soprano::Statement\" name=\"com."
    "trolltech.QtDBus.QtTypeName.In0\" />\n    </method>\n    <method name="
    "\"containsAnyStatement\" >\n      <arg direction=\"in\" type=\"((isss)"
    "(isss)(isss)(isss))\" name=\"statement\" />\n      <arg direction=\"ou"
    "t\" type=\"b\" name=\"reply\" />\n      <annotation value=\"Soprano::S"
    "tatement\" name=\"com.trolltech.QtDBus.QtTypeName.In0\" />\n    </meth"
    "od>\n    <method name=\"listStatements\" >\n      <arg direction=\"in\""
    " type=\"((isss)(isss)(isss)(isss))\" name=\"statement\" />\n      <arg"
    " direction=\"out\" type=\"s\" name=\"iterator\" />\n      <annotation "
    "value=\"Soprano::Statement\" name=\"com.trolltech.QtDBus.QtTypeName.In"
    "0\" />\n    </method>\n    <method name=\"listContexts\" >\n      <arg"
    " direction=\"out\" type=\"s\" name=\"iterator\" />\n    </method>\n   "
    " <method name=\"statementCount\" >\n      <arg direction=\"out\" type="
    "\"i\" name=\"count\" />\n    </method>\n    <method name=\"isEmpty\" >"
    "\n      <arg direction=\"out\" type=\"b\" name=\"reply\" />\n    </met"
    "hod>\n    <method name=\"executeQuery\" >\n      <arg direction=\"in\""
    " type=\"s\" name=\"query\" />\n      <arg direction=\"in\" type=\"s\" "
    "name=\"queryLang\" />\n      <arg direction=\"out\" type=\"s\" name=\""
    "iterator\" />\n    </method>\n    <method name=\"createBlankNode\" >\n"
    "      <arg direction=\"out\" type=\"(isss)\" name=\"node\" />\n      <"
    "annotation value=\"Soprano::Node\" name=\"com.trolltech.QtDBus.QtTypeN"
    "ame.Out0\" />\n    </method>\n    <signal name=\"statementsAdded\" />\n"
    "    <signal name=\"statementsRemoved\" />\n    <signal name=\"statemen"
    "tAdded\">\n      <arg name=\"statement\" type=\"((isss)(isss)(isss)(is"
    "ss))\" />\n      <annotation name=\"com.trolltech.QtDBus.QtTypeName.In"
    "0\" value=\"Soprano::Statement\" />\n    </signal>\n    <signal name=\""
    "statementRemoved\">\n      <arg name=\"statement\" type=\"((isss)(isss"
    ")(isss)(isss))\" />\n      <annotation name=\"com.trolltech.QtDBus.QtT"
    "ypeName.In0\" value=\"Soprano::Statement\" />\n    </signal>\n  </inte"
    "rface>\n\0"
    "statementsAdded\0\0statementsRemoved\0"
    "statementAdded\0Soprano::Statement\0"
    "statement\0statementRemoved\0addStatement\0"
    "QDBusMessage\0m\0containsAnyStatement\0"
    "containsStatement\0createBlankNode\0"
    "Soprano::Node\0executeQuery\0query\0"
    "queryLang\0isEmpty\0listContexts\0"
    "listStatements\0removeAllStatements\0"
    "removeStatement\0statementCount\0"
    "_s_delayedResultReady\0Soprano::Util::AsyncResult*"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Soprano__Server__DBusModelAdaptor[] = {

 // content:
       7,       // revision
       0,       // classname
       2,   14, // classinfo
      16,   18, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // classinfo: key, value
       1,    2,
       3,    4,

 // signals: name, argc, parameters, tag, flags
       5,    0,   98,    6, 0x06 /* Public */,
       7,    0,   99,    6, 0x06 /* Public */,
       8,    1,  100,    6, 0x06 /* Public */,
      11,    1,  103,    6, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      12,    2,  106,    6, 0x0a /* Public */,
      15,    2,  111,    6, 0x0a /* Public */,
      16,    2,  116,    6, 0x0a /* Public */,
      17,    1,  121,    6, 0x0a /* Public */,
      19,    3,  124,    6, 0x0a /* Public */,
      22,    1,  131,    6, 0x0a /* Public */,
      23,    1,  134,    6, 0x0a /* Public */,
      24,    2,  137,    6, 0x0a /* Public */,
      25,    2,  142,    6, 0x0a /* Public */,
      26,    2,  147,    6, 0x0a /* Public */,
      27,    1,  152,    6, 0x0a /* Public */,
      28,    1,  155,    6, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 9,   10,
    QMetaType::Void, 0x80000000 | 9,   10,

 // slots: parameters
    QMetaType::Int, 0x80000000 | 9, 0x80000000 | 13,   10,   14,
    QMetaType::Bool, 0x80000000 | 9, 0x80000000 | 13,   10,   14,
    QMetaType::Bool, 0x80000000 | 9, 0x80000000 | 13,   10,   14,
    0x80000000 | 18, 0x80000000 | 13,   14,
    QMetaType::QString, QMetaType::QString, QMetaType::QString, 0x80000000 | 13,   20,   21,   14,
    QMetaType::Bool, 0x80000000 | 13,   14,
    QMetaType::QString, 0x80000000 | 13,   14,
    QMetaType::QString, 0x80000000 | 9, 0x80000000 | 13,   10,   14,
    QMetaType::Int, 0x80000000 | 9, 0x80000000 | 13,   10,   14,
    QMetaType::Int, 0x80000000 | 9, 0x80000000 | 13,   10,   14,
    QMetaType::Int, 0x80000000 | 13,   14,
    QMetaType::Void, 0x80000000 | 29,    6,

       0        // eod
};

void Soprano::Server::DBusModelAdaptor::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        DBusModelAdaptor *_t = static_cast<DBusModelAdaptor *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->statementsAdded(); break;
        case 1: _t->statementsRemoved(); break;
        case 2: _t->statementAdded((*reinterpret_cast< const Soprano::Statement(*)>(_a[1]))); break;
        case 3: _t->statementRemoved((*reinterpret_cast< const Soprano::Statement(*)>(_a[1]))); break;
        case 4: { int _r = _t->addStatement((*reinterpret_cast< const Soprano::Statement(*)>(_a[1])),(*reinterpret_cast< const QDBusMessage(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 5: { bool _r = _t->containsAnyStatement((*reinterpret_cast< const Soprano::Statement(*)>(_a[1])),(*reinterpret_cast< const QDBusMessage(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 6: { bool _r = _t->containsStatement((*reinterpret_cast< const Soprano::Statement(*)>(_a[1])),(*reinterpret_cast< const QDBusMessage(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 7: { Soprano::Node _r = _t->createBlankNode((*reinterpret_cast< const QDBusMessage(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< Soprano::Node*>(_a[0]) = _r; }  break;
        case 8: { QString _r = _t->executeQuery((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QDBusMessage(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 9: { bool _r = _t->isEmpty((*reinterpret_cast< const QDBusMessage(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 10: { QString _r = _t->listContexts((*reinterpret_cast< const QDBusMessage(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 11: { QString _r = _t->listStatements((*reinterpret_cast< const Soprano::Statement(*)>(_a[1])),(*reinterpret_cast< const QDBusMessage(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 12: { int _r = _t->removeAllStatements((*reinterpret_cast< const Soprano::Statement(*)>(_a[1])),(*reinterpret_cast< const QDBusMessage(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 13: { int _r = _t->removeStatement((*reinterpret_cast< const Soprano::Statement(*)>(_a[1])),(*reinterpret_cast< const QDBusMessage(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 14: { int _r = _t->statementCount((*reinterpret_cast< const QDBusMessage(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 15: _t->d->_s_delayedResultReady((*reinterpret_cast< Soprano::Util::AsyncResult*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
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
            case 1:
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
            case 2:
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
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QDBusMessage >(); break;
            }
            break;
        case 12:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QDBusMessage >(); break;
            }
            break;
        case 13:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QDBusMessage >(); break;
            }
            break;
        case 14:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QDBusMessage >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (DBusModelAdaptor::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&DBusModelAdaptor::statementsAdded)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (DBusModelAdaptor::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&DBusModelAdaptor::statementsRemoved)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (DBusModelAdaptor::*_t)(const Soprano::Statement & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&DBusModelAdaptor::statementAdded)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (DBusModelAdaptor::*_t)(const Soprano::Statement & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&DBusModelAdaptor::statementRemoved)) {
                *result = 3;
                return;
            }
        }
    }
}

const QMetaObject Soprano::Server::DBusModelAdaptor::staticMetaObject = {
    { &QDBusAbstractAdaptor::staticMetaObject, qt_meta_stringdata_Soprano__Server__DBusModelAdaptor.data,
      qt_meta_data_Soprano__Server__DBusModelAdaptor,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *Soprano::Server::DBusModelAdaptor::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Soprano::Server::DBusModelAdaptor::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_Soprano__Server__DBusModelAdaptor.stringdata0))
        return static_cast<void*>(const_cast< DBusModelAdaptor*>(this));
    return QDBusAbstractAdaptor::qt_metacast(_clname);
}

int Soprano::Server::DBusModelAdaptor::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDBusAbstractAdaptor::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 16)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 16;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 16)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 16;
    }
    return _id;
}

// SIGNAL 0
void Soprano::Server::DBusModelAdaptor::statementsAdded()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void Soprano::Server::DBusModelAdaptor::statementsRemoved()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}

// SIGNAL 2
void Soprano::Server::DBusModelAdaptor::statementAdded(const Soprano::Statement & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void Soprano::Server::DBusModelAdaptor::statementRemoved(const Soprano::Statement & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_END_MOC_NAMESPACE
