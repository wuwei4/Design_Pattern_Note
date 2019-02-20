#ifndef __FLYWEIGHT_H
#define __FLYWEIGHT_H

class Flyweight
{
public:
    Flyweight();
    virtual ~Flyweight();
    virtual void Operation() = 0;
};

#endif
