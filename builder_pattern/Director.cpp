#include "Director.h"

Director::Director()
{

}

Director::~Director()
{

}

Product *Director::Construct()
{
    pBuilder->BuildPat1();
    pBuilder->BuildPat2();
    return pBuilder->GetpPro();
}

void Director::SetpBuilder(Builder * pbdr)
{
    pBuilder = pbdr;
}


