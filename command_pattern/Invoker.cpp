#include "Invoker.h"

Invoker::Invoker(Command * pComm)
{
    pCommand = pComm;
}

Invoker::~Invoker()
{

}

void Invoker::Call()
{
    pCommand->Execute();
}


