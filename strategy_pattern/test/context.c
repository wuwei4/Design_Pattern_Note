#include "strategy.h"
#include "context.h"

static void context_setstrategy(context *pcontext, strategy* pstratgy);
static void context_serialprint(context *pcontext);


context * new_context()
{
    context *pcontext = (context *)malloc(sizeof(context));
    assert(NULL != pcontext);
    pcontext->pstrategy = NULL;
    pcontext->set_strategy = context_setstrategy;
    pcontext->serial_print = context_serialprint;
    return pcontext;
}

void delete_context(context *pcontext)
{
    free(pcontext);
}

static void context_setstrategy(context *pcontext, strategy* pstratgy)
{
    assert((NULL != pcontext)&&(NULL !=pstratgy));
    
    pcontext->pstrategy = pstratgy;

}

static void context_serialprint(context *pcontext)
{
    (pcontext->pstrategy)->serial_print();
}

