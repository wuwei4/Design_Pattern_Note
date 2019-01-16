#include "Product.h"
#include "Factory.h"

int main(int argc, char *argv[])
{
    Factory *fa = new Factory();
    Product *pra = fa->CreatProduct('A');
    pra->Operation();
    Product *prb = fa->CreatProduct('B');
    prb->Operation();

    delete prb;
    delete pra;
    delete fa;
    return 0;
}

