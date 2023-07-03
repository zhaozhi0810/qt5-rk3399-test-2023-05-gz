/****************************************************************************
** Meta object code from reading C++ file 'FTPDataSocket.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "FTPDataSocket.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'FTPDataSocket.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_FTPDataSocket_t {
    QByteArrayData data[10];
    char stringdata0[91];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_FTPDataSocket_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_FTPDataSocket_t qt_meta_stringdata_FTPDataSocket = {
    {
QT_MOC_LITERAL(0, 0, 13), // "FTPDataSocket"
QT_MOC_LITERAL(1, 14, 7), // "dirList"
QT_MOC_LITERAL(2, 22, 0), // ""
QT_MOC_LITERAL(3, 23, 4), // "list"
QT_MOC_LITERAL(4, 28, 16), // "DownloadStarting"
QT_MOC_LITERAL(5, 45, 4), // "file"
QT_MOC_LITERAL(6, 50, 15), // "DownloadSuccess"
QT_MOC_LITERAL(7, 66, 6), // "conned"
QT_MOC_LITERAL(8, 73, 4), // "recv"
QT_MOC_LITERAL(9, 78, 12) // "setdisconned"

    },
    "FTPDataSocket\0dirList\0\0list\0"
    "DownloadStarting\0file\0DownloadSuccess\0"
    "conned\0recv\0setdisconned"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_FTPDataSocket[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   44,    2, 0x06 /* Public */,
       4,    1,   47,    2, 0x06 /* Public */,
       6,    1,   50,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    0,   53,    2, 0x08 /* Private */,
       8,    0,   54,    2, 0x08 /* Private */,
       9,    0,   55,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QStringList,    3,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void, QMetaType::QString,    5,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void FTPDataSocket::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<FTPDataSocket *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->dirList((*reinterpret_cast< QStringList(*)>(_a[1]))); break;
        case 1: _t->DownloadStarting((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->DownloadSuccess((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 3: _t->conned(); break;
        case 4: _t->recv(); break;
        case 5: _t->setdisconned(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (FTPDataSocket::*)(QStringList );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FTPDataSocket::dirList)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (FTPDataSocket::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FTPDataSocket::DownloadStarting)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (FTPDataSocket::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FTPDataSocket::DownloadSuccess)) {
                *result = 2;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject FTPDataSocket::staticMetaObject = { {
    &QTcpSocket::staticMetaObject,
    qt_meta_stringdata_FTPDataSocket.data,
    qt_meta_data_FTPDataSocket,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *FTPDataSocket::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FTPDataSocket::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_FTPDataSocket.stringdata0))
        return static_cast<void*>(this);
    return QTcpSocket::qt_metacast(_clname);
}

int FTPDataSocket::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QTcpSocket::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void FTPDataSocket::dirList(QStringList _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void FTPDataSocket::DownloadStarting(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void FTPDataSocket::DownloadSuccess(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
