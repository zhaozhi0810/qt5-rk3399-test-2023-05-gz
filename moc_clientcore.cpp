/****************************************************************************
** Meta object code from reading C++ file 'clientcore.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "clientcore.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'clientcore.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ClientCore_t {
    QByteArrayData data[18];
    char stringdata0[207];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ClientCore_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ClientCore_t qt_meta_stringdata_ClientCore = {
    {
QT_MOC_LITERAL(0, 0, 10), // "ClientCore"
QT_MOC_LITERAL(1, 11, 11), // "initSuccess"
QT_MOC_LITERAL(2, 23, 0), // ""
QT_MOC_LITERAL(3, 24, 13), // "fileInfoGeted"
QT_MOC_LITERAL(4, 38, 8), // "pwdGeted"
QT_MOC_LITERAL(5, 47, 10), // "cwdSuccess"
QT_MOC_LITERAL(6, 58, 13), // "serverReponse"
QT_MOC_LITERAL(7, 72, 11), // "retrSuccess"
QT_MOC_LITERAL(8, 84, 11), // "storSuccess"
QT_MOC_LITERAL(9, 96, 11), // "rntoSuccess"
QT_MOC_LITERAL(10, 108, 10), // "rmdSuccess"
QT_MOC_LITERAL(11, 119, 10), // "mkdSuccess"
QT_MOC_LITERAL(12, 130, 11), // "quitSuccess"
QT_MOC_LITERAL(13, 142, 12), // "remoteClosed"
QT_MOC_LITERAL(14, 155, 13), // "commandFailed"
QT_MOC_LITERAL(15, 169, 14), // "receiveMessage"
QT_MOC_LITERAL(16, 184, 11), // "receiveFile"
QT_MOC_LITERAL(17, 196, 10) // "setPassive"

    },
    "ClientCore\0initSuccess\0\0fileInfoGeted\0"
    "pwdGeted\0cwdSuccess\0serverReponse\0"
    "retrSuccess\0storSuccess\0rntoSuccess\0"
    "rmdSuccess\0mkdSuccess\0quitSuccess\0"
    "remoteClosed\0commandFailed\0receiveMessage\0"
    "receiveFile\0setPassive"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ClientCore[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      16,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      13,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   94,    2, 0x06 /* Public */,
       3,    1,   97,    2, 0x06 /* Public */,
       4,    1,  100,    2, 0x06 /* Public */,
       5,    1,  103,    2, 0x06 /* Public */,
       6,    1,  106,    2, 0x06 /* Public */,
       7,    0,  109,    2, 0x06 /* Public */,
       8,    0,  110,    2, 0x06 /* Public */,
       9,    0,  111,    2, 0x06 /* Public */,
      10,    0,  112,    2, 0x06 /* Public */,
      11,    0,  113,    2, 0x06 /* Public */,
      12,    0,  114,    2, 0x06 /* Public */,
      13,    0,  115,    2, 0x06 /* Public */,
      14,    1,  116,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      15,    0,  119,    2, 0x08 /* Private */,
      16,    0,  120,    2, 0x08 /* Private */,
      17,    1,  121,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    2,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    2,

       0        // eod
};

void ClientCore::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ClientCore *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->initSuccess((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->fileInfoGeted((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->pwdGeted((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 3: _t->cwdSuccess((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->serverReponse((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 5: _t->retrSuccess(); break;
        case 6: _t->storSuccess(); break;
        case 7: _t->rntoSuccess(); break;
        case 8: _t->rmdSuccess(); break;
        case 9: _t->mkdSuccess(); break;
        case 10: _t->quitSuccess(); break;
        case 11: _t->remoteClosed(); break;
        case 12: _t->commandFailed((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 13: _t->receiveMessage(); break;
        case 14: _t->receiveFile(); break;
        case 15: _t->setPassive((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ClientCore::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ClientCore::initSuccess)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (ClientCore::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ClientCore::fileInfoGeted)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (ClientCore::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ClientCore::pwdGeted)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (ClientCore::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ClientCore::cwdSuccess)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (ClientCore::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ClientCore::serverReponse)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (ClientCore::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ClientCore::retrSuccess)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (ClientCore::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ClientCore::storSuccess)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (ClientCore::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ClientCore::rntoSuccess)) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (ClientCore::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ClientCore::rmdSuccess)) {
                *result = 8;
                return;
            }
        }
        {
            using _t = void (ClientCore::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ClientCore::mkdSuccess)) {
                *result = 9;
                return;
            }
        }
        {
            using _t = void (ClientCore::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ClientCore::quitSuccess)) {
                *result = 10;
                return;
            }
        }
        {
            using _t = void (ClientCore::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ClientCore::remoteClosed)) {
                *result = 11;
                return;
            }
        }
        {
            using _t = void (ClientCore::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ClientCore::commandFailed)) {
                *result = 12;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject ClientCore::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_ClientCore.data,
    qt_meta_data_ClientCore,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ClientCore::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ClientCore::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ClientCore.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int ClientCore::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 16)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 16;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 16)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 16;
    }
    return _id;
}

// SIGNAL 0
void ClientCore::initSuccess(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void ClientCore::fileInfoGeted(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void ClientCore::pwdGeted(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void ClientCore::cwdSuccess(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void ClientCore::serverReponse(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void ClientCore::retrSuccess()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void ClientCore::storSuccess()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}

// SIGNAL 7
void ClientCore::rntoSuccess()
{
    QMetaObject::activate(this, &staticMetaObject, 7, nullptr);
}

// SIGNAL 8
void ClientCore::rmdSuccess()
{
    QMetaObject::activate(this, &staticMetaObject, 8, nullptr);
}

// SIGNAL 9
void ClientCore::mkdSuccess()
{
    QMetaObject::activate(this, &staticMetaObject, 9, nullptr);
}

// SIGNAL 10
void ClientCore::quitSuccess()
{
    QMetaObject::activate(this, &staticMetaObject, 10, nullptr);
}

// SIGNAL 11
void ClientCore::remoteClosed()
{
    QMetaObject::activate(this, &staticMetaObject, 11, nullptr);
}

// SIGNAL 12
void ClientCore::commandFailed(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 12, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
