#include "BasketBallShirt.h"

BasketBallShirt::BasketBallShirt()
{
	std::cout << "Initalize the Class: BasketBallShirt" << std::endl;
	this->wearShirt();
}

BasketBallShirt::~BasketBallShirt()
{
	std::cout << "Destory the Class: BasketBallShirt" << std::endl;
}

void BasketBallShirt::wearShirt()
{
	std::cout << "Jungle wear Basketball Shirt" << std::endl;
}
