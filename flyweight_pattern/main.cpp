#include <iostream>
#include "ConcreteFlyweight.h"
#include "FlyweightFactory.h"
#include "Flyweight.h"
using namespace std;


int main(int argc, char *argv[])
{
    FlyweightFactory factory;
    Flyweight * fw = factory.GetFlyweight("one");
    fw->Operation();
    
    Flyweight * fw2 = factory.GetFlyweight("two");
    fw2->Operation();
    //aready exist in pool
    Flyweight * fw3 = factory.GetFlyweight("one");
    fw3->Operation();
    return 0;
}
