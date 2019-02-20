#ifndef __CONCRETEDECORATOR2_H
#define __CONCRETEDECORATOR2_H
#include "Decorator.h"
#include "Component.h"
class ConcreteDecorator2:public Decorator
{
public:
  ConcreteDecorator2(Component *pComp);
  virtual ~ConcreteDecorator2();
  void AddOperation();
  virtual void Operation();
};


#endif
