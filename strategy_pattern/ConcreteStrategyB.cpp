#include <iostream>
#include "ConcreteStrategyB.h"

#include "Context.h"


using namespace std;

Strategy *ConcreteStrategyB::pSt = NULL;


ConcreteStrategyB::ConcreteStrategyB()
{

}

ConcreteStrategyB::~ConcreteStrategyB()
{

}

Strategy *ConcreteStrategyB::SingleInstance()
{
    if(NULL == pSt){
        pSt = new ConcreteStrategyB();
    }
    return pSt;
}

void ConcreteStrategyB::Alogrithm()
{
   cout<<"**StrategyB -- Alogrithm**"<<endl;
}




