
#include <qDebug>
#include "definestatic.h"
#include "usingstatic.h"

UsingStatic1::UsingStatic1(){}
UsingStatic1::~UsingStatic1(){}

//当在cpp中引入定义了静态全局变量的头文件后，其实并不是在使用定义的静态变量，
//而是又重新定义了一个静态全局变量仅限于当前文件的作用域
//void UsingStatic1::addStatic()
//{
    //    intV.push_back(1);
    // 下面打印的额地址可以看出 具体差异
    //    qDebug() << "usingstatic1.cpp" << &intV;
//}
