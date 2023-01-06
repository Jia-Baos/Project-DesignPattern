#pragma once
#ifndef __ABSTRACTFACTORY_H__
#define __ABSTRACTFACTORY_H__

#include <iostream>
#include "AbstractProduct.h"
#include "Basketball.h"
#include "Football.h"
#include "Volleyball.h"

// 抽象工厂类 AbstractFactory
class AbstractFactory
{
public:
	AbstractFactory();
	virtual ~AbstractFactory();
	virtual AbstractProduct* getProduct() = 0;
};

#endif // !__ABSTRACTFACTORY_H__
