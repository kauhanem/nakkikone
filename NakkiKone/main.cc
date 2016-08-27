#include "nakkikone.hh"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    NakkiKone w;
    w.show();

    return a.exec();
}
