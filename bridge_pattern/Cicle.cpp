#include <iostream>
#include "Cicle.h"


using namespace std;
Cicle::Cicle()
{

}

Cicle::~Cicle()
{

}

void Cicle::Operation()
{
    cout<<"***cicle shap***"<<endl;
    pColr->Operation();
}

Cicle::Cicle(Color * pclr):Shape(pclr)
{

}


