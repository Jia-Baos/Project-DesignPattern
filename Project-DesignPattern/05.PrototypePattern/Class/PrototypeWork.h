#pragma once
#ifndef __PROTOTYPEWORK_H__
#define __PROTOTYPEWORK_H__

#include <iostream>
#include "WorkModel.h"

// ����ԭ����PrototypeWork
class PrototypeWork
{
public:
	PrototypeWork();
	virtual ~PrototypeWork();
	virtual PrototypeWork* clone() = 0;

private:
};

#endif // !__PROTOTYPEWORK_H__
