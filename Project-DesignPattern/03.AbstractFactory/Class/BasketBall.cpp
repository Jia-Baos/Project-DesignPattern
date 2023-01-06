#include "BasketBall.h"

BasketBall::BasketBall()
{
	std::cout << "Initalize the Class: BasketBall" << std::endl;
	this->play();
}

BasketBall::~BasketBall()
{
	std::cout << "Destory the Class: BasketBall" << std::endl;
}

void BasketBall::play()
{
	std::cout << "Jungle play Basketball" << std::endl;
}
