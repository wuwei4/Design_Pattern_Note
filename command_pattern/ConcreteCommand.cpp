#include "ConcreteCommand.h"

ConcreteCommand::ConcreteCommand(Receiver * pRev)
{
    pReceiver = pRev;
}

ConcreteCommand::~ConcreteCommand()
{

}


void ConcreteCommand::Execute()
{
    pReceiver->Action();
}



