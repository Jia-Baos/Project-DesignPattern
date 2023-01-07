#include "ConcreteWork.h"

ConcreteWork::ConcreteWork()
{
	std::cout << "Initalize the Class: ConcreteWork" << std::endl;
}

ConcreteWork::ConcreteWork(std::string iName, int iIdNum, std::string modelName)
{
	this->name = iName;
	this->idNum = iIdNum;
	this->workModel = new WorkModel();
	this->workModel->setWorkModelName(modelName);
	std::cout << "Initalize the Class: ConcreteWork" << std::endl;
}

ConcreteWork* ConcreteWork::clone()
{
	ConcreteWork* work = new ConcreteWork();
	work->setName(this->name);
	work->setIdNum(this->idNum);
	work->workModel = this->workModel;
	return work;
}

ConcreteWork::~ConcreteWork()
{
	if (this->workModel != nullptr)
	{
		delete this->workModel;
		this->workModel = nullptr;
	}
	std::cout << "Destory the Class: ConcreteWork" << std::endl;
}

void ConcreteWork::setName(std::string iName)
{
	this->name = iName;
}

void ConcreteWork::setIdNum(int iIdNum)
{
	this->idNum = iIdNum;
}

void ConcreteWork::setModel(WorkModel* iWorkModel)
{
	this->workModel = iWorkModel;
}

void ConcreteWork::printWorkInfo()
{
	std::cout << "name: " << this->name
		<< " idNum: " << this->idNum
		<< " modelName: " << this->workModel->modelName
		<< std::endl;
}
