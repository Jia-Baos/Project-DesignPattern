#include "Player.h"

Player::Player()
{
	setName("none");
	std::cout << "Initalize the Class: Player" << std::endl;
}

Player::Player(std::string iName)
{
	setName(iName);
	std::cout << "Initalize the Class: Player" << std::endl;
}

Player::~Player()
{
	std::cout << "Destory the Class: Player" << std::endl;
}

void Player::call(INFO_TYPE infoType, AllyCenter* ac)
{
	switch (infoType) {
	case RESOURCE:
		std::cout << getName().c_str() << ": ����������Դ" << std::endl;
		break;
	case HELP:
		std::cout << getName().c_str() << ": �Ⱦ���" << std::endl;
		break;
	default:
		std::cout << "Nothing" << std::endl;
	}
	ac->notify(infoType, getName());
}

void Player::help()
{
	std::cout << getName().c_str() << ": ���ס���������㣡" << std::endl;
}
void Player::come()
{
	std::cout << getName().c_str() << ": �õģ�����ȡ���ʣ�" << std::endl;
}
