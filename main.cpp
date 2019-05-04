#include "fifteen.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Fifteen w;
    w.show();

    return a.exec();
}
