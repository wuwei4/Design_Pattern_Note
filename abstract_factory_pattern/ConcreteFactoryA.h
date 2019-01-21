#ifndef __CONCRETEFACTORYA_H
#define __CONCRETEFACTORYA_H

#include "AbstractFactory.h"



class ConcreteFactoryA : public AbstractFactory
{

public:
    ConcreteFactoryA();
    virtual ~ConcreteFactoryA();
    virtual AbstractProductA *CreateProductA();
    virtual AbstractProductB *CreateProductB();
};

#endif