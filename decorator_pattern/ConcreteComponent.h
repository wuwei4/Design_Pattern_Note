#ifndef __CONCRETECOMPONENT_H
#define __CONCRETECOMPONENT_H
#include "Component.h"
class ConcreteComponent:public Component
{
public:
    ConcreteComponent();
    virtual ~ConcreteComponent();
    virtual void Operation();
};


#endif


