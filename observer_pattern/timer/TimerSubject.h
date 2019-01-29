#ifndef __TIMERSUBJECT_H
#define __TIMERSUBJECT_H

#include "Subject.h"



class TimerSubject:public Subject
{
public:
    TimerSubject();
    virtual ~TimerSubject();

    void HandleFunc();
    virtual int GetState();
    virtual void SetState(int i);

private:
    int State;
};
#endif
