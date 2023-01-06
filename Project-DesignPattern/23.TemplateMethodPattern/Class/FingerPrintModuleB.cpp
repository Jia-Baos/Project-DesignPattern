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
	std::cout << "使用 第二代版本算法 处理指纹图像" << std::endl;
}

bool FingerPrintModuleB::isSafeMode()
{
	std::cout << "非安全模式" << std::endl;
	return 0;
}

void FingerPrintModuleB::encrypt()
{
}

void FingerPrintModuleB::decrypt()
{
}
