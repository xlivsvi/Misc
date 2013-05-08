// Test.cpp : コンソール アプリケーションのエントリ ポイントを定義します。
//

#include "stdafx.h"

class InterfaceA
{
public:
	int var_a;
	virtual void foo0() = 0;
};

class InterfaceB
{
public:
	int var_b;
	virtual void foo1() = 0;
};

class Implement : public InterfaceA,public InterfaceB
{
public:
	virtual void foo0()
	{
		puts("call foo0");
	}

	virtual void foo1()
	{
		puts("call foo1");
	}
};

int _tmain(int argc, _TCHAR* argv[])
{
	Implement* pImp = new Implement();
	InterfaceA* pIa = (InterfaceA*)(pImp);
	InterfaceB* pIb = (InterfaceB*)(pImp);

	pImp->var_a = 0x55AA;
	pImp->var_b = 0xCC33;
	pImp->foo0();
	pImp->foo1();

	return 0;
}

