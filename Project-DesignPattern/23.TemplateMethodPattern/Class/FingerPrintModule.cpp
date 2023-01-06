#include "FingerPrintModule.h"

FingerPrintModule::FingerPrintModule()
{
	std::cout << "Initalize the Class: FingerPrintModule" << std::endl;
}

FingerPrintModule::~FingerPrintModule()
{
	std::cout << "Destory the Class: FingerPrintModule" << std::endl;
}

void FingerPrintModule::getImgae()
{
	std::cout << "采集指纹图像" << std::endl;
}

void FingerPrintModule::output()
{
	std::cout << "指纹图像处理完成" << std::endl;
}

void FingerPrintModule::encrypt()
{
}

void FingerPrintModule::decrypt()
{
}
