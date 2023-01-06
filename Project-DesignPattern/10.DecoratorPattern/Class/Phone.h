#pragma once
#ifndef __PHONE_H__
#define __PHONE_H__

#include <iostream>
#include "Component.h"

class Phone :
	public Component
{
public:
	Phone();
	virtual ~Phone();
	virtual void operation();
};

#endif // !__PHONE_H__
