#pragma once
#ifndef __DIRECTOR_H__
#define __DIRECTOR_H__

#include "AbstractBuilder.h"

// ָ����Director
class Director
{
public:
	Director();
	virtual ~Director();
	Director(const Director&) = delete;
	Director& operator=(const Director&) = delete;
	
	// ����ʵ��
	void setBuilder(AbstractBuilder* iBuilder);

	// ��װ��װ���̣����ؽ�����
	House* construct();

private:
	AbstractBuilder* builder;
};

#endif // !__DIRECTOR_H__
