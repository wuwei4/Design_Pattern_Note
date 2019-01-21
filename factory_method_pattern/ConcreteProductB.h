#ifndef __CONCRETEPRODUCTB_H
#define __CONCRETEPRODUCTB_H
#include "Product.h"

class ConcreteProductB : public Product
{

public :
    ConcreteProductB();
    virtual ~ConcreteProductB();
    virtual void Operation();    
};

#endif
