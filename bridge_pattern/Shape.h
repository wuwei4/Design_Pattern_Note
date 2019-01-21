#ifndef __SHAPE_H
#define __SHAPE_H

#include "Color.h"

class Shape
{
public:
    Shape();
    virtual ~Shape();
    Shape(Color *colr);
    virtual void Operation() = 0;
protected:
    Color *pColr;
};

#endif
