// State_Design.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "ContextEx.h"
#include "State.h"
#include <iostream>
using namespace std;
int main(int argc, char* argv[])
{
	State* st = new ConcreteStateA();
	ContextEx* con = new ContextEx(st);
	con->OprationInterface();
	con->OprationInterface();
	con->OprationInterface();
	if (con != NULL)
		delete con;
	if (st != NULL)
		st = NULL;
	return 0;
}
