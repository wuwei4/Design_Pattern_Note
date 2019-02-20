#ifndef __FLYWEIGHTFACTORY_H
#define __FLYWEIGHTFACTORY_H
#include <map>
#include <string>
#include "Flyweight.h"
using namespace std;
class FlyweightFactory
{
public:
    FlyweightFactory();
    virtual ~FlyweightFactory();
    Flyweight *GetFlyweight(string Str);
private:
    map<string, Flyweight *> vFlyweight;
};

#endif

