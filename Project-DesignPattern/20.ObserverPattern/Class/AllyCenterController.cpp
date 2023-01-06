#include "AllyCenterController.h"
#include "Observer.h"
#include "Player.h"

AllyCenterController::AllyCenterController()
{
	std::cout << "Initalize the Class: AllyCenterController" << std::endl;
}

AllyCenterController::~AllyCenterController()
{
	std::cout << "Destory the Class: AllyCenterController" << std::endl;
}

// 实现通知方法
void AllyCenterController::notify(INFO_TYPE infoType, std::string name)
{
	switch (infoType)
	{
	case RESOURCE:
		for(Observer* obs : playerList)
		{
			if (obs->getName() != name)
			{
				((Player*)obs)->come();
			}
		}
		break;
	case HELP:
		for (Observer* obs : playerList)
		{
			if (obs->getName() != name) {
				((Player*)obs)->help();
			}
		}
		break;
	default:
		std::cout << "Nothing" << std::endl;
	}
}
