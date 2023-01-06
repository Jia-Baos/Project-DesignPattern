#pragma once
#ifndef __ABSTRACTPRODUCT_H__
#define __ABSTRACTPRODUCT_H__

#include <iostream>

// �����Ʒ�� AbstractProduct
class AbstractProduct
{
public:
	AbstractProduct();
	virtual ~AbstractProduct();

protected:
	// ���󷽷�
	virtual void printName() = 0;
	virtual void play() = 0;
};

#endif // !__ABSTRACTPRODUCT_H__
