#include "stdafx.h"
#include "Template.h"
#include <iostream>
using namespace std;

AbstructBase::AbstructBase()
{
}
AbstructBase::~AbstructBase()
{
}
void AbstructBase::TemplateMethod()
{
	PrimitiveOperation1();
	PrimitiveOperation2();
}
ConcreteClass1::ConcreteClass1()
{
}
ConcreteClass1::~ConcreteClass1()
{
}
void ConcreteClass1::PrimitiveOperation1()
{
	cout << "ConcreteClass1 ...PrimitiveOperation1 " << endl;
}
void ConcreteClass1::PrimitiveOperation2()
{
	cout << "ConcreteClass1 ...PrimitiveOperation2 " << endl;
}
ConcreteClass2::ConcreteClass2()
{
}
ConcreteClass2::~ConcreteClass2()
{
}
void ConcreteClass2::PrimitiveOperation1()
{
	cout << "ConcreteClass2 ...PrimitiveOperation1 " << endl;
}
void ConcreteClass2::PrimitiveOperation2()
{
	cout << "ConcreteClass2 ...PrimitiveOperation2 " << endl;
}