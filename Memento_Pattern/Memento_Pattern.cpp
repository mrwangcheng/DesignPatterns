// Memento_Pattern.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "Memento.h"


int main(int argc, char* argv[])
{
	unique_ptr<Originator> o(new Originator());
	o->SetState("old"); //备忘前状态
	o->PrintState();
	Memento* m=o->CreateMemento(); //将状态备忘
	o->SetState("new"); //修改状态
	o->PrintState();
	o->RestoreToMemento(m); //恢复修改前状态
	o->PrintState();
	delete m;
	return 0;
}
