#include "FingerPrintModuleC.h"

FingerPrintModuleC::FingerPrintModuleC()
{
	std::cout << "Initalize the Class: FingerPrintModuleC" << std::endl;
}

FingerPrintModuleC::~FingerPrintModuleC()
{
	std::cout << "Destory the Class: FingerPrintModuleC" << std::endl;
}

void FingerPrintModuleC::processImage()
{
	std::cout << "ʹ�� ��һ���汾�㷨 ����ָ��ͼ��" << std::endl;
}

bool FingerPrintModuleC::isSafeMode()
{
	std::cout << "��ȫģʽ" << std::endl;
	return true;
}

void FingerPrintModuleC::encrypt()
{
	std::cout << "ʹ��DH��Կ����" << std::endl;
}

void FingerPrintModuleC::decrypt()
{
	std::cout << "ʹ��DH��Կ����" << std::endl;
}
