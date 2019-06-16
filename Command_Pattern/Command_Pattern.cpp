// Command_Pattern.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include "Command.h"
#include <iostream>
#include<memory>
using namespace std;
int main()
{
	shared_ptr<Receiver> pRev (new Receiver());
	shared_ptr<Command> pCmd (new ConcreteCommand(pRev));
	unique_ptr<Invoker> pInv(new Invoker(pCmd));
	pInv->Invoke();
}

