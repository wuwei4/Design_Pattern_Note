#include "Facade.h"


Facade::Facade()
{
    pSubA = new SubSystemA();
    pSubB = new SubSystemB();
}

Facade::~Facade()
{
    delete pSubA;
    delete pSubB;
}


void Facade::Operation()
{
    pSubA->Operation();
    pSubB->Operation();
}
