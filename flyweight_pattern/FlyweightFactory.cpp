#include <iostream>
#include "FlyweightFactory.h"
#include "ConcreteFlyweight.h"

using namespace std;
FlyweightFactory::FlyweightFactory()
{

}


FlyweightFactory::~FlyweightFactory()
{

}

Flyweight *FlyweightFactory::GetFlyweight(string Str)
{
    map<string,Flyweight*>::iterator itr = vFlyweight.find(Str);
    if(itr == vFlyweight.end())
    {
        Flyweight * fw = new ConcreteFlyweight(Str);
        vFlyweight.insert(make_pair(Str,fw));
        return fw;    
    }
    else
    {
        cout << "aready in the pool,use the exist one:" << endl;
        return itr->second;
    }        
}




