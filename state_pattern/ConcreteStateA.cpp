#include <iostream>
#include "ConcreteStateA.h"
#include "ConcreteStateB.h"
#include "Context.h"


using namespace std;

State *ConcreteStateA::pState = NULL;


ConcreteStateA::ConcreteStateA()
{

}

ConcreteStateA::~ConcreteStateA()
{

}

State *ConcreteStateA::SingleInstance()
{
    if(NULL == pState){
        pState = new ConcreteStateA();
    }
    return pState;
}

void ConcreteStateA::Handle(Context *pContext)
{
    cout<<"In State A you can do something else here,then change to State B"<<endl;
    pContext->ChangeState(ConcreteStateB::SingleInstance());
}




