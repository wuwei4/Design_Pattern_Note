#ifndef __CONCRETEPRODUCTA1_H
#define __CONCRETEPRODUCTA1_H
#include "AbstractProductA.h"
class ConcreteProductA1 : public AbstractProductA
{

public :
    ConcreteProductA1();
    virtual ~ConcreteProductA1();
    virtual void OperationA();    
};

#endif
