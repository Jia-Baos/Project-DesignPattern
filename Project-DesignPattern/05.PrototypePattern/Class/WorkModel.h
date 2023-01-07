#pragma once
#ifndef __WORKMODEL_H__
#define __WORKMODEL_H__

#include <iostream>
#include <string>

// WorkModel¿‡
class WorkModel
{
public:
	std::string modelName;

	WorkModel();
	virtual ~WorkModel();
	virtual void setWorkModelName(std::string iname);
};

#endif // !__WORKMODEL_H__
