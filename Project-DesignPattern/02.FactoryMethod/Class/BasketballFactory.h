#pragma once
#ifndef __BASKETBALLFACTORY_H__
#define __BASKETBALLFACTORY_H__

#include "AbstractFactory.h"

// 具体工厂类 BasketballFactory
class BasketballFactory :
    public AbstractFactory
{
public:
    BasketballFactory();
    virtual ~BasketballFactory();
    virtual AbstractProduct* getProduct();
};

#endif // !__BASKETBALLFACTORY_H__
