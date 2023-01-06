#include "AllyCenter.h"
#include "Observer.h"
#include "Player.h"

AllyCenter::AllyCenter()
{
	std::cout << "Initalize the Class: AllyCenter" << std::endl;
	std::cout << "大吉大利，今晚吃鸡" << std::endl;
}

AllyCenter::~AllyCenter()
{
	std::cout << "Destory the Class: AllyCenter" << std::endl;
}

// 加入玩家
void AllyCenter::join(Observer* player)
{
	if (playerList.size() == 4)
	{
		std::cout << "玩家已满" << std::endl;
		return;
	}

	std::cout << "玩家 " << player->getName().c_str() << " 加入" << std::endl;
	playerList.push_back(player);

	if (playerList.size() == 4)
	{
		std::cout << "组队成功，不要怂，一起上" << std::endl;
	}
}

// 移除玩家
void AllyCenter::remove(Observer* player)
{
	std::cout << player->getName().c_str() << ": 退出" << std::endl;
	//playerList.remove(player);
	//std::remove(playerList.begin(), playerList.end(), player);
}
