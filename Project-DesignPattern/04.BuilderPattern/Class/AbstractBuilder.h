#pragma once
#ifndef __ABSTRACTBUILDER_H__
#define __ABSTRACTBUILDER_H__

#include <iostream>
#include "House.h"

// ��������AbstractBuilder
class AbstractBuilder
{
public:
	House* house;

	AbstractBuilder();
	AbstractBuilder(const AbstractBuilder& o) = delete;
	AbstractBuilder& operator=(const AbstractBuilder& o) = delete;
	virtual ~AbstractBuilder();

	// ���󷽷���
	virtual void buildFloor() = 0;
	virtual void buildWall() = 0;
	virtual void buildRoof() = 0;
	virtual House* getHouse() = 0;
};

#endif // !__ABSTRACTBUILDER_H__
