#include <iostream>
#include "Class/AbstractBall.h"
#include "Class/AbstractShirt.h"
#include "Class/AbstractFactory.h"
#include "Class/FootBallFactory.h"
#include "Class/BasketBallFactory.h"

int main()
{
	AbstractBall* ball = nullptr;
	AbstractShirt* shirt = nullptr;
	AbstractFactory* fac = nullptr;

	fac = new BasketBallFactory();
	ball = fac->getBall();
	shirt = fac->getShirt();
	delete shirt;
	delete ball;
	delete fac;

	fac = new FootBallFactory();
	ball = fac->getBall();
	shirt = fac->getShirt();
	delete shirt;
	delete ball;
	delete fac;

	return 0;
}