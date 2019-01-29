#ifndef __CONCRETESUBJECT_H
#define __CONCRETESUBJECT_H

#include "Subject.h"

class ConcreteSubject:public Subject
{
public:
    ConcreteSubject();
    virtual ~ConcreteSubject();
    virtual int GetState();
    virtual void SetState(int i);
private:
    int State;    
};

#endif
