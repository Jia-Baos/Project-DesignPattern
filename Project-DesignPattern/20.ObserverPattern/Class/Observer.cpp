#include "Observer.h"

Observer::Observer()
{
	std::cout << "Initalize the Class: Observer" << std::endl;
}

Observer::~Observer()
{
	std::cout << "Destory the Class: Observer" << std::endl;
}

std::string Observer::getName()
{
	return this->name;
}

void Observer::setName(std::string iName)
{
	this->name = iName;
}
