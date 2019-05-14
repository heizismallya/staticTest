#ifndef DEFINESTATIC_H
#define DEFINESTATIC_H
#include <vector>

static std::vector<int> intV;

static void print()
{
    qDebug() << "definestatic " << &intV;
}



#endif // DEFINESTATIC_H
