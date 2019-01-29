#ifndef __OBSERVER_H
#define __OBSERVER_H

class Subject;

class Observer
{
public:
    Observer();
    virtual ~Observer();
    virtual void Update(Subject *pSub) = 0;
};

#endif
