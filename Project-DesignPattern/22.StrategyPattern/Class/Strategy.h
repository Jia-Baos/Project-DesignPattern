#pragma once
#ifndef __STRATEGY_H__
#define __STRATEGY_H__

#include <iostream>

class Strategy
{
public:
	Strategy();
	virtual ~Strategy();
	virtual void sort(int arr[], int N) = 0;

protected:
	// ���䶨��Ϊ protected �ᱨ����ʾ�޷�����
	// virtual void sort(int arr[], int N) = 0;
};


#endif // !__STRATEGY_H__
