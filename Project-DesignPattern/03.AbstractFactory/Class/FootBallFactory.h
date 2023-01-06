#pragma once
#ifndef __FOOTBALLFACTORY_H__
#define __FOOTBALLFACTORY_H__

#include <iostream>
#include "AbstractFactory.h"

// ���幤����FootBallFactory
class FootBallFactory :
    public AbstractFactory
{
public:
	FootBallFactory();
	virtual ~FootBallFactory();
	virtual AbstractBall* getBall();
	virtual AbstractShirt* getShirt();
};

#endif // !__FOOTBALLFACTORY_H__
