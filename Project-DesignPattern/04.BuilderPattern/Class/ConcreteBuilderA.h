#pragma once
#ifndef __CONCRETEBUILDERA_H__
#define __CONCRETEBUILDERA_H__

#include "AbstractBuilder.h"

// 具体建造者ConcreteBuilderA
class ConcreteBuilderA :
    public AbstractBuilder
{
public:
	ConcreteBuilderA();
	ConcreteBuilderA(const ConcreteBuilderA& o) = delete;
	ConcreteBuilderA& operator=(const ConcreteBuilderA& o) = delete;
	virtual ~ConcreteBuilderA();
	
	// 具体实现方法
	virtual void buildFloor();
	virtual void buildWall();
	virtual void buildRoof();
	virtual House* getHouse();
};

#endif // !__CONCRETEBUILDERA_H__
