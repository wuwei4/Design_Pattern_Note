#ifndef __CONCRETEOBSERVER_H
#define __CONCRETEOBSERVER_H

#include "Observer.h"
#include "Subject.h"

class ConcreteObserver:public Observer
{
public:
    ConcreteObserver();
    ConcreteObserver(int index);
    virtual ~ConcreteObserver();
    virtual void Update(Subject *pSub);
private:
    int Index;
    int CurrentState;
};

#endif
