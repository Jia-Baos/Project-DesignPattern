#pragma once
#ifndef __VOLLEYBALL_H__
#define __VOLLEYBALL_H__

#include "AbstractProduct.h"

// �����Ʒ�� Volleyball
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
