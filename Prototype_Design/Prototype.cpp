#include "stdafx.h"
#include "Prototype.h"
#include <iostream>
using namespace std;
Prototype::Prototype()
{
}
Prototype::~Prototype()
{
}
Prototype* Prototype::Clone() const
{
	return 0;
}
ConcretePrototype::ConcretePrototype()
{
}
ConcretePrototype::~ConcretePrototype()
{
}
ConcretePrototype::ConcretePrototype(const ConcretePrototype& cp)
{
	cout << "ConcretePrototype copy ..." << endl;
}
Prototype* ConcretePrototype::Clone() const
{
	return new ConcretePrototype(*this);
}
ConcretePrototype1::ConcretePrototype1()
{
}
ConcretePrototype1::~ConcretePrototype1()
{
}
ConcretePrototype1::ConcretePrototype1(const ConcretePrototype1& cp)
{
	cout << "ConcretePrototype copy ..." << endl;
}
Prototype* ConcretePrototype1::Clone() const
{
	return new ConcretePrototype1(*this);
}
