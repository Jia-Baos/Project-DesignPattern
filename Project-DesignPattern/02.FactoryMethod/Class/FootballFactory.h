#pragma once
#ifndef __FOOTBALLFACTORY_H__
#define __FOOTBALLFACTORY_H__

#include "AbstractFactory.h"

// ���幤���� FootballFactory
class FootballFactory :
    public AbstractFactory
{
public:
    FootballFactory();
    virtual ~FootballFactory();
    virtual AbstractProduct* getProduct();
};

#endif // !__FOOTBALLFACTORY_H__
