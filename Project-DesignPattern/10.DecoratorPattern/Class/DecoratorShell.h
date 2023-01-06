#pragma once
#ifndef __DECORATORSHELL_H__
#define __DECORATORSHELL_H__

#include <iostream>
#include "Decorator.h"

class DecoratorShell
    : public Decorator
{
public:
	DecoratorShell();
	DecoratorShell(Component* c);
	virtual ~DecoratorShell();
	
	virtual void operation();
	virtual void newBehavior();
};

#endif // !__DECORATORSHELL_H__
