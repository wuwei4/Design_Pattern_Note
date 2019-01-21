#include "Product.h"
#include "Factory.h"
#include "ConcreteFactoryA.h"
#include "ConcreteFactoryB.h"

int main(int argc, char *argv[])
{
    Factory *fca = new ConcreteFactoryA();
    Product *pra = fca->FactoryMethod();
    pra->Operation();
    Factory *fcb = new ConcreteFactoryB();
    Product *prb = fcb->FactoryMethod();
    prb->Operation();
    delete prb;
    delete fcb;
    delete pra;
    delete fca;
    return 0;
}

