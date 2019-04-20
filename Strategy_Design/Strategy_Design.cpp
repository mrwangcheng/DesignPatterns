// Strategy_Design.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include "Context.h"
#include "Strategy.h"
#include <iostream>
using namespace std;
int main(int argc, char* argv[])
{
	Strategy* ps=NULL;
	ps = new ConcreteStrategyA();
	Context* pc = new Context(ps);
	pc->DoAction();
	if (NULL != pc)
		delete pc;
	ps = NULL;
	return 0;
}
