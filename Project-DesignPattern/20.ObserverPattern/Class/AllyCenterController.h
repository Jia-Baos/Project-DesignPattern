#pragma once
#ifndef __ALLYCENTERCONTROLLER_H__
#define __ALLYCENTERCONTROLLER_H__

#include "AllyCenter.h"

class AllyCenterController :
	public AllyCenter
{
public:
	AllyCenterController();
	virtual ~AllyCenterController();

	// ʵ��֪ͨ����
	virtual void notify(INFO_TYPE infoType, std::string name);
};

#endif // !__ALLYCENTERCONTROLLER_H__
