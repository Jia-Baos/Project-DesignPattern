#pragma once
#ifndef __GAMEB_H__
#define __GAMEB_H__

#include <iostream>
#include "Game.h"

// ����ʵ����GameB
class GameB :
    public Game
{
public:
	GameB();
	virtual ~GameB();
	virtual void play();
};

#endif // !__GAMEB_H__
