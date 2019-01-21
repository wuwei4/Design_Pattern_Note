#include "ConcreteFactoryA.h"
#include "ConcreteProductA.h"

ConcreteFactoryA::ConcreteFactoryA()
{

}

ConcreteFactoryA::~ConcreteFactoryA()
{

}

Product *ConcreteFactoryA::FactoryMethod()
{
    return new ConcreteProductA();
}



