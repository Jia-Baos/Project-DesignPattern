#include "DecoratorRope.h"

DecoratorRope::DecoratorRope()
{
	std::cout << "Initalize the Class: DecoratorRope" << std::endl;
}

DecoratorRope::DecoratorRope(Component* c)
{
	this->setComponent(c);
	std::cout << "Initalize the Class: DecoratorRope" << std::endl;
}

DecoratorRope::~DecoratorRope()
{
	std::cout << "Destory the Class: DecoratorRope" << std::endl;
}

void DecoratorRope::operation()
{
	this->getComponent()->operation();
	this->newBehavior();
}

void DecoratorRope::newBehavior()
{
	std::cout << "ÏµÊÖ»ú¹ÒÉþ" << std::endl;
}
