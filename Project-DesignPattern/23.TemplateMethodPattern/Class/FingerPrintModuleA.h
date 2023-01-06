#pragma once
#ifndef __FINGERPRINTMODULEA_H__
#define __FINGERPRINTMODULEA_H__

#include "FingerPrintModule.h"

class FingerPrintModuleA :
    public FingerPrintModule
{
public:
    FingerPrintModuleA();
    virtual ~FingerPrintModuleA();

protected:
	virtual void processImage();
	virtual bool isSafeMode();
	virtual void encrypt();
	virtual void decrypt();
};

#endif // !__FINGERPRINTMODULEA_H__
