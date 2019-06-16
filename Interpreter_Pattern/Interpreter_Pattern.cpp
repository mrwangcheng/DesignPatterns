// Interpreter_Pattern.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include "ContextEx1.h"
#include "Interpret.h"
#include <iostream>
using namespace std;
int main(int argc, char* argv[])
{
	ContextEx1* c = new ContextEx1();
	AbstractExpression* te = new TerminalExpression("hello");
	AbstractExpression* nte = new NonterminalExpression(te, 2);
	nte->Interpret(*c);
	return 0;
}
