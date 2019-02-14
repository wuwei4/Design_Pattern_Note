#include <iostream>
#include "ConcreteStrategyA.h"

#include "Context.h"


using namespace std;

Strategy *ConcreteStrategyA::pSt = NULL;


ConcreteStrategyA::ConcreteStrategyA()
{

}

ConcreteStrategyA::~ConcreteStrategyA()
{

}

Strategy *ConcreteStrategyA::SingleInstance()
{
    if(NULL == pSt){
        pSt = new ConcreteStrategyA();
    }
    return pSt;
}

void ConcreteStrategyA::Alogrithm()
{
   cout<<"**StrategyA -- Alogrithm**"<<endl;
}




