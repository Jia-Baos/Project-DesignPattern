#include "Class/AllyCenter.h"
#include "Class/AllyCenterController.h"
#include "Class/Observer.h"
#include "Class/Player.h"

int main(int argc, char* argv[])
{
	// ����һ��ս��
	AllyCenterController* controller = new AllyCenterController();

	// ����4����ң�������ս��
	Player* Jungle = new Player("Jungle");
	Player* Single = new Player("Single");
	Player* Jianmengtu = new Player("Jianmengtu");
	Player* SillyDog = new Player("SillyDog");
	controller->join(Jungle);
	controller->join(Single);
	controller->join(Jianmengtu);
	controller->join(SillyDog);

	std::cout << std::endl;

	// Jungle�������ʣ����ж���
	Jungle->call(RESOURCE, controller);
	std::cout << std::endl;

	// ɵ�ӹ�����Σ�գ���ȶ���
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
