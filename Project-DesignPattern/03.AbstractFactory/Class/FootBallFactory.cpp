#include "FootBallFactory.h"

FootBallFactory::FootBallFactory()
{
	std::cout << "Initalize the Class: FootBallFactory" << std::endl;
}

FootBallFactory::~FootBallFactory()
{
	std::cout << "Destory the Class: FootBallFactory" << std::endl;
}

AbstractBall* FootBallFactory::getBall()
{
	std::cout << "Jungle get basketball" << std::endl;
	return new FootBall();
}

AbstractShirt* FootBallFactory::getShirt()
{
	std::cout << "Jungle get basketball shirt" << std::endl;
	return new FootBallShirt();
}
