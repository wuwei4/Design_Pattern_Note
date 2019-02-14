#ifndef __STRATEGY_H
#define __STRATEGY_H

typedef struct strategy_t{
    void (*serial_print)();
}strategy;

strategy *new_uart_strategy();
void delete_uart_strategy(strategy *pstratgy);
strategy *new_can_strategy();
void delete_can_strategy(strategy *pstratgy);



#endif
