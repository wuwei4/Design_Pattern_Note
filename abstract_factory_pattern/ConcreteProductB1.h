#ifndef __CONCRETEPRODUCTB1_H
#define __CONCRETEPRODUCTB1_H

#include "AbstractProductB.h"

class ConcreteProductB1 : public AbstractProductB
{

public :
    ConcreteProductB1();
    virtual ~ConcreteProductB1();
    virtual void OperationB();    
};

#endif
