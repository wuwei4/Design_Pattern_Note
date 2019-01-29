#include "Subject.h"

Subject::Subject()
{

}

Subject::~Subject()
{

}

void Subject::Attach(Observer *pObserver)
{
    VtObj.push_back(pObserver);
}

void Subject::Dettach(Observer * pObserver)
{

    for(vector<Observer*>::iterator itr = VtObj.begin();
        itr != VtObj.end(); itr++){
        if(*itr == pObserver){
            VtObj.erase(itr);
            return;
        }            
    }
    
}

void Subject::Notify()
{

    for(vector<Observer*>::iterator itr = VtObj.begin();
        itr != VtObj.end(); itr++){    
        (*itr)->Update(this);        
    }
    
}


