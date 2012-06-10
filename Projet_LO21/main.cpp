#include <QtGui/QApplication>
#include <iostream>
#include "mainwindow.h"
#include "factoryconst.h"
#include "pile.h"

using namespace std;

int main(int argc, char *argv[])
{
    //Q_INIT_RESOURCE(undoframework);
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    return a.exec();
}
