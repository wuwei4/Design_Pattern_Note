#include "Context.h"


Context::Context()
{
    
}


Context::~Context()
{

}

void Context::SetStrategy(Strategy * pStratgy)
{
    pStrategy = pStratgy;
}

void Context::Alogrithm()
{
    pStrategy->Alogrithm();
};



