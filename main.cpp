#include "mainwindow.h"
#include <QApplication>

#include <fstream>

#include <string>

std::fstream testifilu;

int main(int argc, char *argv[])
{
    testifilu.open("testi.csv");
    testifilu << "testi;filu;" << std::endl;
    testifilu.close();

    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    return a.exec();
}
