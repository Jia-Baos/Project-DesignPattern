#pragma once
#ifndef __DECORATORSTICKER_H__
#define __DECORATORSTICKER_H__

#include "Decorator.h"

class DecoratorSticker
	: public Decorator
{
public:
	DecoratorSticker();
	DecoratorSticker(Component* c);
	virtual ~DecoratorSticker();

	virtual void operation();
	virtual void newBehavior();
};

#endif // !__DECORATORSTICKER_H__
