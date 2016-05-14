#include "mainwindow.h"
#include <QApplication>
#include "ttaiko_start.h"
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    return a.exec();
}
