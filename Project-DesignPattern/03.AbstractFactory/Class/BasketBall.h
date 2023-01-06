#pragma once
#ifndef __BASKETBALL_H__
#define __BASKETBALL_H__

#include <iostream>
#include "AbstractBall.h"

// 具体产品类BasketBall
class BasketBall :
    public AbstractBall
{
public:
    BasketBall();
    virtual ~BasketBall();
    virtual void play();
};

#endif // !__BASKETBALL_H__
