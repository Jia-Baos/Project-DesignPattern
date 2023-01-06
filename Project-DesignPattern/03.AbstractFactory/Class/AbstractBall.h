#pragma once
#ifndef __ABSTRACTBALL_H__
#define __ABSTRACTBALL_H__

#include <iostream>

// 抽象产品类AbstractBall
class AbstractBall
{
public:
	AbstractBall();
	virtual ~AbstractBall();
	virtual void play() = 0;
};

#endif // !__ABSTRACTBALL_H__
