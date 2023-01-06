#pragma once
#ifndef __COMPONENT_H__
#define __COMPONENT_H__

#include <iostream>

// ³éÏó¹¹¼þ
class Component
{
public:
	Component();
	virtual ~Component();
	virtual void operation() = 0;
};

#endif // !__COMPONENT_H__
