// Prototype_Design.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include "Prototype.h"
#include <iostream>
using namespace std;
int main(int argc, char* argv[])
{
	Prototype* p = new ConcretePrototype();
	Prototype* p1 = p->Clone();
	delete p;
	delete p1;
	return 0;
}

