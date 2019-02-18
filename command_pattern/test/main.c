#include "invoker.h"
#include "command.h"
#include "receiver.h"

int main(int argc, char *argv[])
{
    receiver *preceiver = new_receiver();
    command * pcommand = new_command(preceiver);
    invoker *pinvoker = new_invoker(pcommand);
    pinvoker->call(pinvoker);
    delete_receiver(preceiver);
    delete_command(pcommand);
    delete_invoker(pinvoker);
    return 0;
}
