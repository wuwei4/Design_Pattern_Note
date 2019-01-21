#include "ConcreteBuilder.h"



ConcreteBuilder::ConcreteBuilder()
{

}

ConcreteBuilder::~ConcreteBuilder()
{

}

void ConcreteBuilder::BuildPat1()
{
    pPro->SetParam1(11111);
}

void ConcreteBuilder::BuildPat2()
{
    pPro->SetParam2(22222);
}

#if 0
void ConcreteBuilder::show()
{

    pPro->ShowParam();
}
#endif

