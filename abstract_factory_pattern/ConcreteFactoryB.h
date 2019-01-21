#ifndef __CONCRETEFACTORYB_H
#define __CONCRETEFACTORYB_H

#include "AbstractFactory.h"



class ConcreteFactoryB: public AbstractFactory
{
public:
    ConcreteFactoryB();
    virtual ~ConcreteFactoryB();
    virtual AbstractProductA *CreateProductA();
    virtual AbstractProductB *CreateProductB();
};

#endif