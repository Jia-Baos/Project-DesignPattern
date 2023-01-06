#pragma once
#ifndef __ABSTRACTPRODUCT_H__
#define __ABSTRACTPRODUCT_H__

#include <iostream>

// 抽象产品类 AbstractProduct
class AbstractProduct
{
public:
	AbstractProduct();
	virtual ~AbstractProduct();

protected:
	// 抽象方法
	virtual void printName() = 0;
	virtual void play() = 0;
};

#endif // !__ABSTRACTPRODUCT_H__
