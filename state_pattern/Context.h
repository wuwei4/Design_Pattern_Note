#ifndef __CONTEXT_H
#define __CONTEXT_H

#include "State.h"

class Context
{
public:
    Context();
    virtual ~Context();
    void ChangeState(State *pState);
    void RequestChange();
private:
    State *pCurrentState;
};

#endif
