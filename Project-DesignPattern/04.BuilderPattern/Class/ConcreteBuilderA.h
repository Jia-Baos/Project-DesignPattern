#pragma once
#ifndef __CONCRETEBUILDERA_H__
#define __CONCRETEBUILDERA_H__

#include "AbstractBuilder.h"

// ���彨����ConcreteBuilderA
class ConcreteBuilderA :
    public AbstractBuilder
{
public:
	ConcreteBuilderA();
	ConcreteBuilderA(const ConcreteBuilderA& o) = delete;
	ConcreteBuilderA& operator=(const ConcreteBuilderA& o) = delete;
	virtual ~ConcreteBuilderA();
	
	// ����ʵ�ַ���
	virtual void buildFloor();
	virtual void buildWall();
	virtual void buildRoof();
	virtual House* getHouse();
};

#endif // !__CONCRETEBUILDERA_H__
