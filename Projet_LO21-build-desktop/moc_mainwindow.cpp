/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created: Wed May 23 15:26:02 2012
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../Documents/LO21/Projet_LO21/Projet_LO21/mainwindow.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_MainWindow[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
      17,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      12,   11,   11,   11, 0x08,
      39,   11,   11,   11, 0x08,
      66,   11,   11,   11, 0x08,
      93,   11,   11,   11, 0x08,
     120,   11,   11,   11, 0x08,
     147,   11,   11,   11, 0x08,
     174,   11,   11,   11, 0x08,
     201,   11,   11,   11, 0x08,
     227,   11,   11,   11, 0x08,
     253,   11,   11,   11, 0x08,
     279,   11,   11,   11, 0x08,
     306,   11,   11,   11, 0x08,
     333,   11,   11,   11, 0x08,
     360,   11,   11,   11, 0x08,
     387,   11,   11,   11, 0x08,
     404,   11,   11,   11, 0x08,
     416,  414,   11,   11, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_MainWindow[] = {
    "MainWindow\0\0on_pushButton_13_clicked()\0"
    "on_pushButton_12_clicked()\0"
    "on_pushButton_17_clicked()\0"
    "on_pushButton_18_clicked()\0"
    "on_pushButton_11_clicked()\0"
    "on_pushButton_14_clicked()\0"
    "on_pushButton_15_clicked()\0"
    "on_pushButton_7_clicked()\0"
    "on_pushButton_8_clicked()\0"
    "on_pushButton_9_clicked()\0"
    "on_pushButton_10_clicked()\0"
    "on_pushButton_16_clicked()\0"
    "on_pushButton_19_clicked()\0"
    "on_pushButton_22_clicked()\0afficheClavier()\0"
    "effacer()\0m\0changeMode(int)\0"
};

const QMetaObject MainWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_MainWindow,
      qt_meta_data_MainWindow, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &MainWindow::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow))
        return static_cast<void*>(const_cast< MainWindow*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: on_pushButton_13_clicked(); break;
        case 1: on_pushButton_12_clicked(); break;
        case 2: on_pushButton_17_clicked(); break;
        case 3: on_pushButton_18_clicked(); break;
        case 4: on_pushButton_11_clicked(); break;
        case 5: on_pushButton_14_clicked(); break;
        case 6: on_pushButton_15_clicked(); break;
        case 7: on_pushButton_7_clicked(); break;
        case 8: on_pushButton_8_clicked(); break;
        case 9: on_pushButton_9_clicked(); break;
        case 10: on_pushButton_10_clicked(); break;
        case 11: on_pushButton_16_clicked(); break;
        case 12: on_pushButton_19_clicked(); break;
        case 13: on_pushButton_22_clicked(); break;
        case 14: afficheClavier(); break;
        case 15: effacer(); break;
        case 16: changeMode((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
        _id -= 17;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
