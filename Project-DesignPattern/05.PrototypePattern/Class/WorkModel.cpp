#include "WorkModel.h"

WorkModel::WorkModel()
{
	std::cout << "Initalize the Class: WorkModel" << std::endl;
}

WorkModel::~WorkModel()
{
	std::cout << "Destory the Class: WorkModel" << std::endl;
}

void WorkModel::setWorkModelName(std::string iName)
{
	this->modelName = iName;
}
