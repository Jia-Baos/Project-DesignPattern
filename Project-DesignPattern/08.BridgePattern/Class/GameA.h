#pragma once
#ifndef __GAMEA_H__
#define __GAMEA_H__

#include <iostream>
#include "Game.h"

// ����ʵ����GameA
class GameA :
    public Game
{
public:
	GameA();
	virtual ~GameA();
	virtual void play();
};

#endif // !__GAMEA_H__
