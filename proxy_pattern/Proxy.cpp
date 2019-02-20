#include <iostream>
#include "Proxy.h"
#include "RealSubject.h"
using namespace std;

Proxy::Proxy()
{
    pSubject = new RealSubject();
}

Proxy::~Proxy()
{
    delete pSubject;
}


void Proxy::PreRequire()
{
    cout<<"***PreRequire***"<<endl;
}

void Proxy::Require()
{
    PreRequire();
    pSubject->Require();
    PosRequire();
}

void Proxy::PosRequire()
{
    cout<<"***PosRequire***"<<endl;
}
