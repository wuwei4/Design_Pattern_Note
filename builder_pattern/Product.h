#ifndef __PRODUCT_H
#define __PRODUCT_H

class Product
{
public :
    Product();
    virtual ~Product();
    void SetParam1(int arg);
    void SetParam2(int arg);
    void ShowParam();
private :
    int Param1;
    int Param2;
};


#endif
