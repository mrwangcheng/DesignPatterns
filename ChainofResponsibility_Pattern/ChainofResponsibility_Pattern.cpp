// ChainofResponsibility_Pattern.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "Handle.h"
#include <iostream>
using namespace std;
int main(int argc, char* argv[])
{
	Handle* h1 = new ConcreteHandleA();
	Handle* h2 = new ConcreteHandleB();
	h1->SetSuccessor(h2);
	h1->HandleRequest();
	return 0;
}

