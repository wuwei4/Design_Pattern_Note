#include "Product.h"
#include "ConcreteBuilder.h"
#include "Director.h"

int main(int argc, char *argv[])
{
    ConcreteBuilder *pbuilder = new ConcreteBuilder();
    Director Directr;
    Directr.SetpBuilder(pbuilder);
    Product *prd = Directr.Construct();
    prd->ShowParam();
    delete prd;
    delete pbuilder;
    return 0;
}
