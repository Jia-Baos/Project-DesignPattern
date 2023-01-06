#include "BasketBallFactory.h"

BasketBallFactory::BasketBallFactory()
{
	std::cout << "Initalize the Class: BasketBallFactory" << std::endl;
}

BasketBallFactory::~BasketBallFactory()
{
	std::cout << "Destory the Class: BasketBallFactory" << std::endl;
}

AbstractBall* BasketBallFactory::getBall()
{
	std::cout << "Jungle get basketball" << std::endl;
	return new BasketBall();
}

AbstractShirt* BasketBallFactory::getShirt()
{
	std::cout << "Jungle get basketball shirt" << std::endl;
	return new BasketBallShirt();
}
