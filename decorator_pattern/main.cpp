#include <iostream>

#include "ConcreteComponent.h"
#include "ConcreteDecorator.h"
#include "ConcreteDecorator2.h"

using namespace std;

int main(int argc, char *argv[])
{

    ConcreteComponent *pConComp = new ConcreteComponent();
    Component *pConDecor = new ConcreteDecorator(pConComp);
    pConDecor->Operation();
    cout<<"***********************************"<<endl;
    Component *pConDecor2 = new ConcreteDecorator2(pConDecor);
    pConDecor2->Operation();

    delete pConComp;
    delete pConDecor;
    delete pConDecor2;
    return 0;
}

