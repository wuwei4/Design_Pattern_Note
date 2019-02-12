#include "Context.h"
#include "ConcreteStateA.h"



Context::Context()
{
    pCurrentState = ConcreteStateA::SingleInstance();
}


Context::~Context()
{

}

void Context::ChangeState(State * pState)
{
    pCurrentState = pState;
}


void Context::RequestChange()
{
    pCurrentState->Handle(this);
}



