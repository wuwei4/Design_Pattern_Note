#ifndef __SUBJECT_H
#define __SUBJECT_H

#include <vector>

#include "Observer.h"

using namespace std;
class Subject
{
public:
    Subject();
    virtual ~Subject();
    void Attach(Observer *pObserver);
    void Dettach(Observer *pObserver);
    void Notify();
    virtual int GetState() = 0;
    virtual void SetState(int i) = 0;
private:
    vector<Observer*> VtObj;
};

#endif
