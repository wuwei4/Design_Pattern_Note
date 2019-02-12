#include <iostream>
#include "ConcreteStateA.h"
#include "ConcreteStateB.h"
#include "Context.h"

using namespace std;

State *ConcreteStateB::pState = NULL;


ConcreteStateB::ConcreteStateB()
{

}

ConcreteStateB::~ConcreteStateB()
{

}

State *ConcreteStateB::SingleInstance()
{
    if(NULL == pState){
        pState = new ConcreteStateB();
    }
    return pState;
}

void ConcreteStateB::Handle(Context * pContext)
{
    cout<<"In State B you can do something else here,then change to State A"<<endl;
    pContext->ChangeState(ConcreteStateA::SingleInstance());
}




