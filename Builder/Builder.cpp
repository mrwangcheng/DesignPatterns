// Builder.cpp : 定义控制台应用程序的入口点。
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
	BProduct*pProduct= pBuild->GetProduct() ;
	cout << pBuild->GetName() << endl;
	delete pBuild;
	delete d;
	delete pProduct;
	return 0;
}