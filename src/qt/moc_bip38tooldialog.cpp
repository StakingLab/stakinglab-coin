/****************************************************************************
** Meta object code from reading C++ file 'bip38tooldialog.h'
**
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "qt/bip38tooldialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'bip38tooldialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Bip38ToolDialog_t {
    QByteArrayData data[11];
    char stringdata0[286];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Bip38ToolDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Bip38ToolDialog_t qt_meta_stringdata_Bip38ToolDialog = {
    {
QT_MOC_LITERAL(0, 0, 15), // "Bip38ToolDialog"
QT_MOC_LITERAL(1, 16, 32), // "on_addressBookButton_ENC_clicked"
QT_MOC_LITERAL(2, 49, 0), // ""
QT_MOC_LITERAL(3, 50, 26), // "on_pasteButton_ENC_clicked"
QT_MOC_LITERAL(4, 77, 31), // "on_encryptKeyButton_ENC_clicked"
QT_MOC_LITERAL(5, 109, 28), // "on_copyKeyButton_ENC_clicked"
QT_MOC_LITERAL(6, 138, 26), // "on_clearButton_ENC_clicked"
QT_MOC_LITERAL(7, 165, 26), // "on_pasteButton_DEC_clicked"
QT_MOC_LITERAL(8, 192, 31), // "on_decryptKeyButton_DEC_clicked"
QT_MOC_LITERAL(9, 224, 34), // "on_importAddressButton_DEC_cl..."
QT_MOC_LITERAL(10, 259, 26) // "on_clearButton_DEC_clicked"

    },
    "Bip38ToolDialog\0on_addressBookButton_ENC_clicked\0"
    "\0on_pasteButton_ENC_clicked\0"
    "on_encryptKeyButton_ENC_clicked\0"
    "on_copyKeyButton_ENC_clicked\0"
    "on_clearButton_ENC_clicked\0"
    "on_pasteButton_DEC_clicked\0"
    "on_decryptKeyButton_DEC_clicked\0"
    "on_importAddressButton_DEC_clicked\0"
    "on_clearButton_DEC_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Bip38ToolDialog[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   59,    2, 0x08 /* Private */,
       3,    0,   60,    2, 0x08 /* Private */,
       4,    0,   61,    2, 0x08 /* Private */,
       5,    0,   62,    2, 0x08 /* Private */,
       6,    0,   63,    2, 0x08 /* Private */,
       7,    0,   64,    2, 0x08 /* Private */,
       8,    0,   65,    2, 0x08 /* Private */,
       9,    0,   66,    2, 0x08 /* Private */,
      10,    0,   67,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void Bip38ToolDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Bip38ToolDialog *_t = static_cast<Bip38ToolDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_addressBookButton_ENC_clicked(); break;
        case 1: _t->on_pasteButton_ENC_clicked(); break;
        case 2: _t->on_encryptKeyButton_ENC_clicked(); break;
        case 3: _t->on_copyKeyButton_ENC_clicked(); break;
        case 4: _t->on_clearButton_ENC_clicked(); break;
        case 5: _t->on_pasteButton_DEC_clicked(); break;
        case 6: _t->on_decryptKeyButton_DEC_clicked(); break;
        case 7: _t->on_importAddressButton_DEC_clicked(); break;
        case 8: _t->on_clearButton_DEC_clicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject Bip38ToolDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_Bip38ToolDialog.data,
      qt_meta_data_Bip38ToolDialog,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *Bip38ToolDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Bip38ToolDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Bip38ToolDialog.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int Bip38ToolDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 9;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
