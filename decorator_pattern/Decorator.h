#ifndef __DECORATOR_H
#define __DECORATOR_H
#include "Component.h"

class Decorator:public Component
{
public:
    Decorator(Component *pComp);
    virtual ~Decorator();
    //virtual void AddOperation();
    virtual void Operation();
private:
    Component *pComponent;
};


#endif

