#ifndef __STATE_H
#define __STATE_H

typedef struct context_t context;


typedef struct state_t{
    void (*handle)(struct context_t *pcontext);
}state;


state *new_state_idle();


#endif
