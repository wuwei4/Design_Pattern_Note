#ifndef __CONCRETEBUILDER_H
#define __CONCRETEBUILDER_H

#include "Builder.h"

class ConcreteBuilder:public Builder
{
  
public:
    ConcreteBuilder();
    virtual ~ConcreteBuilder();
    virtual void BuildPat1();
    virtual void BuildPat2();
    //void show();
};

#endif
