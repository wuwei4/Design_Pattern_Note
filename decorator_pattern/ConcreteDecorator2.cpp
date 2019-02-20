#include <iostream>
#include "ConcreteDecorator2.h"
using namespace std;

ConcreteDecorator2::ConcreteDecorator2(Component * pComp):Decorator(pComp)
{

}

ConcreteDecorator2::~ConcreteDecorator2()
{

}

void ConcreteDecorator2::AddOperation()
{
    cout<<"ConcreteDecorator add Operation 2"<<endl;
}

void ConcreteDecorator2::Operation()
{
    Decorator::Operation();
    AddOperation();
}
