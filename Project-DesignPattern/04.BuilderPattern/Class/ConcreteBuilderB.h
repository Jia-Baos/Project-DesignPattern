#pragma once
#ifndef __CONCRETEBUILDERB_H__
#define __CONCRETEBUILDERB_H__

#include "AbstractBuilder.h"

// 具体建造者ConcreteBuilderB
class ConcreteBuilderB :
    public AbstractBuilder
{
public:
	ConcreteBuilderB();
	ConcreteBuilderB(const ConcreteBuilderB&) = delete;
	ConcreteBuilderB& operator=(const ConcreteBuilderB&) = delete;
	virtual ~ConcreteBuilderB();

	// 具体实现方法
	virtual void buildFloor();
	virtual void buildWall();
	virtual void buildRoof();
	virtual House* getHouse();
};

#endif // !__CONCRETEBUILDERB_H__
