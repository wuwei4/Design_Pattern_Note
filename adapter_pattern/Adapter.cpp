

#include "Adapter.h"


Adapter::Adapter(Adaptee * pAdap)
{
    pAdaptee = pAdap;
}

Adapter::~Adapter()
{

}


void Adapter::Require()
{
    pAdaptee->SpecRequire();
}


