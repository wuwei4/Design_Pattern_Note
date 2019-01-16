#include "Product.h"
#include "Factory.h"

int main(int argc, char *argv[])
{
    Product *pra = Factory::CreatProduct('A');
    pra->Operation();
    Product *prb = Factory::CreatProduct('B');
    prb->Operation();

    delete prb;
    delete pra;
    
    return 0;
}

