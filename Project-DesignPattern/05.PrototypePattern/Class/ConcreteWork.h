#pragma once
#ifndef __CONCRETEWORK_H__
#define __CONCRETEWORK_H__

#include <iostream>
#include "PrototypeWork.h"

// 具体原型类ConcreteWork
class ConcreteWork :
    public PrototypeWork
{
public:
    ConcreteWork();
    ConcreteWork(std::string iName, int iIdNum, std::string modelName);
    ConcreteWork* clone();
    virtual ~ConcreteWork();
    
    void setName(std::string iName);
    void setIdNum(int iIdNum);
    void setModel(WorkModel* iWorkModel);
    void printWorkInfo();

private:
    std::string name;
    int idNum;
    WorkModel* workModel;
};

#endif // !__CONCRETEWORK_H__
