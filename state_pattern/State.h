#ifndef __STATE_H
#define __STATE_H

class Context;

class State
{
public:
    State();
    virtual ~State();
    virtual void Handle(Context *pContext);
};

#endif
