#pragma once
#ifndef __PLAYER_H__
#define __PLAYER_H__

#include <cstring>
#include "AllyCenter.h"
#include "Observer.h"

// 具体观察者 Player
class Player :
    public Observer
{
public:
	Player();
	Player(std::string iName);
	virtual ~Player();
	// 实现
	void call(INFO_TYPE infoType, AllyCenter* ac);
	// 实现具体方法
	void help();
	void come();
};
#endif // !__PLAYER_H__
