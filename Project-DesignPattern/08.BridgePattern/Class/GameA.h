#pragma once
#ifndef __GAMEA_H__
#define __GAMEA_H__

#include <iostream>
#include "Game.h"

// 具体实现类GameA
class GameA :
    public Game
{
public:
	GameA();
	virtual ~GameA();
	virtual void play();
};

#endif // !__GAMEA_H__
