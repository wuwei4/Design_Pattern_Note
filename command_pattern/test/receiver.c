
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include "receiver.h"

static void receiver_action()
{
    printf("***take action***\r\n");
}

receiver *new_receiver()
{
    receiver *precv = (receiver *)malloc(sizeof(receiver));
    assert(NULL != precv);
    precv->action = receiver_action;
    return precv;
}

void delete_receiver(receiver *precv)
{
    free(precv);
}

