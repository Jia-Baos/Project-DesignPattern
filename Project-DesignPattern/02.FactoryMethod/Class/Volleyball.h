#pragma once
#ifndef __VOLLEYBALL_H__
#define __VOLLEYBALL_H__

#include "AbstractProduct.h"

// 具体产品类 Volleyball
class Volleyball :
    public AbstractProduct
{
public:
    Volleyball();
    virtual ~Volleyball();
    virtual void printName();
    virtual void play();
};

#endif // !__VOLLEYBALL_H__
