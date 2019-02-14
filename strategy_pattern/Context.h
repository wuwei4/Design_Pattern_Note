#ifndef __CONTEXT_H
#define __CONTEXT_H

#include "Strategy.h"

class Context
{
public:
    Context();
    virtual ~Context();
    void SetStrategy(Strategy *pStratgy);
    void Alogrithm();
private:
    Strategy *pStrategy;
};

#endif
