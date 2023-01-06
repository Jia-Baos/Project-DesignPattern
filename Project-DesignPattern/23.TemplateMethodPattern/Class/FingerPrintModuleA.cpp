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
	std::cout << "使用 第一代版本算法 处理指纹图像" << std::endl;
}

bool FingerPrintModuleA::isSafeMode()
{
	std::cout << "安全模式" << std::endl;
	return true;
}

void FingerPrintModuleA::encrypt()
{
	std::cout << "使用RSA密钥加密" << std::endl;
}

void FingerPrintModuleA::decrypt()
{
	std::cout << "使用RSA密钥解密" << std::endl;
}
