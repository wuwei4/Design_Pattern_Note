#ifndef __INVOKER_H
#define __INVOKER_H
#include "command.h"

typedef struct invoker_t{
    command *pcomm;
    void (*call)(struct invoker_t *pinv);
}invoker;

invoker *new_invoker(command *pcomm);
void delete_invoker(invoker *pinv);


#endif


