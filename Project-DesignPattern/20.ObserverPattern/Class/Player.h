#pragma once
#ifndef __PLAYER_H__
#define __PLAYER_H__

#include <cstring>
#include "AllyCenter.h"
#include "Observer.h"

// ����۲��� Player
class Player :
    public Observer
{
public:
	Player();
	Player(std::string iName);
	virtual ~Player();
	// ʵ��
	void call(INFO_TYPE infoType, AllyCenter* ac);
	// ʵ�־��巽��
	void help();
	void come();
};
#endif // !__PLAYER_H__
