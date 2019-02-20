#include <iostream>
#include "ConcreteDecorator.h"
using namespace std;

ConcreteDecorator::ConcreteDecorator(Component * pComp):Decorator(pComp)
{

}

ConcreteDecorator::~ConcreteDecorator()
{

}

void ConcreteDecorator::AddOperation()
{
    cout<<"ConcreteDecorator add Operation"<<endl;
}

void ConcreteDecorator::Operation()
{
    Decorator::Operation();
    AddOperation();
}
