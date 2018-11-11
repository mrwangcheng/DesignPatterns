// Factorymethod.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
using std::endl;
using std::cout;
class Producted {
public:
	virtual void GetString() = 0;
	virtual ~Producted() {}
};
class ProductedA :public Producted {
public:
	virtual void GetString()
	{
		cout << "ProductedA::GetString()" << endl;
	}
};
class ProductedB:public Producted {
public:
	virtual void GetString()
	{
		cout << "ProductedB::GetString()" << endl;
	}
};
class Factory {
public:
	Factory() {}
	virtual ~Factory() {}
	virtual Producted *CreateProducted()=0;
	
};
class FactoryA :public Factory {
public:
	FactoryA() { cout << "FactoryA" << endl; }
	~FactoryA() {}
	Producted *CreateProducted() {
		return new ProductedA();
	}
};
class FactoryB :public Factory {
public:
	FactoryB() { cout << "FactoryB" << endl; }
	~FactoryB() {}
	Producted *CreateProducted() {
	
		return new ProductedB();
	}
};

int main()
{
	Factory *pA = new FactoryA();
	Factory *pB = new FactoryB();
	pA->CreateProducted()->GetString();
	pB->CreateProducted()->GetString();
    return 0;
}

