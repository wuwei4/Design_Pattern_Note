#ifndef __SINGLETON_H
#define __SINGLETON_H

class Singleton
{
public:
    virtual ~Singleton();
    static Singleton *GetInstance();
    void Operation();
private:
    
    Singleton();  
    static Singleton *pSt;
};


#endif
