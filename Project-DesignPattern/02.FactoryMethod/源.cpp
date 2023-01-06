#include <iostream>
#include "Class/AbstractFactory.h"
#include "Class/BasketballFactory.h"
#include "Class/FootballFactory.h"
#include "Class/VolleyballFactory.h"

int main(int argc, char* argv[])
{
	std::cout << "��������ģʽ" << std::endl;

	// ���幤�������Ͳ�Ʒ�����
	AbstractFactory* fac = new BasketballFactory();
	AbstractProduct* product = fac->getProduct();

	fac = new FootballFactory();
	product = fac->getProduct();

	fac = new VolleyballFactory();
	product = fac->getProduct();

	return 0;
}