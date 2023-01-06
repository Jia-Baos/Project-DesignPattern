#include "FootBallShirt.h"

FootBallShirt::FootBallShirt()
{
	std::cout << "Initalize the Class: FootBallShirt" << std::endl;
	this->wearShirt();
}

FootBallShirt::~FootBallShirt()
{
	std::cout << "Destory the Class: FootBallShirt" << std::endl;
}

void FootBallShirt::wearShirt()
{
	std::cout << "Jungle wear Basketball Shirt" << std::endl;
}
