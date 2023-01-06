#include "VolleyballFactory.h"

VolleyballFactory::VolleyballFactory()
{
	std::cout << "Initalize the Class: BasketlballFactory" << std::endl;
}

VolleyballFactory::~VolleyballFactory()
{
	std::cout << "Destory the Class: BasketlballFactory" << std::endl;
}

AbstractProduct* VolleyballFactory::getProduct()
{
	std::cout << "Volleyball" << std::endl;
	return new Volleyball();
}
