#ifndef __TIMEROBSERVER_H
#define __TIMEROBSERVER_H
#include "Observer.h"
#include <iostream>
using namespace std;

class TimerObserver:public Observer
{
public :
    TimerObserver();
    TimerObserver(int Prod);
    virtual ~TimerObserver();
    virtual void Update(Subject * pSub);
private :
    int Period;
    int perState;
    int curSate;
};

#endif
