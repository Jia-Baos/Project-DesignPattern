#include "FingerPrintModuleA.h"

FingerPrintModuleA::FingerPrintModuleA()
{
	std::cout << "Initalize the Class: FingerPrintModuleA" << std::endl;
}

FingerPrintModuleA::~FingerPrintModuleA()
{
	std::cout << "Destory the Class: FingerPrintModuleA" << std::endl;
}

void FingerPrintModuleA::processImage()
{
	std::cout << "ʹ�� ��һ���汾�㷨 ����ָ��ͼ��" << std::endl;
}

bool FingerPrintModuleA::isSafeMode()
{
	std::cout << "��ȫģʽ" << std::endl;
	return true;
}

void FingerPrintModuleA::encrypt()
{
	std::cout << "ʹ��RSA��Կ����" << std::endl;
}

void FingerPrintModuleA::decrypt()
{
	std::cout << "ʹ��RSA��Կ����" << std::endl;
}
