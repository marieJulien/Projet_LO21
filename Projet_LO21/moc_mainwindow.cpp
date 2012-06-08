/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created: Fri Jun 8 23:18:10 2012
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "mainwindow.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_MainWindow[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
      46,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      12,   11,   11,   11, 0x08,
      38,   11,   11,   11, 0x08,
      64,   11,   11,   11, 0x08,
      90,   11,   11,   11, 0x08,
     116,   11,   11,   11, 0x08,
     142,   11,   11,   11, 0x08,
     168,   11,   11,   11, 0x08,
     194,   11,   11,   11, 0x08,
     220,   11,   11,   11, 0x08,
     246,   11,   11,   11, 0x08,
     272,   11,   11,   11, 0x08,
     301,   11,   11,   11, 0x08,
     331,   11,   11,   11, 0x08,
     359,   11,   11,   11, 0x08,
     387,   11,   11,   11, 0x08,
     415,   11,   11,   11, 0x08,
     445,   11,   11,   11, 0x08,
     474,   11,   11,   11, 0x08,
     503,   11,   11,   11, 0x08,
     533,   11,   11,   11, 0x08,
     565,   11,   11,   11, 0x08,
     593,   11,   11,   11, 0x08,
     622,   11,   11,   11, 0x08,
     650,   11,   11,   11, 0x08,
     679,   11,   11,   11, 0x08,
     707,   11,   11,   11, 0x08,
     736,   11,   11,   11, 0x08,
     764,   11,   11,   11, 0x08,
     793,   11,   11,   11, 0x08,
     821,   11,   11,   11, 0x08,
     848,   11,   11,   11, 0x08,
     876,   11,   11,   11, 0x08,
     905,   11,   11,   11, 0x08,
     933,   11,   11,   11, 0x08,
     962,   11,   11,   11, 0x08,
     990,   11,   11,   11, 0x08,
    1019,   11,   11,   11, 0x08,
    1036,   11,   11,   11, 0x08,
    1048, 1046,   11,   11, 0x08,
    1064,   11,   11,   11, 0x08,
    1078,   11,   11,   11, 0x08,
    1095,   11,   11,   11, 0x08,
    1114,   11,   11,   11, 0x08,
    1130,   11,   11,   11, 0x08,
    1145,   11,   11,   11, 0x08,
    1172, 1167,   11,   11, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_MainWindow[] = {
    "MainWindow\0\0on_pushButton_0_clicked()\0"
    "on_pushButton_1_clicked()\0"
    "on_pushButton_2_clicked()\0"
    "on_pushButton_3_clicked()\0"
    "on_pushButton_4_clicked()\0"
    "on_pushButton_5_clicked()\0"
    "on_pushButton_6_clicked()\0"
    "on_pushButton_7_clicked()\0"
    "on_pushButton_8_clicked()\0"
    "on_pushButton_9_clicked()\0"
    "on_pushButton_Plus_clicked()\0"
    "on_pushButton_Moins_clicked()\0"
    "on_pushButton_Mul_clicked()\0"
    "on_pushButton_DIV_clicked()\0"
    "on_pushButton_DUP_clicked()\0"
    "on_pushButton_CLEAR_clicked()\0"
    "on_pushButton_DROP_clicked()\0"
    "on_pushButton_EVAL_clicked()\0"
    "on_pushButton_Enter_clicked()\0"
    "on_pushButton_Annuler_clicked()\0"
    "on_pushButton_COS_clicked()\0"
    "on_pushButton_COSH_clicked()\0"
    "on_pushButton_SIN_clicked()\0"
    "on_pushButton_SINH_clicked()\0"
    "on_pushButton_TAN_clicked()\0"
    "on_pushButton_TANH_clicked()\0"
    "on_pushButton_MOD_clicked()\0"
    "on_pushButton_FACT_clicked()\0"
    "on_pushButton_POW_clicked()\0"
    "on_pushButton_LN_clicked()\0"
    "on_pushButton_LOG_clicked()\0"
    "on_pushButton_SQRT_clicked()\0"
    "on_pushButton_SQR_clicked()\0"
    "on_pushButton_CUBE_clicked()\0"
    "on_pushButton_INV_clicked()\0"
    "on_pushButton_SIGN_clicked()\0"
    "afficheClavier()\0effacer()\0m\0"
    "changeMode(int)\0useComplexe()\0"
    "ecrireComplexe()\0ecrireExpression()\0"
    "ecrireVirgule()\0ecrireEspace()\0"
    "changeAffichagePile()\0expr\0"
    "evaluer(Expression*)\0"
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
        case 0: on_pushButton_0_clicked(); break;
        case 1: on_pushButton_1_clicked(); break;
        case 2: on_pushButton_2_clicked(); break;
        case 3: on_pushButton_3_clicked(); break;
        case 4: on_pushButton_4_clicked(); break;
        case 5: on_pushButton_5_clicked(); break;
        case 6: on_pushButton_6_clicked(); break;
        case 7: on_pushButton_7_clicked(); break;
        case 8: on_pushButton_8_clicked(); break;
        case 9: on_pushButton_9_clicked(); break;
        case 10: on_pushButton_Plus_clicked(); break;
        case 11: on_pushButton_Moins_clicked(); break;
        case 12: on_pushButton_Mul_clicked(); break;
        case 13: on_pushButton_DIV_clicked(); break;
        case 14: on_pushButton_DUP_clicked(); break;
        case 15: on_pushButton_CLEAR_clicked(); break;
        case 16: on_pushButton_DROP_clicked(); break;
        case 17: on_pushButton_EVAL_clicked(); break;
        case 18: on_pushButton_Enter_clicked(); break;
        case 19: on_pushButton_Annuler_clicked(); break;
        case 20: on_pushButton_COS_clicked(); break;
        case 21: on_pushButton_COSH_clicked(); break;
        case 22: on_pushButton_SIN_clicked(); break;
        case 23: on_pushButton_SINH_clicked(); break;
        case 24: on_pushButton_TAN_clicked(); break;
        case 25: on_pushButton_TANH_clicked(); break;
        case 26: on_pushButton_MOD_clicked(); break;
        case 27: on_pushButton_FACT_clicked(); break;
        case 28: on_pushButton_POW_clicked(); break;
        case 29: on_pushButton_LN_clicked(); break;
        case 30: on_pushButton_LOG_clicked(); break;
        case 31: on_pushButton_SQRT_clicked(); break;
        case 32: on_pushButton_SQR_clicked(); break;
        case 33: on_pushButton_CUBE_clicked(); break;
        case 34: on_pushButton_INV_clicked(); break;
        case 35: on_pushButton_SIGN_clicked(); break;
        case 36: afficheClavier(); break;
        case 37: effacer(); break;
        case 38: changeMode((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 39: useComplexe(); break;
        case 40: ecrireComplexe(); break;
        case 41: ecrireExpression(); break;
        case 42: ecrireVirgule(); break;
        case 43: ecrireEspace(); break;
        case 44: changeAffichagePile(); break;
        case 45: evaluer((*reinterpret_cast< Expression*(*)>(_a[1]))); break;
        default: ;
        }
        _id -= 46;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
