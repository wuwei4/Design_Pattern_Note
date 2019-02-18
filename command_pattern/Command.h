#ifndef __COMMAND_H
#define __COMMAND_H

class Command
{
public:
    Command();
    virtual ~Command();
    virtual void Execute() = 0;
};

#endif
