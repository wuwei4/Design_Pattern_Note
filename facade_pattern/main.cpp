#include "Facade.h"


int main(int argc, char *argv[])
{
    Facade *pFacade = new Facade();
    pFacade->Operation();
    delete pFacade;
    return 0;
}
