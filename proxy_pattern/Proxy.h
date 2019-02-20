#ifndef __PROXY_H
#define __PROXY_H
#include "Subject.h"
class Proxy:public Subject
{
public:
    Proxy();
    virtual ~Proxy();
    virtual void Require();
private:
    Subject *pSubject;
    void PreRequire();
    void PosRequire();
};

#endif


