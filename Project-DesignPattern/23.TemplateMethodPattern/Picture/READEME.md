# 流程简介

1. 在子类中重写父类中的虚函数；
	> virtual void processImage();
	>
	> virtual bool isSafeMode();
	>
	> virtual void encrypt();
	>
	> virtual void decrypt();

2. 使用父类 FingerPrintModule 的指针 p_fingerprintmodule 指向子类 FingerPrintModuleA、FingerPrintModuleB、FingerPrintModuleC；

3. 通过父类 FingerPrintModule 的指针 p_fingerprintmodule 执行流程函数 Algorithm()；

4. 流程函数 Algorithm() 执行过程中通过多态调用子类的函数；
	> virtual void processImage();
	>
	> virtual bool isSafeMode();
	>
	> virtual void encrypt();
	>
	> virtual void decrypt();
