#include "AllyCenter.h"
#include "Observer.h"
#include "Player.h"

AllyCenter::AllyCenter()
{
	std::cout << "Initalize the Class: AllyCenter" << std::endl;
	std::cout << "�󼪴���������Լ�" << std::endl;
}

AllyCenter::~AllyCenter()
{
	std::cout << "Destory the Class: AllyCenter" << std::endl;
}

// �������
void AllyCenter::join(Observer* player)
{
	if (playerList.size() == 4)
	{
		std::cout << "�������" << std::endl;
		return;
	}

	std::cout << "��� " << player->getName().c_str() << " ����" << std::endl;
	playerList.push_back(player);

	if (playerList.size() == 4)
	{
		std::cout << "��ӳɹ�����Ҫ�ˣ�һ����" << std::endl;
	}
}

// �Ƴ����
void AllyCenter::remove(Observer* player)
{
	std::cout << player->getName().c_str() << ": �˳�" << std::endl;
	//playerList.remove(player);
	//std::remove(playerList.begin(), playerList.end(), player);
}
