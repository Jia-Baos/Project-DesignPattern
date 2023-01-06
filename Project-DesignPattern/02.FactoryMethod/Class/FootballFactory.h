#pragma once
#ifndef __FOOTBALLFACTORY_H__
#define __FOOTBALLFACTORY_H__

#include "AbstractFactory.h"

// 具体工厂类 FootballFactory
class FootballFactory :
    public AbstractFactory
{
public:
    FootballFactory();
    virtual ~FootballFactory();
    virtual AbstractProduct* getProduct();
};

#endif // !__FOOTBALLFACTORY_H__
