#pragma once
#ifndef __DECORATORROPE_H__
#define __DECORATORROPE_H__

#include <iostream>
#include "Decorator.h"

class DecoratorRope
	: public Decorator
{
public:
	DecoratorRope();
	DecoratorRope(Component* c);
	virtual ~DecoratorRope();
	
	virtual void operation();
	virtual void newBehavior();
};

#endif // !__DECORATORROPE_H__
