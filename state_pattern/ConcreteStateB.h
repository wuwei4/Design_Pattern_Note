#ifndef __CONCRETESTATEB_H
#define __CONCRETESTATEB_H
#include "State.h"
class ConcreteStateB : public State
{
public:
    static State *SingleInstance();
    virtual ~ConcreteStateB();
    virtual void Handle(Context * pContext);
private:
    ConcreteStateB();
    static State *pState;
};
#endif

