// Decorator_Design.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "iostream"
#include "Decorator.h"
#include <memory>
using namespace std;
int main()
{
	shared_ptr<Component> com(new ConcreteComponent());
	unique_ptr<Decorator> dec(new ConcreteDecorator(com.get()));
	dec->Operation();

	return 0;

}

