#include "Context.h"

int main(int argc, char *argv[])
{
    Context *pContext = new Context();
    pContext->RequestChange();
    pContext->RequestChange();
    pContext->RequestChange();
    pContext->RequestChange();
    return 0;
}
