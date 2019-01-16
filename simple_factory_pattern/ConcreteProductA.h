#ifndef __CONCRETEPRODUCTA_H
#define __CONCRETEPRODUCTA_H
#include "Product.h"
class ConcreteProductA : public Product
{

public :
    ConcreteProductA();
    virtual ~ConcreteProductA();
    virtual void Operation();    
};

#endif
