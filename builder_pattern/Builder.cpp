#include "Builder.h"

Builder::Builder()
{
    pPro = new Product();
}

Builder::~Builder()
{

}

Product *Builder::GetpPro()
{
    return pPro;
}



