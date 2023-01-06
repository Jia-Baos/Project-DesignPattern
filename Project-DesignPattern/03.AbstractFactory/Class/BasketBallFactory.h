#pragma once
#ifndef __BASKETBALLFACTORY_H__
#define __BASKETBALLFACTORY_H__

#include <iostream>
#include "AbstractFactory.h"

// ���幤����BasketBallFactory
class BasketBallFactory :
    public AbstractFactory
{
public:

	BasketBallFactory();
	virtual ~BasketBallFactory();
	virtual AbstractBall* getBall();
	virtual AbstractShirt* getShirt();
};

#endif // !__BASKETBALLFACTORY_H__
