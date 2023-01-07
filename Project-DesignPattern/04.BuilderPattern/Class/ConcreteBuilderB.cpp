#include "ConcreteBuilderB.h"

ConcreteBuilderB::ConcreteBuilderB()
{
	std::cout << "Initalize the Class: ConcreteBuilderB" << std::endl;
}

ConcreteBuilderB::~ConcreteBuilderB()
{
	if (this->house != nullptr)
	{
		delete this->house;
		this->house = nullptr;
	}
	std::cout << "Destory the Class: ConcreteBuilderB" << std::endl;
}

void ConcreteBuilderB::buildFloor()
{
	this->house->setFloor("Floor_B");
}

void ConcreteBuilderB::buildWall()
{
	this->house->setWall("Wall_B");
}

void ConcreteBuilderB::buildRoof()
{
	this->house->setRoof("Roof_B");
}

House* ConcreteBuilderB::getHouse()
{
	return this->house;
}