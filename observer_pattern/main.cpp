#include "ConcreteSubject.h"
#include "ConcreteObserver.h"

int main(int argc, char *argv[])
{
    Observer *pOb1 = new ConcreteObserver(1);
    Observer *pOb2 = new ConcreteObserver(2);
    Subject *pSub = new ConcreteSubject();
    pSub->Attach(pOb1);
    pSub->SetState(1);
    pSub->Notify();
    pSub->Attach(pOb2);
    pSub->SetState(2);
    pSub->Notify();
    pSub->Dettach(pOb1);
    pSub->Notify();
    delete pSub;
    delete pOb1;
    delete pOb2;
}
