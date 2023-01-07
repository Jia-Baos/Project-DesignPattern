#include "Director.h"

Director::Director()
{
	this->builder = nullptr;
	std::cout << "Initalize the Class: Director" << std::endl;
}

Director::~Director()
{
	if (this->builder != nullptr)
	{
		delete builder;
		builder = nullptr;
	}
	std::cout << "Destory the Class: Director" << std::endl;
}

void Director::setBuilder(AbstractBuilder* iBuilder)
{
	this->builder = iBuilder;
}

House* Director::construct()
{
	this->builder->buildFloor();
	this->builder->buildWall();
	this->builder->buildRoof();
	return this->builder->getHouse();
}
