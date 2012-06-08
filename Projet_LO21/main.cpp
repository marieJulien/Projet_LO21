#include <QtGui/QApplication>
#include <iostream>
#include "mainwindow.h"
#include "factoryconst.h"
#include "pile.h"

using namespace std;



int main(int argc, char *argv[])
{
   QApplication a(argc, argv);
    MainWindow w;
    w.show();

    return a.exec();

}
