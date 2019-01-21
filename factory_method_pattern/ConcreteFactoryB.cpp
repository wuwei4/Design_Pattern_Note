#include "ConcreteFactoryB.h"
#include "ConcreteProductB.h"

ConcreteFactoryB::ConcreteFactoryB()
{

}

ConcreteFactoryB::~ConcreteFactoryB()
{

}

Product *ConcreteFactoryB::FactoryMethod()
{
    return new ConcreteProductB();
}



