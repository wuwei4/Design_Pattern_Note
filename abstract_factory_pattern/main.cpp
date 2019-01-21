
#include "AbstractFactory.h"
#include "ConcreteFactoryA.h"
#include "ConcreteFactoryB.h"

int main(int argc, char *argv[])
{
    AbstractFactory *fca1 = new ConcreteFactoryA();
    AbstractProductA *pra1 = fca1->CreateProductA();
    pra1->OperationA();
    AbstractProductB *prb1 = fca1->CreateProductB();
    prb1->OperationB();

    AbstractFactory *fca2 = new ConcreteFactoryB();
    AbstractProductA *pra2 = fca2->CreateProductA();
    pra2->OperationA();
    AbstractProductB *prb2 = fca2->CreateProductB();
    prb2->OperationB();
    

    delete prb2;
    delete pra2;
    delete fca2;

    delete prb1;
    delete pra1;
    delete fca1;
    return 0;
}

