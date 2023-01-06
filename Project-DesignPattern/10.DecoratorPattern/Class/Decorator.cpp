#include "Decorator.h"

Decorator::Decorator()
{
	std::cout << "Initalize the Class: Decorator" << std::endl;
}

Decorator::Decorator(Component* c)
{
	this->component = c;
	std::cout << "Initalize the Class: Decorator" << std::endl;
}

Decorator::~Decorator()
{
	std::cout << "Destory the Class: Decorator" << std::endl;
}

void Decorator::operation()
{
	this->component->operation();
}

Component* Decorator::getComponent()
{
	return this->component;
}

void Decorator::setComponent(Component* c)
{
	this->component = c;
}
