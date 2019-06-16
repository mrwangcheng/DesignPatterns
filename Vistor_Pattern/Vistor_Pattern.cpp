// Vistor_Pattern.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"

#include "Element.h"
#include "Visitor.h"
#include <iostream>
using namespace std;
int main(int argc, char* argv[])
{
	Visitor* vis = new ConcreteVisitorA();
	Element* elm = new ConcreteElementA();
	elm->Accept(vis);
	delete vis;
	delete elm;

	return 0;
}
