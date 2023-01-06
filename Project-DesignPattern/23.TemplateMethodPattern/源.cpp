#include "Class/FingerPrintModule.h"
#include "Class/FingerPrintModuleA.h"
#include "Class/FingerPrintModuleB.h"
#include "Class/FingerPrintModuleC.h"

int main(int argc, char* argv[])
{

	FingerPrintModule* p_fingerprintmodule = new FingerPrintModuleA();
	p_fingerprintmodule->Algorithm();
	delete p_fingerprintmodule;
	p_fingerprintmodule = nullptr;

	p_fingerprintmodule = new FingerPrintModuleB();
	p_fingerprintmodule->Algorithm();
	delete p_fingerprintmodule;
	p_fingerprintmodule = nullptr;

	p_fingerprintmodule = new FingerPrintModuleC();
	p_fingerprintmodule->Algorithm();
	delete p_fingerprintmodule;
	p_fingerprintmodule = nullptr;

	return 0;
}
