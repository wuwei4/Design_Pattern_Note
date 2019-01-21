#ifndef __ABSTRACTPRODUCTB_H
#define __ABSTRACTPRODUCTB_H
#include <iostream>
using namespace std;
class AbstractProductB
{
public:
    AbstractProductB();
    virtual ~AbstractProductB();
    virtual void OperationB() = 0;
};

#endif