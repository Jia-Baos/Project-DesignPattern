#pragma once
#ifndef _PHONE_H__
#define _PHONE_H__

#include <iostream>

// ǰ������
class Game;

// ������Phone
class Phone
{
public:
    Phone();
    virtual ~Phone();

    // Set game
    virtual void setupGame(Game* igame) = 0;
    virtual void play() = 0;

private:
    Game* game;
};

#endif // !_PHONE_H__
