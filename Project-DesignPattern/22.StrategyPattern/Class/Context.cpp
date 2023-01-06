#include "Context.h"

Context::Context()
{
	this->arr = nullptr;
	this->N = 0;
	this->sortStrategy = nullptr;
	std::cout << "Initalize the Class: Context" << std::endl;
}

Context::Context(int iArr[], int iN)
{
	this->arr = iArr;
	this->N = iN;
	this->sortStrategy = nullptr;
	std::cout << "Initalize the Class: Context" << std::endl;
}

Context::~Context()
{
	if (this->sortStrategy)
	{
		delete this->sortStrategy;
		this->sortStrategy = nullptr;
	}
	std::cout << "Destory the Class : Context" << std::endl;
}

void Context::setInput(int iArr[], int iN)
{
	this->arr = iArr;
	this->N = iN;
}

void Context::setSortStrategy(Strategy* iSortStrategy)
{
	if (sortStrategy)
	{
		delete this->sortStrategy;
		this->sortStrategy = nullptr;
	}
	this->sortStrategy = iSortStrategy;
};

void Context::sort()
{
	this->sortStrategy->sort(arr, N);
	std::cout << "Êä³ö" << std::endl;
	this->print();
}

void Context::print()
{
	for (int i = 0; i < N; i++)
	{
		std::cout << arr[i] << std::endl;
	}
}
