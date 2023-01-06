#include "PhoneA.h"
#include "Game.h"

PhoneA::PhoneA()
{
	std::cout << "Initalize the Class: PhoneA" << std::endl;
}

PhoneA::~PhoneA()
{
	std::cout << "Destory the Class: PhoneA" << std::endl;
}

void PhoneA::setupGame(Game* igame)
{
	this->game = igame;
}

void PhoneA::play()
{
	this->game->play();
}
