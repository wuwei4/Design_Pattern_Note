#ifndef __SUBJECT_H
#define __SUBJECT_H

class Subject
{
public:
    Subject();
    virtual ~Subject();
    virtual void Require() = 0;
};

#endif

