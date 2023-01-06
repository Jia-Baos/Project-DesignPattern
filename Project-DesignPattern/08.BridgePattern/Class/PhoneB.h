#pragma once
#ifndef __PHONEB_H__
#define __PHONEB_H__

#include "Phone.h"

// ¿©≥‰≥ÈœÛ¿‡PhoneB
class PhoneB :
    public Phone
{
public:
	PhoneB();
	virtual ~PhoneB();

	// Setup game
	virtual void setupGame(Game* igame);
	virtual void play();

private:
	Game* game;
};

#endif // !__PHONEB_H__
