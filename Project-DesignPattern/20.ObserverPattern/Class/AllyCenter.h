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

// ǰ������
// �����֮���໥���õ�����
// ���ӣ�https://blog.csdn.net/qq_44667165/article/details/106155953
class Observer;
class Player;

class AllyCenter
{
public:
	AllyCenter();
	virtual ~AllyCenter();

	// �������
	virtual void join(Observer* player);
	// �Ƴ����
	virtual void remove(Observer* player);
	// ����֪ͨ���������麯����
	virtual void notify(INFO_TYPE infoType, std::string name) = 0;

protected:
	// ����б�
	std::vector<Observer*> playerList;
};

#endif // !__ALLYCENTER_H__
