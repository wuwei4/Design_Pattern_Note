#ifndef __TARGET_H
#define __TARGET_H

class Target
{
public:
    Target();
    virtual ~Target();
    virtual void Require() = 0;
};

#endif

