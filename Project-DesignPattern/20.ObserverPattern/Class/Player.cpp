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
		std::cout << getName().c_str() << ": 我这里有资源" << std::endl;
		break;
	case HELP:
		std::cout << getName().c_str() << ": 救救我" << std::endl;
		break;
	default:
		std::cout << "Nothing" << std::endl;
	}
	ac->notify(infoType, getName());
}

void Player::help()
{
	std::cout << getName().c_str() << ": 坚持住，我来救你！" << std::endl;
}
void Player::come()
{
	std::cout << getName().c_str() << ": 好的，我来取物资！" << std::endl;
}
