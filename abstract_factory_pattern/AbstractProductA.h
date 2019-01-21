#ifndef __ABSTRACTPRODUCTA_H
#define __ABSTRACTPRODUCTA_H
#include <iostream>
using namespace std;
class AbstractProductA
{
public:
    AbstractProductA();
    virtual ~AbstractProductA();
    virtual void OperationA() = 0;
};

#endif