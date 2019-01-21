#include "ConcreteFactoryA.h"
#include "ConcreteProductA1.h"
#include "ConcreteProductB1.h"

ConcreteFactoryA::ConcreteFactoryA()
{

}

ConcreteFactoryA::~ConcreteFactoryA()
{

}

AbstractProductA *ConcreteFactoryA::CreateProductA()
{
    return new ConcreteProductA1();
}

AbstractProductB *ConcreteFactoryA::CreateProductB()
{
    return new ConcreteProductB1();
}



