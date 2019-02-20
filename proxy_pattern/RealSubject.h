#ifndef __REALSUBJECT_H
#define __REALSUBJECT_H
#include "Subject.h"
class RealSubject:public Subject
{
public:
    RealSubject();
    virtual ~RealSubject();
    virtual void Require();
};

#endif

