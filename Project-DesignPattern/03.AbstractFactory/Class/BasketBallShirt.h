#pragma once
#ifndef __BASKETBALLSHIRT_H__
#define __BASKETBALLSHIRT_H__

#include <iostream>
#include "AbstractShirt.h"

// 具体产品类BasketBallShirt
class BasketBallShirt :
    public AbstractShirt
{
public:
    BasketBallShirt();
    virtual ~BasketBallShirt();
    virtual void wearShirt();
};

#endif // !__BASKETBALLSHIRT_H__
