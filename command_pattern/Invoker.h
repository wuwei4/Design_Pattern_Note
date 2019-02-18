#ifndef __INVOKER_H
#define __INVOKER_H

#include "Command.h"

class Invoker
{
public:
    Invoker(Command *pComm);
    virtual ~Invoker();
    void Call();
private:
    Command *pCommand;
};    

#endif

