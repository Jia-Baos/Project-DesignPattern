#pragma once
#ifndef __ABSTRACTSHIRT_H__
#define __ABSTRACTSHIRT_H__

#include <iostream>

// 抽象产品类AbstractShirt
class AbstractShirt
{
public:
	AbstractShirt();
	virtual ~AbstractShirt();
	virtual void wearShirt() = 0;
};

#endif // !__ABSTRACTSHIRT_H__
