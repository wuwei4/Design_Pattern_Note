#ifndef __CONCRETESTATEA_H
#define __CONCRETESTATEA_H

#include "State.h"

class ConcreteStateA : public State
{
public:
    static State *SingleInstance();
    virtual ~ConcreteStateA();
    virtual void Handle(Context * pContext);
private:
    ConcreteStateA();
    static State *pState;
};
#endif

