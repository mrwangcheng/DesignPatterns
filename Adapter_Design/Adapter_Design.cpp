// Adapter_Design.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"

#include "Adapter_obj.h"
#include "Adapter_class.h"
#include <iostream>

using namespace std;

int main(int argc, char* argv[])
{
	shared_ptr<Adaptee> ade;
	ade.reset(new Adaptee());
	shared_ptr<Target> adt;
	adt.reset(new Adapter(ade));
	adt->Request();
	shared_ptr<Adapter_Class::Adapter> adobj;
	adobj.reset( new Adapter_Class::Adapter());
	adobj->Request();
	return 0;
}
