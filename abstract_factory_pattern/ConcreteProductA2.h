#ifndef __CONCRETEPRODUCTA2_H
#define __CONCRETEPRODUCTA2_H
#include "AbstractProductA.h"

class ConcreteProductA2 : public AbstractProductA
{

public :
    ConcreteProductA2();
    virtual ~ConcreteProductA2();
    virtual void OperationA();    
};

#endif
