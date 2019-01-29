#include "TimerObserver.h"
#include "TimerSubject.h"
#include "Subject.h"
#include "Observer.h"


int main(int argv, char *argc[])
{
    Subject *TSub = new TimerSubject();
    Observer *TObs = new TimerObserver(100);
    TSub->Attach(TObs);
    for(int indx = 0; indx < 200; indx++){
        //TimerSubject::Cnt++;
        /*基类指针调用派生类中定义的方法*/
        dynamic_cast<TimerSubject*>(TSub)->HandleFunc();
        //cout<<TimerSubject::Cnt<<endl;
        TSub->Notify();
    }
    return 0;
}
