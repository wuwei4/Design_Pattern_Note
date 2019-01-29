#include "ConcreteSubject.h"

ConcreteSubject::ConcreteSubject()
{

}

ConcreteSubject::~ConcreteSubject()
{

}

void ConcreteSubject::SetState(int i)
{
    State = i;
}

int ConcreteSubject::GetState()
{
    return State;
}

