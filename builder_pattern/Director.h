#ifndef __DIRECTOR_H
#define __DIRECTOR_H
#include "Product.h"
#include "Builder.h"
class Director
{
public:
    Director();
    virtual ~Director();
    Product *Construct();
    void SetpBuilder(Builder *pbdr);
private:
    Builder *pBuilder;
};

#endif
