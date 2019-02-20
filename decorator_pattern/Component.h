#ifndef __COMPONENT_H
#define __COMPONENT_H

class Component
{
public:
    Component();
    virtual ~Component();
    virtual void Operation() = 0;
};

#endif

