#include "PhoneB.h"
#include "Game.h"

PhoneB::PhoneB()
{
	std::cout << "Initalize the Class: PhoneB" << std::endl;
}

PhoneB::~PhoneB()
{
	std::cout << "Destory the Class: PhoneB" << std::endl;
}

void PhoneB::setupGame(Game* igame)
{
	this->game = igame;
}

void PhoneB::play()
{
	this->game->play();
}