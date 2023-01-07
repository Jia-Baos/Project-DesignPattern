#include "AbstractBuilder.h"

AbstractBuilder::AbstractBuilder()
{
	this->house = new House();
	std::cout << "Initalize the Class: AbstractBuilder" << std::endl;
}

AbstractBuilder::~AbstractBuilder()
{
	if (this->house != nullptr)
	{
		delete this->house;
		this->house = nullptr;
	}
	std::cout << "Destory the Class: AbstractBuilder" << std::endl;
}
