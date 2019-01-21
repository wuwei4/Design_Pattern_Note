#include <iostream>
#include "Square.h"


using namespace std;
Square::Square()
{

}

Square::~Square()
{

}

void Square::Operation()
{
    cout<<"***square shap***"<<endl;
    pColr->Operation();
}

Square::Square(Color * pclr):Shape(pclr)
{

}


