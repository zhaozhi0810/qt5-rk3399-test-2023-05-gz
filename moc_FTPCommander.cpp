/****************************************************************************
** Meta object code from reading C++ file 'FTPCommander.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "FTPCommander.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'FTPCommander.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_FTPCommander_t {
    QByteArrayData data[30];
    char stringdata0[250];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_FTPCommander_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_FTPCommander_t qt_meta_stringdata_FTPCommander = {
    {
QT_MOC_LITERAL(0, 0, 12), // "FTPCommander"
QT_MOC_LITERAL(1, 13, 12), // "LoginSuccess"
QT_MOC_LITERAL(2, 26, 0), // ""
QT_MOC_LITERAL(3, 27, 12), // "LoginFailure"
QT_MOC_LITERAL(4, 40, 10), // "UserSended"
QT_MOC_LITERAL(5, 51, 13), // "NeeedUserName"
QT_MOC_LITERAL(6, 65, 20), // "ConnectServerSuccess"
QT_MOC_LITERAL(7, 86, 3), // "PWD"
QT_MOC_LITERAL(8, 90, 3), // "pwd"
QT_MOC_LITERAL(9, 94, 4), // "sCWD"
QT_MOC_LITERAL(10, 99, 15), // "DownLoadSuccess"
QT_MOC_LITERAL(11, 115, 4), // "file"
QT_MOC_LITERAL(12, 120, 16), // "DownloadStarting"
QT_MOC_LITERAL(13, 137, 7), // "dirList"
QT_MOC_LITERAL(14, 145, 4), // "list"
QT_MOC_LITERAL(15, 150, 7), // "setUser"
QT_MOC_LITERAL(16, 158, 4), // "name"
QT_MOC_LITERAL(17, 163, 7), // "setPass"
QT_MOC_LITERAL(18, 171, 6), // "conned"
QT_MOC_LITERAL(19, 178, 8), // "recvComm"
QT_MOC_LITERAL(20, 187, 5), // "Login"
QT_MOC_LITERAL(21, 193, 8), // "username"
QT_MOC_LITERAL(22, 202, 6), // "passwd"
QT_MOC_LITERAL(23, 209, 4), // "Retr"
QT_MOC_LITERAL(24, 214, 3), // "arg"
QT_MOC_LITERAL(25, 218, 4), // "Nlst"
QT_MOC_LITERAL(26, 223, 6), // "getPwd"
QT_MOC_LITERAL(27, 230, 6), // "setCWD"
QT_MOC_LITERAL(28, 237, 4), // "path"
QT_MOC_LITERAL(29, 242, 7) // "setStor"

    },
    "FTPCommander\0LoginSuccess\0\0LoginFailure\0"
    "UserSended\0NeeedUserName\0ConnectServerSuccess\0"
    "PWD\0pwd\0sCWD\0DownLoadSuccess\0file\0"
    "DownloadStarting\0dirList\0list\0setUser\0"
    "name\0setPass\0conned\0recvComm\0Login\0"
    "username\0passwd\0Retr\0arg\0Nlst\0getPwd\0"
    "setCWD\0path\0setStor"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_FTPCommander[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      22,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      11,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,  124,    2, 0x06 /* Public */,
       3,    0,  125,    2, 0x06 /* Public */,
       4,    0,  126,    2, 0x06 /* Public */,
       5,    0,  127,    2, 0x06 /* Public */,
       6,    0,  128,    2, 0x06 /* Public */,
       7,    1,  129,    2, 0x06 /* Public */,
       9,    0,  132,    2, 0x06 /* Public */,
      10,    0,  133,    2, 0x06 /* Public */,
      10,    1,  134,    2, 0x06 /* Public */,
      12,    1,  137,    2, 0x06 /* Public */,
      13,    1,  140,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      15,    1,  143,    2, 0x08 /* Private */,
      17,    0,  146,    2, 0x08 /* Private */,
      18,    0,  147,    2, 0x0a /* Public */,
      19,    0,  148,    2, 0x0a /* Public */,
      20,    2,  149,    2, 0x0a /* Public */,
      20,    0,  154,    2, 0x0a /* Public */,
      23,    1,  155,    2, 0x0a /* Public */,
      25,    0,  158,    2, 0x0a /* Public */,
      26,    0,  159,    2, 0x0a /* Public */,
      27,    1,  160,    2, 0x0a /* Public */,
      29,    1,  163,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    8,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   11,
    QMetaType::Void, QMetaType::QString,   11,
    QMetaType::Void, QMetaType::QStringList,   14,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,   16,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,   21,   22,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   24,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   28,
    QMetaType::Void, QMetaType::QString,   28,

       0        // eod
};

void FTPCommander::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<FTPCommander *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->LoginSuccess(); break;
        case 1: _t->LoginFailure(); break;
        case 2: _t->UserSended(); break;
        case 3: _t->NeeedUserName(); break;
        case 4: _t->ConnectServerSuccess(); break;
        case 5: _t->PWD((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 6: _t->sCWD(); break;
        case 7: _t->DownLoadSuccess(); break;
        case 8: _t->DownLoadSuccess((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 9: _t->DownloadStarting((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 10: _t->dirList((*reinterpret_cast< QStringList(*)>(_a[1]))); break;
        case 11: _t->setUser((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 12: _t->setPass(); break;
        case 13: _t->conned(); break;
        case 14: _t->recvComm(); break;
        case 15: _t->Login((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 16: _t->Login(); break;
        case 17: _t->Retr((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 18: _t->Nlst(); break;
        case 19: _t->getPwd(); break;
        case 20: _t->setCWD((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 21: _t->setStor((*reinterpret_cast< QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (FTPCommander::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FTPCommander::LoginSuccess)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (FTPCommander::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FTPCommander::LoginFailure)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (FTPCommander::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FTPCommander::UserSended)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (FTPCommander::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FTPCommander::NeeedUserName)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (FTPCommander::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FTPCommander::ConnectServerSuccess)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (FTPCommander::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FTPCommander::PWD)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (FTPCommander::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FTPCommander::sCWD)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (FTPCommander::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FTPCommander::DownLoadSuccess)) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (FTPCommander::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FTPCommander::DownLoadSuccess)) {
                *result = 8;
                return;
            }
        }
        {
            using _t = void (FTPCommander::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FTPCommander::DownloadStarting)) {
                *result = 9;
                return;
            }
        }
        {
            using _t = void (FTPCommander::*)(QStringList );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FTPCommander::dirList)) {
                *result = 10;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject FTPCommander::staticMetaObject = { {
    &QTcpSocket::staticMetaObject,
    qt_meta_stringdata_FTPCommander.data,
    qt_meta_data_FTPCommander,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *FTPCommander::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FTPCommander::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_FTPCommander.stringdata0))
        return static_cast<void*>(this);
    return QTcpSocket::qt_metacast(_clname);
}

int FTPCommander::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QTcpSocket::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 22)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 22;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 22)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 22;
    }
    return _id;
}

// SIGNAL 0
void FTPCommander::LoginSuccess()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void FTPCommander::LoginFailure()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void FTPCommander::UserSended()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void FTPCommander::NeeedUserName()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void FTPCommander::ConnectServerSuccess()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void FTPCommander::PWD(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void FTPCommander::sCWD()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}

// SIGNAL 7
void FTPCommander::DownLoadSuccess()
{
    QMetaObject::activate(this, &staticMetaObject, 7, nullptr);
}

// SIGNAL 8
void FTPCommander::DownLoadSuccess(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void FTPCommander::DownloadStarting(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void FTPCommander::dirList(QStringList _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
