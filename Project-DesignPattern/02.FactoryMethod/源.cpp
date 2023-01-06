#include <iostream>
#include "Class/AbstractFactory.h"
#include "Class/BasketballFactory.h"
#include "Class/FootballFactory.h"
#include "Class/VolleyballFactory.h"

int main(int argc, char* argv[])
{
	std::cout << "工厂方法模式" << std::endl;

	// 定义工厂类对象和产品类对象
	AbstractFactory* fac = new BasketballFactory();
	AbstractProduct* product = fac->getProduct();

	fac = new FootballFactory();
	product = fac->getProduct();

	fac = new VolleyballFactory();
	product = fac->getProduct();

	return 0;
}