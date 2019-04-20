// Proxy_Design.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"

#include "Proxy.h"
#include <iostream>
#include <memory>
using namespace std;

int main(int argc, char* argv[])
{
	Subject* sub=new ConcreteSubject();
	Proxy* p = new Proxy(sub);
	p->Request();
	delete p;
	p = NULL;
	return 0;
}

