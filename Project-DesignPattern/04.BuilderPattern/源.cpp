#include <iostream>
#include "Class/Director.h"
#include "Class/AbstractBuilder.h"
#include "Class/ConcreteBuilderA.h"
#include "Class/ConcreteBuilderB.h"

int main(int argc, char* argv[])
{
	// ��������
	AbstractBuilder* builder;
	// ָ����
	Director* director = new Director();
	// ��Ʒ��House
	House* house;

	// ָ�����彨����A
	builder = new ConcreteBuilderA();
	director->setBuilder(builder);
	house = director->construct();
	house->printfHouseInfo();

	// ָ�����彨����B
	builder = new ConcreteBuilderB();
	director->setBuilder(builder);
	house = director->construct();
	house->printfHouseInfo();
	std::cout << _msize(house) << std::endl;
	std::cout << _msize(builder) << std::endl;
	std::cout << _msize(director) << std::endl;
	delete director;
	/*std::cout << _msize(house) << std::endl;
	std::cout << _msize(builder) << std::endl;
	std::cout << _msize(director) << std::endl;*/
	if (!house) std::cout << "house" << std::endl;
	if (!builder) std::cout << "builder" << std::endl;
	if (!director) std::cout << "director" << std::endl;

	return 0;
}