#ifndef __PRODUCT_H
#define __PRODUCT_H
#include <iostream>
using namespace std;
class Product
{
public:
    Product();
    virtual ~Product();
    virtual void Operation() = 0;
};

#endif