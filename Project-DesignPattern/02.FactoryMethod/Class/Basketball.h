#pragma once
#ifndef __BASKETBALL_H__
#define __BASKETBALL_H__

#include "AbstractProduct.h"

// �����Ʒ�� Basketball
class Basketball :
    public AbstractProduct
{
public:
    Basketball();
    virtual ~Basketball();
    virtual void printName();
    virtual void play();
};

#endif // !__BASKETBALL_H__
