#include <stdlib.h>
#include <assert.h>
#include "command.h"
#include "receiver.h"

static void command_execute(struct command_t *pcomm)
{
    pcomm->precv->action();
}
command *new_command(receiver *precv)
{
    command *pcommand = (command *)malloc(sizeof(command));
    assert(NULL != pcommand);
    pcommand->precv = precv;
    pcommand->execute = command_execute;
    return pcommand;
}

void delete_command(command *pcomm)
{
    free(pcomm);
}


