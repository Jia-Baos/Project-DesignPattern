#pragma once
#ifndef __DIRECTOR_H__
#define __DIRECTOR_H__

#include "AbstractBuilder.h"

// 指挥者Director
class Director
{
public:
	Director();
	virtual ~Director();
	Director(const Director&) = delete;
	Director& operator=(const Director&) = delete;
	
	// 具体实现
	void setBuilder(AbstractBuilder* iBuilder);

	// 封装组装流程，返回建造结果
	House* construct();

private:
	AbstractBuilder* builder;
};

#endif // !__DIRECTOR_H__
