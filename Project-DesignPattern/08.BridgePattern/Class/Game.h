#pragma once
#ifndef __GAME_H__
#define __GAME_H__

#include <iostream>

// ʵ����ӿ� Implementor
class Game
{
public:
	Game();
	virtual ~Game();
	virtual void play() = 0;

private:
};

#endif // !__GAME_H__
