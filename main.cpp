#include "findcharacter.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    FindCharacter w;
    w.show();
    return a.exec();
}
