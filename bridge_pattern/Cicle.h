#ifndef __CICLE_H
#define __CICLE_H

#include "Shape.h"

class Cicle:public Shape
{
public:
    Cicle();
    virtual ~Cicle();
    Cicle(Color *pclr);
    virtual void Operation();
};


#endif
