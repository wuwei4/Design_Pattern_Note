#ifndef __FACADE_H
#define __FACADE_H

#include "SubSystemA.h"
#include "SubSystemB.h"

class Facade
{
public:
    Facade();
    virtual ~Facade();
    void Operation();
private:
    SubSystemA *pSubA;
    SubSystemB *pSubB;
};

#endif

