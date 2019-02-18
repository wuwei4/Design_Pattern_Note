#ifndef __CONCRETECOMMAND_H
#define __CONCRETECOMMAND_H
#include "Command.h"
#include "Receiver.h"
class ConcreteCommand:public Command
{
public:
    ConcreteCommand(Receiver *pRev);
    virtual ~ConcreteCommand();
    virtual void Execute();
private:
    Receiver *pReceiver;
};

#endif

