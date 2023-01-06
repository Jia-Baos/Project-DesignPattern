#pragma once
#ifndef __OBSERVER_H__
#define __OBSERVER_H__

#include <cstring>
#include "AllyCenter.h"

// ����۲��� Observer
class Observer
{
public:
	Observer();
	virtual ~Observer();
	// �������󷽷������鷽����
	virtual void call(INFO_TYPE infoType, AllyCenter* ac) = 0;
	std::string getName();
	void setName(std::string iName);

private:
	std::string name;
};

#endif // !__OBSERVER_H__
