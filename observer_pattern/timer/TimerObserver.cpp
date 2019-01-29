#include "TimerObserver.h"
#include "Subject.h"
TimerObserver::TimerObserver()
{

}

TimerObserver::~TimerObserver()
{

}

TimerObserver::TimerObserver(int Prod)
{
    Period = Prod;
}

void TimerObserver::Update(Subject * pSub)
{
    curSate = pSub->GetState();
    cout<<"current = "<<curSate<<endl;
    cout<<"per = "<<perState<<endl;
    if(curSate > perState){
        if((curSate - perState) >= Period){
            perState = curSate;
            cout<<"Timer on\r\n"<<endl;
        }
    }
    /*
    else(curSate < perState){
        if(curSate + )
    }
    */
}



