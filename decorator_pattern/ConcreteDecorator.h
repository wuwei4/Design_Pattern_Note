#ifndef __CONCRETEDECORATOR_H
#define __CONCRETEDECORATOR_H
#include "Decorator.h"
#include "Component.h"
class ConcreteDecorator:public Decorator
{
public:
  ConcreteDecorator(Component *pComp);
  virtual ~ConcreteDecorator();
  void AddOperation();
  virtual void Operation();
};


#endif
