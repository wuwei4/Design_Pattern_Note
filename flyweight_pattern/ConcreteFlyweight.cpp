#include <iostream>
#include "ConcreteFlyweight.h"
using namespace std;

ConcreteFlyweight::ConcreteFlyweight(string Str)
{
    String = Str;
}

ConcreteFlyweight::~ConcreteFlyweight()
{

}

void ConcreteFlyweight::Operation()
{
    cout<<String<<endl;
}
