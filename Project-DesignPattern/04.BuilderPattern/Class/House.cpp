#include "House.h"

House::House()
{
	std::cout << "Initalize the Class: House" << std::endl;
}

House::~House()
{
	std::cout << "Destory the Class: House" << std::endl;
}

void House::setFloor(std::string iFloor)
{
	this->floor = iFloor;
}

void House::setWall(std::string iWall)
{
	this->wall = iWall;
}

void House::setRoof(std::string iRoof)
{
	this->roof = iRoof;
}

void House::printfHouseInfo()
{
	std::cout << "Floor: " << this->floor
		<< " Wall: " << this->wall
		<< " Roof: " << this->roof
		<< std::endl;
}