#pragma once
#ifndef __FOOTBALL_H__
#define __FOOTBALL_H__

#include "AbstractProduct.h"

// 具体产品类 Football
class Football :
    public AbstractProduct
{
public:
   Football();
    virtual ~Football();
    virtual void printName();
    virtual void play();
};

#endif // !__FOOTBALL_H__
