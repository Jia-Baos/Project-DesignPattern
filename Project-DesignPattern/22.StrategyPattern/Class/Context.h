#pragma once
#ifndef __CONTEXT_H__
#define __CONTEXT_H__

#include "Strategy.h"

class Context
{
private:
	Strategy* sortStrategy;
	int* arr;
	int N;

public:
	Context();
	Context(int iArr[], int iN);
	virtual ~Context();

	// ʹ��"=delete"ȥ���Σ���ζ�������Ա���������ٱ����ã�����ͻ����
	Context(const Context& context) = delete;
	Context& operator=(const Context&) = delete;

	void setInput(int iArr[], int iN);
	void setSortStrategy(Strategy* iSortStrategy);
	void sort();
	void print();
};

#endif // !__CONTEXT_H__
