#pragma once
#ifndef __FINGERPRINTMODULEC_H__
#define __FINGERPRINTMODULEC_H__

#include "FingerPrintModule.h"

class FingerPrintModuleC :
    public FingerPrintModule
{
public:
	FingerPrintModuleC();
	virtual ~FingerPrintModuleC();

protected:
	virtual void processImage();
	virtual bool isSafeMode();
	virtual void encrypt();
	virtual void decrypt();
};

#endif // !__FINGERPRINTMODULEC_H__
