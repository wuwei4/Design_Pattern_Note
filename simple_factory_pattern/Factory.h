#ifndef __FACTORY_H
#define __FACTORY_H

#include "Product.h"

class Factory
{
public :
    Factory();
    virtual ~Factory() = 0;
    static Product *CreatProduct(char ProNam);
};
#endif
