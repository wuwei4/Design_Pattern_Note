#ifndef __SQUARE_H
#define __SQUARE_H

#include "Shape.h"

class Square:public Shape
{
public:
    Square();
    virtual ~Square();
    Square(Color *pclr);
    virtual void Operation();
};


#endif
