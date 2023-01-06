#pragma once
#ifndef __DECORATOR_H__
#define __DECORATOR_H__

#include "Component.h"

class Decorator :
    public Component
{
public:
	Decorator();
	Decorator(Component* c);
	virtual ~Decorator();

	Component* getComponent();
	virtual void operation();
	virtual void setComponent(Component* c);

private:
	Component* component;
};

#endif // !__DECORATOR_H__
