#include <iostream>
#include "Class/Game.h"
#include "Class/GameA.h"
#include "Class/GameB.h"
#include "Class/Phone.h"
#include "Class/PhoneA.h"
#include "Class/PhoneB.h"

int main(int argc, char* argv[])
{
	Phone* phone;
	Game* game;
	
	// Jungle����PhoneAƷ�Ƶ��ֻ���������ϷA
	phone = new PhoneA();
	game = new GameA();
	phone->setupGame(game);
	phone->play();
	delete game;

	// Jungle��������ֻ�������ϷB
	game = new GameB();
	phone->setupGame(game);
	phone->play();

	delete phone;
	delete game;

	return 0;
}