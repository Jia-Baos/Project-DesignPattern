#include "FootBall.h"

FootBall::FootBall()
{
	std::cout << "Initalize the Class: FootBall" << std::endl;
	this->play();
}

FootBall::~FootBall()
{
	std::cout << "Destory the Class: FootBall" << std::endl;
}

void FootBall::play()
{
	std::cout << "Jungle play FootBall" << std::endl;
}
