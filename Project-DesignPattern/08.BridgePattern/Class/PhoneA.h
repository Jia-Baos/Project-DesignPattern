#pragma once
#ifndef __PHONEA_H__
#define __PHONEA_H__

#include "Phone.h"

// ¿©≥‰≥ÈœÛ¿‡PhoneA
class PhoneA :
    public Phone
{
public:
	PhoneA();
	virtual ~PhoneA();

	// Setup game
	virtual void setupGame(Game* igame);
	virtual void play();

private:
	Game* game;
};

#endif // !__PHONEA_H__
