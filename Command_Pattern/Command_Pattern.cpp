// Command_Pattern.cpp : 定义控制台应用程序的入口点。
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

