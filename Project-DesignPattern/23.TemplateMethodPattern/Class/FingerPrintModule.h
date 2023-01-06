#pragma once
#ifndef __FINGERPRINTMODULE_H__
#define __FINGERPRINTMODULE_H__

#include <iostream>

// 基类
class FingerPrintModule
{
public:
	FingerPrintModule();
	virtual ~FingerPrintModule();

	// 模板方法
	void Algorithm()
	{
		// 1.采集图像
		getImgae();

		// 2.在安全模式下加密和解密
		if (isSafeMode())
		{
			// 2.1.加密
			encrypt();

			// 2.2.解密
			decrypt();
		}

		// 3.处理图像
		processImage();

		// 4.处理结果
		output();
	};

protected:
	void getImgae();
	void output();

	// 定义一个“纯虚函数”，即此函数可以不提供定义，而包含这样函数的类是不可以实例化的
	virtual bool isSafeMode() = 0;
	virtual void processImage() = 0;

	// 加密解密
	virtual void encrypt();
	virtual void decrypt();
};
#endif // !__FINGERPRINTMODULE_H__
