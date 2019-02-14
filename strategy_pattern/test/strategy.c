#include "context.h"
#include "strategy.h"


static void uart_print();
static void can_print();


strategy *new_uart_strategy()
{
    static strategy *pstrategy_uart = NULL;
    if(NULL == pstrategy_uart){
        pstrategy_uart = (strategy *)malloc(sizeof(strategy));
        assert(NULL != pstrategy_uart);
        pstrategy_uart->serial_print = uart_print;    
    }
    return pstrategy_uart;
}

void delete_uart_strategy(strategy *pstratgy)
{
    free(pstratgy);
}

strategy *new_can_strategy()
{
    static strategy *pstrategy_can = NULL;
    if(NULL == pstrategy_can){
        pstrategy_can = (strategy *)malloc(sizeof(strategy));
        assert(NULL != pstrategy_can);
        pstrategy_can->serial_print = can_print;    
    }
    return pstrategy_can;
}

void delete_can_strategy(strategy *pstratgy)
{
    free(pstratgy);
}


static void uart_print()
{
    printf("**uart_print**\r\n");
}

static void can_print()
{
    printf("**can_print**\r\n");
}


