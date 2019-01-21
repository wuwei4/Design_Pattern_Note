#include "Color.h"
#include "Shape.h"
#include "Cicle.h"
#include "Square.h"
#include "RedColor.h"
#include "BlueColor.h"


int main(int argc, char *argv[])
{
    Shape *Sa = new Square(new RedColor());
    Sa->Operation();
    Shape *Sb = new Cicle(new BlueColor());
    Sb->Operation();

    delete Sa;
    delete Sb;
    return 0;
}
