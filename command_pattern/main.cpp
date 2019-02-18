#include "Invoker.h"
#include "Command.h"
#include "Receiver.h"
#include "ConcreteCommand.h"

int main(int argc, char *argv[])
{
    Receiver *pRecv = new Receiver();
    Command *pComm = new ConcreteCommand(pRecv);
    Invoker *pInv = new Invoker(pComm);
    pInv->Call();
    delete pRecv;
    delete pComm;
    delete pInv;
    return 0;
}

