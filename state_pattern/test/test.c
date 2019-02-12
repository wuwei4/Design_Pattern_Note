#include <stdio.h>

#include "context.h"
#include "state.h"

/******************************************

          a → b → c
          ↑⬅ ⬅  ⬅ ↓

*******************************************/


int main(int argc, const char *argv[])
{
    context *pcntxt = new_context();

    pcntxt->request(pcntxt);
    pcntxt->request(pcntxt);
    pcntxt->request(pcntxt);
    
    pcntxt->request(pcntxt);
    pcntxt->request(pcntxt);
    pcntxt->request(pcntxt);
    
    pcntxt->request(pcntxt);
    pcntxt->request(pcntxt);
    pcntxt->request(pcntxt);
    return 0;
}

