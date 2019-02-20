#include "Adaptee.h"
#include "Target.h"
#include "Adapter.h"


int main(int argc, char *argv[])
{
    Adaptee *pAdaptee = new Adaptee();
    Target *pAdapter = new Adapter(pAdaptee);
    pAdapter->Require();
    delete pAdaptee;
    delete pAdapter;
}
