// Compsonment_Design.cpp : 定义控制台应用程序的入口点。
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