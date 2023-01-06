#include "Class/AllyCenter.h"
#include "Class/AllyCenterController.h"
#include "Class/Observer.h"
#include "Class/Player.h"

int main(int argc, char* argv[])
{
	// 创建一个战队
	AllyCenterController* controller = new AllyCenterController();

	// 创建4个玩家，并加入战队
	Player* Jungle = new Player("Jungle");
	Player* Single = new Player("Single");
	Player* Jianmengtu = new Player("Jianmengtu");
	Player* SillyDog = new Player("SillyDog");
	controller->join(Jungle);
	controller->join(Single);
	controller->join(Jianmengtu);
	controller->join(SillyDog);

	std::cout << std::endl;

	// Jungle发现物资，呼叫队友
	Jungle->call(RESOURCE, controller);
	std::cout << std::endl;

	// 傻子狗遇到危险，求救队友
	SillyDog->call(HELP, controller);
	std::cout << std::endl;

	delete Jungle;
	delete Single;
	delete Jianmengtu;
	delete SillyDog;
	delete controller;
	
	Jungle = nullptr;
	Single = nullptr;
	Jianmengtu = nullptr;
	SillyDog = nullptr;
	controller = nullptr;

	return 0;
}
