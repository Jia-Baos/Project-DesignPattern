#pragma once
#ifndef __ALLYCENTER_H__
#define __ALLYCENTER_H__

#include <iostream>
#include <vector>

enum INFO_TYPE
{
	NONE = 0,
	RESOURCE = 1,
	HELP = 2
};

// 前向声明
// 解决类之间相互引用的问题
// 链接：https://blog.csdn.net/qq_44667165/article/details/106155953
class Observer;
class Player;

class AllyCenter
{
public:
	AllyCenter();
	virtual ~AllyCenter();

	// 加入玩家
	virtual void join(Observer* player);
	// 移除玩家
	virtual void remove(Observer* player);
	// 声明通知方法（纯虚函数）
	virtual void notify(INFO_TYPE infoType, std::string name) = 0;

protected:
	// 玩家列表
	std::vector<Observer*> playerList;
};

#endif // !__ALLYCENTER_H__
