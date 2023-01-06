#pragma once
#ifndef __FINGERPRINTMODULE_H__
#define __FINGERPRINTMODULE_H__

#include <iostream>

// ����
class FingerPrintModule
{
public:
	FingerPrintModule();
	virtual ~FingerPrintModule();

	// ģ�巽��
	void Algorithm()
	{
		// 1.�ɼ�ͼ��
		getImgae();

		// 2.�ڰ�ȫģʽ�¼��ܺͽ���
		if (isSafeMode())
		{
			// 2.1.����
			encrypt();

			// 2.2.����
			decrypt();
		}

		// 3.����ͼ��
		processImage();

		// 4.������
		output();
	};

protected:
	void getImgae();
	void output();

	// ����һ�������麯���������˺������Բ��ṩ���壬�������������������ǲ�����ʵ������
	virtual bool isSafeMode() = 0;
	virtual void processImage() = 0;

	// ���ܽ���
	virtual void encrypt();
	virtual void decrypt();
};
#endif // !__FINGERPRINTMODULE_H__
