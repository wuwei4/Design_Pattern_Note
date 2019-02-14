#ifndef __CONCRETESTRATEAGYA_H
#define __CONCRETESTRATEAGYA_H

#include "Strategy.h"

class ConcreteStrategyA : public Strategy
{
public:
    static Strategy *SingleInstance();
    virtual ~ConcreteStrategyA();
    virtual void Alogrithm();
private:
    ConcreteStrategyA();
    static Strategy *pSt;
};
#endif

