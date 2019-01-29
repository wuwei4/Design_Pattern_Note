#include "ConcreteObserver.h"
#include <iostream>
using namespace std;

ConcreteObserver::ConcreteObserver(int index)
{
    Index = index;
}

ConcreteObserver::ConcreteObserver()
{

}

ConcreteObserver::~ConcreteObserver()
{

}

void ConcreteObserver::Update(Subject *pSub)
{
    CurrentState = pSub->GetState();
    cout<<"Object_"<<Index<<":"<<"CurrentState = "<<CurrentState<<endl;
}


