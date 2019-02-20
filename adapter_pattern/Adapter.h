#ifndef __ADAPTER_H
#define __ADAPTER_H

#include "Target.h"
#include "Adaptee.h"

class Adapter:public Target
{
public:
    Adapter(Adaptee *pAdap);
    virtual ~Adapter();
    virtual void Require();
private:
    Adaptee *pAdaptee;
};

#endif

