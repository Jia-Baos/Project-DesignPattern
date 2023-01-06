#pragma once
#ifndef __OBSERVER_H__
#define __OBSERVER_H__

#include <cstring>
#include "AllyCenter.h"

// 抽象观察者 Observer
class Observer
{
public:
	Observer();
	virtual ~Observer();
	// 声明抽象方法（纯虚方法）
	virtual void call(INFO_TYPE infoType, AllyCenter* ac) = 0;
	std::string getName();
	void setName(std::string iName);

private:
	std::string name;
};

#endif // !__OBSERVER_H__
