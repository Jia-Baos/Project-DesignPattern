#include "FingerPrintModuleB.h"

FingerPrintModuleB::FingerPrintModuleB()
{
	std::cout << "Initalize the Class: FingerPrintModuleB" << std::endl;
}

FingerPrintModuleB::~FingerPrintModuleB()
{
	std::cout << "Destory the Class: FingerPrintModuleB" << std::endl;
}

void FingerPrintModuleB::processImage()
{
	std::cout << "ʹ�� �ڶ����汾�㷨 ����ָ��ͼ��" << std::endl;
}

bool FingerPrintModuleB::isSafeMode()
{
	std::cout << "�ǰ�ȫģʽ" << std::endl;
	return 0;
}

void FingerPrintModuleB::encrypt()
{
}

void FingerPrintModuleB::decrypt()
{
}
