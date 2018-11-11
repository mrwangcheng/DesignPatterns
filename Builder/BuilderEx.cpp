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
ConcreteBuilder::ConcreteBuilder():m_Product(new ProductA)
{
}
ConcreteBuilder::~ConcreteBuilder()
{
}
void ConcreteBuilder::BuildPartA(const string& buildPara)
{
	cout << "Step1:Build " << buildPara << endl;
}
void ConcreteBuilder::BuildPartB(const string& buildPara)
{
	cout << "Step1:Build " << buildPara << endl;
}
void ConcreteBuilder::BuildPartC(const string& buildPara)
{
	cout << "Step1:Build " << buildPara << endl;
}
void ConcreteBuilder::SetName(const string &name)
{
	m_Product->SetName(name);
}
string ConcreteBuilder::GetName()
{
	return m_Product->GetName();

}
BProduct* ConcreteBuilder::GetProduct()
{
	return m_Product;
}

BProduct::BProduct()
{
}
BProduct::~BProduct()
{

}
ProductA::ProductA()
{
}
ProductA::~ProductA()
{

}
void ProductA::SetName(string name)
{

	m_name = name;
}
string ProductA::GetName()
{

	return m_name;
}
