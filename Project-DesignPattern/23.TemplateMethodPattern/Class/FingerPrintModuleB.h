#pragma once
#ifndef __FINGERPRINTMODULEB_H__
#define __FINGERPRINTMODULEB_H__

#include "FingerPrintModule.h"

class FingerPrintModuleB :
	public FingerPrintModule
{
public:
	FingerPrintModuleB();
	virtual ~FingerPrintModuleB();

protected:
	virtual void processImage();
	virtual bool isSafeMode();
	virtual void encrypt();
	virtual void decrypt();
};

#endif // !__FINGERPRINTMODULEB_H__
