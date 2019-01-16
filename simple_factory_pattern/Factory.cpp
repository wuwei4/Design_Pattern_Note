#include "Factory.h"
#include "ConcreteProductA.h"
#include "ConcreteProductB.h"

Factory::Factory()
{

}
Factory::~Factory()
{

}

Product *Factory::CreatProduct(char ProNam)
{
    if('A' == ProNam){
        return new ConcreteProductA();
    }else if('B' == ProNam){
        return new ConcreteProductB();
    }
    return NULL;
}


