/****************************************************************************
** Meta object code from reading C++ file 'logindlg.h'
**
** Created: Fri Sep 11 10:29:43 2015
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../logindlg.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'logindlg.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_loginDlg[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      10,    9,    9,    9, 0x0a,
      38,   32,    9,    9, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_loginDlg[] = {
    "loginDlg\0\0on_loginBtn_clicked()\0reply\0"
    "replyLoginFinished(QNetworkReply*)\0"
};

const QMetaObject loginDlg::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_loginDlg,
      qt_meta_data_loginDlg, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &loginDlg::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *loginDlg::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *loginDlg::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_loginDlg))
        return static_cast<void*>(const_cast< loginDlg*>(this));
    return QDialog::qt_metacast(_clname);
}

int loginDlg::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: on_loginBtn_clicked(); break;
        case 1: replyLoginFinished((*reinterpret_cast< QNetworkReply*(*)>(_a[1]))); break;
        default: ;
        }
        _id -= 2;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
