#include <stdlib.h>
#include <assert.h>
#include "invoker.h"

static void invoker_call(invoker *pinv);

static void invoker_call(invoker *pinv)
{
    pinv->pcomm->execute(pinv->pcomm);
}

invoker *new_invoker(command *pcomm)
{
    invoker *pinv = (invoker *)malloc(sizeof(invoker));
    assert(NULL != pinv);
    pinv->pcomm = pcomm;
    pinv->call = invoker_call;
    return pinv;
}


void delete_invoker(invoker *pinv)
{
    free(pinv);
}

