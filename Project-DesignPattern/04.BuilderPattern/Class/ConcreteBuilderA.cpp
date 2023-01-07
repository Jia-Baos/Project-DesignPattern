#include "ConcreteBuilderA.h"

ConcreteBuilderA::ConcreteBuilderA()
{
	std::cout << "Initalize the Class: ConcreteBuilderA" << std::endl;
}

ConcreteBuilderA::~ConcreteBuilderA()
{
	if (this->house != nullptr)
	{
		delete this->house;
		this->house = nullptr;
	}
	std::cout << "Destory the Class: ConcreteBuilderA" << std::endl;
}

void ConcreteBuilderA::buildFloor()
{
	this->house->setFloor("Floor_A");
}

void ConcreteBuilderA::buildWall()
{
	this->house->setWall("Wall_A");
}

void ConcreteBuilderA::buildRoof()
{
	this->house->setRoof("Roof_A");
}

House* ConcreteBuilderA::getHouse()
{
	return this->house;
}