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
	std::cout << "Single����ҵ��" << std::endl;
	SingleWork->printWorkInfo();

	std::cout << "Jungleֱ�ӳ���ҵ����" << std::endl;
	ConcreteWork* JungleWork = SingleWork;
	std::cout << "Jungle����ҵ��" << std::endl;
	JungleWork->printWorkInfo();

	// ��������ֺ�ѧ�ţ�����ᱻ��ʦ�����
	std::cout << "Jungle��������ֺ�ѧ�ţ�����ᱻ��ʦ���������" << std::endl;
	JungleWork->setName("Jungle");
	JungleWork->setIdNum(1002);
	WorkModel* JungleModel = new WorkModel();
	JungleModel->setWorkModelName("Jungle_Model");
	JungleWork->setModel(JungleModel);

	// ������Ƿ�Ķ���
	std::cout << "Single����ҵ��" << std::endl;
	SingleWork->printWorkInfo();
	std::cout << "Jungle����ҵ��" << std::endl;
	JungleWork->printWorkInfo();

	delete SingleWork;
	return 0;

#endif // SHALLOWCOPY

#ifdef DEEPCOPY
	ConcreteWork* SingleWork = new ConcreteWork("Single", 1001, "Single_Model");
	std::cout << "Single����ҵ" << std::endl;
	SingleWork->printWorkInfo();

	ConcreteWork* JungleWork = SingleWork->clone();
	std::cout << "Jungleֱ�ӳ���ҵ" << std::endl;
	JungleWork->printWorkInfo();

	// ��������ֺ�ѧ�ţ�����ᱻ��ʦ�����
	std::cout << "Jungle��������ֺ�ѧ�ţ�����ᱻ��ʦ���������" << std::endl;
	JungleWork->setName("Jungle");
	JungleWork->setIdNum(1002);
	WorkModel* JungleModel = new WorkModel();
	JungleModel->setWorkModelName("Jungle_Model");
	JungleWork->setModel(JungleModel);

	// ������Ƿ�Ķ���
	std::cout << "Single����ҵ��" << std::endl;
	SingleWork->printWorkInfo();
	std::cout << "Jungle����ҵ��" << std::endl;
	JungleWork->printWorkInfo();

	delete SingleWork;
	delete JungleWork;
	return 0;
#endif // DEEPCOPY
}