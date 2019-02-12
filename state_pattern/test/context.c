#include "state.h"
#include "context.h"

static void context_pchgstate(context *pcontext, state* pstate);
static void context_request(context *pcontext);

context * new_context()
{
    context *pcontext = (context *)malloc(sizeof(context));
    assert(NULL != pcontext);
    pcontext->pcurrent_state = new_state_idle();
    pcontext->change_state = context_pchgstate;
    pcontext->request = context_request;
    return pcontext;
}

void delete_context(context *pcontext)
{
    free(pcontext);
}

static void context_pchgstate(struct context_t *pcontext, state* pstate)
{
    assert((NULL != pcontext)&&(NULL !=pstate));
    
    pcontext->pcurrent_state = pstate;

}

static void context_request(struct context_t *pcontext)
{
    (pcontext->pcurrent_state)->handle(pcontext);

}

