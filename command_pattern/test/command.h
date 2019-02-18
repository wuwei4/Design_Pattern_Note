#ifndef __COMMAND_H
#define __COMMAND_H
#include "receiver.h"
typedef struct command_t{
    receiver *precv;
    void (*execute)(struct command_t *pcomm);
}command;

command *new_command(receiver *precv);
void delete_command(command *pcomm);


#endif

