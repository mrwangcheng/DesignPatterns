// AbstractFactory.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "AbstractFactory.h"
#include <iostream>
using namespace std;
int main(int argc, char* argv[])
{
	AbstractFactory* cf1 = new ConcreteFactory1();
	cf1->CreateProductA();
	cf1->CreateProductB();
	AbstractFactory* cf2 = new ConcreteFactory2();
	cf2->CreateProductA();
	cf2->CreateProductB();
	return 0;
}
