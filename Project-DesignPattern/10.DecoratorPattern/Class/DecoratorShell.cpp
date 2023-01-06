#include "DecoratorShell.h"

DecoratorShell::DecoratorShell()
{
	std::cout << "Initalize the Class: DecoratorShell" << std::endl;
}

DecoratorShell::DecoratorShell(Component* c)
{
	this->setComponent(c);
	std::cout << "Initalize the Class: DecoratorShell" << std::endl;
}

DecoratorShell::~DecoratorShell()
{
	std::cout << "Destory the Class: DecoratorShell" << std::endl;
}

void DecoratorShell::operation()
{
	this->getComponent()->operation();
	this->newBehavior();
}

void DecoratorShell::newBehavior()
{
	std::cout << "安装手机壳" << std::endl;
}
