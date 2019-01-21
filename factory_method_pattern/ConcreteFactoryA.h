#ifndef __CONCRETEFACTORYA_H
#define __CONCRETEFACTORYA_H

#include "Factory.h"



class ConcreteFactoryA : public Factory
{

public:
    ConcreteFactoryA();
    virtual ~ConcreteFactoryA();
    virtual Product *FactoryMethod();
};

#endif