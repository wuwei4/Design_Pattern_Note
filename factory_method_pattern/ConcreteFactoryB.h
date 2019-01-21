#ifndef __CONCRETEFACTORYB_H
#define __CONCRETEFACTORYB_H

#include "Factory.h"



class ConcreteFactoryB: public Factory
{
public:
    ConcreteFactoryB();
    virtual ~ConcreteFactoryB();
    virtual Product *FactoryMethod();
};

#endif