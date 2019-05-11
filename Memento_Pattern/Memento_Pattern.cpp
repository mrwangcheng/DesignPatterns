// Memento_Pattern.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include "Memento.h"


int main(int argc, char* argv[])
{
	unique_ptr<Originator> o(new Originator());
	o->SetState("old"); //����ǰ״̬
	o->PrintState();
	Memento* m=o->CreateMemento(); //��״̬����
	o->SetState("new"); //�޸�״̬
	o->PrintState();
	o->RestoreToMemento(m); //�ָ��޸�ǰ״̬
	o->PrintState();
	delete m;
	return 0;
}
