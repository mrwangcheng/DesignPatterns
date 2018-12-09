// Compsonment_Design.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"

#include "CompositeComponent.h"
#include "Composite.h"
#include "Leaf.h"
#include <iostream>
#include <memory>
using namespace std;
int main(int argc, char* argv[])
{
	unique_ptr<Leaf> l(new Leaf());
	l->Operation();
	unique_ptr<Composite> com(new Composite());
	com->Add(l.get());
	com->Operation();
	unique_ptr<CompositeComponent> ll(com->GetChild(0));
	ll->Operation();
	return 0;
}