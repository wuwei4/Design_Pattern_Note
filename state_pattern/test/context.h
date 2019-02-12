#ifndef __CONTEXT_H
#define __CONTEXT_H
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include "state.h"

typedef struct context_t
{   
    state *pcurrent_state;
    void (*change_state)(struct context_t *pcontext, state* pnext_state);
    void (*request)(struct context_t *pcontext);
}context;


context * new_context();
void delete_context(context *pcontext);

#endif
