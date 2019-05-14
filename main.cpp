#include <QCoreApplication>
#include "usingstatic.h"
#include <QDebug>
#include "definestatic.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    print();

    UsingStatic1 u1;
    u1.addStatic();
    for (size_t i = 0; i < intV.size(); i++)
    {
        qDebug() << "intV " <<intV[i];
    }



    return a.exec();
}
