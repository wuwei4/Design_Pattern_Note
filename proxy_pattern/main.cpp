#include "Proxy.h"

int main(int argc, char *argv[])
{
    Proxy *pProxy = new Proxy();
    pProxy->Require();
    delete pProxy;
    return 0;
}

