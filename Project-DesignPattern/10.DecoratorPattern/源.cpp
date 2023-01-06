#include <iostream>
#include "Class/Component.h"
#include "Class/Phone.h"
#include "Class/Decorator.h"
#include "Class/DecoratorRope.h"
#include "Class/DecoratorShell.h"
#include "Class/DecoratorSticker.h"

int main(int argc, char* argv[])
{
	std::cout << "Jungle's first phone" << std::endl;
	Component* c = new Phone();
	Component* com_Shell = new DecoratorShell(c);
	com_Shell->operation();
	delete c;
	delete com_Shell;

	std::cout << "Jungle'second phone" << std::endl;
	Component* c2 = new Phone();
	Component* com_Shell2 = new DecoratorShell(c2);
	Component* com_Sticker = new DecoratorSticker(com_Shell2);
	com_Sticker->operation();
	delete c2;
	delete com_Shell2;
	delete com_Sticker;

	std::cout << "Jungle's third phone" << std::endl;
	Component* c3 = new Phone();
	Component* com_Shell3 = new DecoratorShell(c3);
	Component* com_Sticker2 = new DecoratorSticker(com_Shell3);
	Component* com_Rope = new DecoratorRope(com_Sticker2);
	com_Rope->operation();
	delete c3;
	delete com_Sticker2;
	delete com_Rope;

	return 0;
}