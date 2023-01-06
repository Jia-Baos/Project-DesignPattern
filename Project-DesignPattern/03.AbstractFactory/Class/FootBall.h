#pragma once
#ifndef __FOOTBALL_H__
#define __FOOTBALL_H__

#include <iostream>
#include "AbstractBall.h"

// 具体产品类FootBall
class FootBall :
    public AbstractBall
{
public:
    FootBall();
    virtual ~FootBall();
    virtual void play();
};

#endif // !__FOOTBALL_H__
