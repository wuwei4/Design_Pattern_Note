#ifndef __CONCRETEFLYWEIGHT_H
#define __CONCRETEFLYWEIGHT_H

#include <string>

#include "Flyweight.h"
using namespace std;

class ConcreteFlyweight:public Flyweight
{
public:
    ConcreteFlyweight(string Str);
    virtual ~ConcreteFlyweight();
    virtual void Operation();

private:
    string String;
};

#endif
