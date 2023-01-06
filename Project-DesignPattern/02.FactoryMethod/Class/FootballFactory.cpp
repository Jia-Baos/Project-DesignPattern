#include "FootballFactory.h"

FootballFactory::FootballFactory()
{
	std::cout << "Initalize the Class: BasketlballFactory" << std::endl;
}

FootballFactory::~FootballFactory()
{
	std::cout << "Destory the Class: BasketlballFactory" << std::endl;
}

AbstractProduct* FootballFactory::getProduct()
{
	std::cout << "Football" << std::endl;
	return new Football();
}
