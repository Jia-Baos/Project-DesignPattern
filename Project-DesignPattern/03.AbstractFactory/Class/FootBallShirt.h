#pragma once
#ifndef __FOOTBALLSHIRT_H__
#define __FOOTBALLSHIRT_H__

#include <iostream>
#include "AbstractShirt.h"

// �����Ʒ��FootBallShirt
class FootBallShirt :
    public AbstractShirt
{
public:
    FootBallShirt();
    virtual ~FootBallShirt();
    virtual void wearShirt();
};

#endif // !__FOOTBALLSHIRT_H__
