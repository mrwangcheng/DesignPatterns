// Builder.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include "BuilderEx.h"
#include "Director.h"
#include <iostream>
using namespace std;
int main(int argc, char* argv[])
{	
	BuilderEx *pBuild= new ConcreteBuilder();
	Director* d = new Director(pBuild);
	d->Construct();
	cout << pBuild->GetProduct() << endl;
	return 0;
}