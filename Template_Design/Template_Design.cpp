// Template_Design.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include "Template.h"
#include<iostream>
#include<memory>
using namespace std;

int main(int argc, char* argv[])
{
	unique_ptr<AbstructBase> p1(new ConcreteClass1());
	unique_ptr<AbstructBase> p2(new ConcreteClass2());
	p1->TemplateMethod();
	p2->TemplateMethod();
	return 0;
}

