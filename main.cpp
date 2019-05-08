#include "fifteen.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    a.setWindowIcon(QIcon(":/btn_icon/image/icon_fifteen.ico"));
    Fifteen w;
    w.show();

    return a.exec();
}
