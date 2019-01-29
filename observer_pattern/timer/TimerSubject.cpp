#include "TimerSubject.h"




TimerSubject::TimerSubject()
{
    //Initial timer
    //Register timer irq
}

TimerSubject::~TimerSubject()
{

}

void TimerSubject::HandleFunc()
{
    State++;
    //SetState(Cnt);
    Notify();
}

int TimerSubject::GetState()
{
    return State;
}


void TimerSubject::SetState(int i)
{
    State = i;
}

