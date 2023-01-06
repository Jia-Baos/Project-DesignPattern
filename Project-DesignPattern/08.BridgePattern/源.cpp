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
	
	// Jungle买了PhoneA品牌的手机，想玩游戏A
	phone = new PhoneA();
	game = new GameA();
	phone->setupGame(game);
	phone->play();
	delete game;

	// Jungle想在这个手机上玩游戏B
	game = new GameB();
	phone->setupGame(game);
	phone->play();

	delete phone;
	delete game;

	return 0;
}