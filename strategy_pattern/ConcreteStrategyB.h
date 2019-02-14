#ifndef __CONCRETESTRATEAGYB_H
#define __CONCRETESTRATEAGYB_H

#include "Strategy.h"

class ConcreteStrategyB : public Strategy
{
public:
    static Strategy *SingleInstance();
    virtual ~ConcreteStrategyB();
    virtual void Alogrithm();
private:
    ConcreteStrategyB();
    static Strategy *pSt;
};
#endif

