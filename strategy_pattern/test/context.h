#ifndef __CONTEXT_H
#define __CONTEXT_H
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include "strategy.h"

typedef struct context_t
{   
    strategy *pstrategy;
    void (*set_strategy)(struct context_t *pcontext, strategy *pstratgy);
    void (*serial_print)(struct context_t *pcontext);
}context;


context * new_context();
void delete_context(context *pcontext);

#endif
