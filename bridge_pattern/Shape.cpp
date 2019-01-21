#include "Shape.h"


Shape::Shape()
{

}

Shape::Shape(Color * colr)
{
    pColr = colr;
}

Shape::~Shape()
{
    delete pColr;
}


