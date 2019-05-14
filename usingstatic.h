#ifndef USINGSTATIC_H
#define USINGSTATIC_H
#include <qDebug>
#include "definestatic.h"

class UsingStatic1
{
public:
    UsingStatic1();
    ~UsingStatic1();
    void addStatic()
    {
        //    intV.push_back(1);
            qDebug() << "usingstatic1.cpp" << &intV;
    }

};

#endif // USINGSTATIC_H
