#include <iostream>
#include "Singleton.h"
using namespace std;
Singleton *Singleton::pSt = NULL;
Singleton::Singleton()
{

}

Singleton::~Singleton()
{
    delete pSt;
}

Singleton *Singleton::GetInstance()
{
    if(NULL == pSt){
        pSt = new Singleton();
    }
    return pSt;
}

void Singleton::Operation()
{
    cout<<"Singleton::"<<__FUNCTION__<<endl;
}


