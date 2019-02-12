#include "context.h"
#include "state.h"



static void state_a_handle(context *pcontext);
static void state_b_handle(context *pcontext);
static void state_c_handle(context *pcontext);


static state *new_state_a()
{
    static state *pstate_a = NULL;
    if(NULL != pstate_a)
        return pstate_a;
    pstate_a = (state *)malloc(sizeof(state));
    assert(NULL != pstate_a);
    pstate_a->handle = state_a_handle;
    return pstate_a;
}

void delete_state_a(state *pstate)
{
    free(pstate);
}

static state *new_state_b()
{
    static state *pstate_b = NULL;
    if(NULL != pstate_b)
        return pstate_b;
    pstate_b = (state *)malloc(sizeof(state));
    assert(NULL != pstate_b);
    pstate_b->handle = state_b_handle;
    return pstate_b;
}

void delete_state_b(state *pstate)
{
    free(pstate);
}


state *new_state_idle()
{
    return new_state_a();
}

static state *new_state_c()
{
    static state *pstate_c = NULL;
    if(NULL != pstate_c)
        return pstate_c;
    pstate_c = (state *)malloc(sizeof(state));
    assert(NULL != pstate_c);
    pstate_c->handle = state_c_handle;
    return pstate_c;
}

void delete_state_c(state *pstate)
{
    free(pstate);
}


static void state_a_handle(context *pcontext)
{
    assert(NULL != pcontext);
    printf("**state_a do something else**\r\n");
    pcontext->change_state(pcontext, new_state_b());
}

static void state_b_handle(context *pcontext)
{
    assert(NULL != pcontext);
    printf("**state_b do something else**\r\n");
    pcontext->change_state(pcontext, new_state_c());
}

static void state_c_handle(context *pcontext)
{
    assert(NULL != pcontext);
    printf("**state_c do something else**\r\n");
    pcontext->change_state(pcontext, new_state_a());
}


