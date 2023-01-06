#include "DecoratorSticker.h"

DecoratorSticker::DecoratorSticker()
{
	std::cout << "Initalize the Class: DecoratorSticker" << std::endl;
}

DecoratorSticker::DecoratorSticker(Component* c)
{
	this->setComponent(c);
	std::cout << "Initalize the Class: DecoratorSticker" << std::endl;
}

DecoratorSticker::~DecoratorSticker()
{
	std::cout << "Destory the Class: DecoratorSticker" << std::endl;
}

void DecoratorSticker::operation()
{
	this->getComponent()->operation();
	this->newBehavior();
}

void DecoratorSticker::newBehavior()
{
	std::cout << "Ìù¿¨Í¨ÌùÖ½" << std::endl;
}
