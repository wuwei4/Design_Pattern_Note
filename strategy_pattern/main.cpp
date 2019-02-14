#include "Context.h"
#include "ConcreteStrategyA.h"
#include "ConcreteStrategyB.h"

int main(int argc, char *argv[])
{
    Strategy *pstrategy1 = ConcreteStrategyA::SingleInstance();
    Context *pContext = new Context();
    pContext->SetStrategy(pstrategy1);
    pContext->Alogrithm();

    Strategy *pstrategy2 = ConcreteStrategyB::SingleInstance();
    pContext->SetStrategy(pstrategy2);
    pContext->Alogrithm();

    return 0;
}
