#include "stdafx.h"
#include "BuilderEx.h"
#include <iostream>
using namespace std;
BuilderEx::BuilderEx()
{
}


BuilderEx::~BuilderEx()
{
}
ConcreteBuilder::ConcreteBuilder()
{
}
ConcreteBuilder::~ConcreteBuilder()
{
}
void ConcreteBuilder::BuildPartA(const string& buildPara)
{
	cout << "Step1:Build PartA..." << buildPara << endl;
}
void ConcreteBuilder::BuildPartB(const string& buildPara)
{
	cout << "Step1:Build PartB..." << buildPara << endl;
}
void ConcreteBuilder::BuildPartC(const string& buildPara)
{
	cout << "Step1:Build PartC..." << buildPara << endl;
}
BProduct* ConcreteBuilder::GetProduct()
{
	return new BProduct();
}

BProduct::BProduct()
{
}
BProduct::~BProduct()
{

}
