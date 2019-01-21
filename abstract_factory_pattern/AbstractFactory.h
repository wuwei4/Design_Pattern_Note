#ifndef __ABSTRACTFACTORY_H
#define __ABSTRACTFACTORY_H

#include "AbstractProductA.h"
#include "AbstractProductB.h"

class AbstractFactory
{
public :
    AbstractFactory();
    virtual ~AbstractFactory();
    virtual AbstractProductA *CreateProductA() = 0;
    virtual AbstractProductB *CreateProductB() = 0;
};
#endif
