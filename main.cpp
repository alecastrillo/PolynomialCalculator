#include "mainwindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    //w.amountOfEle(w.completeString("120|255|-555|+444|025"));
    //w.inAdd(w.completeString("120|255|-555|+444|025"));
    return a.exec();
}
