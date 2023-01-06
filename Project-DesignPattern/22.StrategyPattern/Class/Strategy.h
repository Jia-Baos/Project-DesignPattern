#pragma once
#ifndef __STRATEGY_H__
#define __STRATEGY_H__

#include <iostream>

class Strategy
{
public:
	Strategy();
	virtual ~Strategy();
	virtual void sort(int arr[], int N) = 0;

protected:
	// 将其定义为 protected 会报错，显示无法访问
	// virtual void sort(int arr[], int N) = 0;
};


#endif // !__STRATEGY_H__
