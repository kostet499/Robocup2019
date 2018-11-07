/****************************************************************************
** Meta object code from reading C++ file 'dbusexportiterator.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../git/server/dbus/dbusexportiterator.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'dbusexportiterator.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_Soprano__Server__DBusExportIterator_t {
    QByteArrayData data[10];
    char stringdata0[159];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Soprano__Server__DBusExportIterator_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Soprano__Server__DBusExportIterator_t qt_meta_stringdata_Soprano__Server__DBusExportIterator = {
    {
QT_MOC_LITERAL(0, 0, 35), // "Soprano::Server::DBusExportIt..."
QT_MOC_LITERAL(1, 36, 16), // "setDeleteOnClose"
QT_MOC_LITERAL(2, 53, 0), // ""
QT_MOC_LITERAL(3, 54, 13), // "deleteOnClose"
QT_MOC_LITERAL(4, 68, 16), // "registerIterator"
QT_MOC_LITERAL(5, 85, 14), // "dbusObjectPath"
QT_MOC_LITERAL(6, 100, 10), // "dbusClient"
QT_MOC_LITERAL(7, 111, 18), // "unregisterIterator"
QT_MOC_LITERAL(8, 130, 23), // "slotServiceUnregistered"
QT_MOC_LITERAL(9, 154, 4) // "name"

    },
    "Soprano::Server::DBusExportIterator\0"
    "setDeleteOnClose\0\0deleteOnClose\0"
    "registerIterator\0dbusObjectPath\0"
    "dbusClient\0unregisterIterator\0"
    "slotServiceUnregistered\0name"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Soprano__Server__DBusExportIterator[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   39,    2, 0x0a /* Public */,
       4,    2,   42,    2, 0x0a /* Public */,
       4,    1,   47,    2, 0x2a /* Public | MethodCloned */,
       7,    0,   50,    2, 0x0a /* Public */,
       8,    1,   51,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Bool, QMetaType::QString, QMetaType::QString,    5,    6,
    QMetaType::Bool, QMetaType::QString,    5,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    9,

       0        // eod
};

void Soprano::Server::DBusExportIterator::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        DBusExportIterator *_t = static_cast<DBusExportIterator *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->setDeleteOnClose((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: { bool _r = _t->registerIterator((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 2: { bool _r = _t->registerIterator((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 3: _t->unregisterIterator(); break;
        case 4: _t->d->slotServiceUnregistered((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject Soprano::Server::DBusExportIterator::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_Soprano__Server__DBusExportIterator.data,
      qt_meta_data_Soprano__Server__DBusExportIterator,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *Soprano::Server::DBusExportIterator::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Soprano::Server::DBusExportIterator::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_Soprano__Server__DBusExportIterator.stringdata0))
        return static_cast<void*>(const_cast< DBusExportIterator*>(this));
    if (!strcmp(_clname, "Error::ErrorCache"))
        return static_cast< Error::ErrorCache*>(const_cast< DBusExportIterator*>(this));
    return QObject::qt_metacast(_clname);
}

int Soprano::Server::DBusExportIterator::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
