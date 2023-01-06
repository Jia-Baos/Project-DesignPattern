#pragma once
#ifndef __VOLLEYBALLFACTORY_H__
#define __VOLLEYBALLFACTORY_H__

#include "AbstractFactory.h"

// ���幤���� VolleyballFactory
class VolleyballFactory :
    public AbstractFactory
{
public:
    VolleyballFactory();
    virtual ~VolleyballFactory();
    virtual AbstractProduct* getProduct();
};

#endif // !__VOLLEYBALLFACTORY_H__
