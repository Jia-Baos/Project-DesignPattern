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
	std::cout << "使用 第一代版本算法 处理指纹图像" << std::endl;
}

bool FingerPrintModuleC::isSafeMode()
{
	std::cout << "安全模式" << std::endl;
	return true;
}

void FingerPrintModuleC::encrypt()
{
	std::cout << "使用DH密钥加密" << std::endl;
}

void FingerPrintModuleC::decrypt()
{
	std::cout << "使用DH密钥解密" << std::endl;
}
