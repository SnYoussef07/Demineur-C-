#include "MwDemineur.hpp"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MwDemineur w;
    w.show();

    return a.exec();
}
