#include <stdio.h>

#include "context.h"
#include "strategy.h"

/******************************************


*******************************************/


int main(int argc, const char *argv[])
{
    strategy *pst1 = new_uart_strategy();   
    context *pcntxt = new_context();
    pcntxt->set_strategy(pcntxt, pst1);
    pcntxt->serial_print(pcntxt);
    
    strategy *pst2 = new_can_strategy(); 
    pcntxt->set_strategy(pcntxt, pst2);
    pcntxt->serial_print(pcntxt);


    return 0;
}

