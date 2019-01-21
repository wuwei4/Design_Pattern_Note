#ifndef __BUILDER_H
#define __BUILDER_H

#include "Product.h"

class Builder
{

public:
    Builder();
    virtual ~Builder();
    virtual void BuildPat1() = 0;
    virtual void BuildPat2() = 0;
    Product *GetpPro();
protected:
    Product *pPro;
};



#endif
