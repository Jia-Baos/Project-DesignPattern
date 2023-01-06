#include "BasketballFactory.h"

BasketballFactory::BasketballFactory()
{
	std::cout << "Initalize the Class: BasketlballFactory" << std::endl;
}

BasketballFactory::~BasketballFactory()
{
	std::cout << "Destory the Class: BasketlballFactory" << std::endl;
}

AbstractProduct* BasketballFactory::getProduct()
{
	std::cout << "Basketball" << std::endl;
	return new Basketball();
}
