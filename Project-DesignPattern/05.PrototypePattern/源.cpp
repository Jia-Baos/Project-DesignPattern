#include <iostream>
#include "Class/WorkModel.h"
#include "Class/ConcreteWork.h"
#include "Class/PrototypeWork.h"

//#define SHALLOWCOPY 1
#define DEEPCOPY 1

int main(int argc, char* argv[])
{
#ifdef SHALLOWCOPY
	ConcreteWork* SingleWork = new ConcreteWork("Single", 1001, "Single_Model");
	std::cout << "Single的作业：" << std::endl;
	SingleWork->printWorkInfo();

	std::cout << "Jungle直接抄作业……" << std::endl;
	ConcreteWork* JungleWork = SingleWork;
	std::cout << "Jungle的作业：" << std::endl;
	JungleWork->printWorkInfo();

	// 抄完改名字和学号，否则会被老师查出来
	std::cout << "Jungle抄完改名字和学号，否则会被老师查出来……" << std::endl;
	JungleWork->setName("Jungle");
	JungleWork->setIdNum(1002);
	WorkModel* JungleModel = new WorkModel();
	JungleModel->setWorkModelName("Jungle_Model");
	JungleWork->setModel(JungleModel);

	// 检查下是否改对了
	std::cout << "Single的作业：" << std::endl;
	SingleWork->printWorkInfo();
	std::cout << "Jungle的作业：" << std::endl;
	JungleWork->printWorkInfo();

	delete SingleWork;
	return 0;

#endif // SHALLOWCOPY

#ifdef DEEPCOPY
	ConcreteWork* SingleWork = new ConcreteWork("Single", 1001, "Single_Model");
	std::cout << "Single的作业" << std::endl;
	SingleWork->printWorkInfo();

	ConcreteWork* JungleWork = SingleWork->clone();
	std::cout << "Jungle直接抄作业" << std::endl;
	JungleWork->printWorkInfo();

	// 抄完改名字和学号，否则会被老师查出来
	std::cout << "Jungle抄完改名字和学号，否则会被老师查出来……" << std::endl;
	JungleWork->setName("Jungle");
	JungleWork->setIdNum(1002);
	WorkModel* JungleModel = new WorkModel();
	JungleModel->setWorkModelName("Jungle_Model");
	JungleWork->setModel(JungleModel);

	// 检查下是否改对了
	std::cout << "Single的作业：" << std::endl;
	SingleWork->printWorkInfo();
	std::cout << "Jungle的作业：" << std::endl;
	JungleWork->printWorkInfo();

	delete SingleWork;
	delete JungleWork;
	return 0;
#endif // DEEPCOPY
}