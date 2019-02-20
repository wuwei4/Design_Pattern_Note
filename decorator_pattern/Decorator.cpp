#include "Decorator.h"

Decorator::Decorator(Component * pComp)
{
    pComponent = pComp;
}

Decorator::~Decorator()
{

}

void Decorator::Operation()
{
    pComponent->Operation();
}



