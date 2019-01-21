#include <iostream>
#include "Product.h"

using namespace std;
Product::Product()
{

}

Product::~Product()
{

}

void Product::SetParam1(int arg)
{
    Param1 = arg;
}

void Product::SetParam2(int arg)
{
    Param2 = arg;
}

void Product::ShowParam()
{
    cout<<"Product Paramter:"<<Param1<<' '<<Param2<<endl;
}

