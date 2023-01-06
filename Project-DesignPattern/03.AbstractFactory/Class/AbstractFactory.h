#pragma once
#ifndef __ABSTRACTFACTORY_H__
#define __ABSTRACTFACTORY_H__

#include <iostream>
#include "AbstractBall.h"
#include "AbstractShirt.h"
#include "BasketBall.h"
#include "FootBall.h"
#include "BasketBallShirt.h"
#include "FootBallShirt.h"

// 抽象工厂类
class AbstractFactory
{
public:
	AbstractFactory();
	virtual ~AbstractFactory();
	virtual AbstractBall* getBall() = 0;
	virtual AbstractShirt* getShirt() = 0;
};

#endif // !__ABSTRACTFACTORY_H__
