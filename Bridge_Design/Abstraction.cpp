#include "stdafx.h"
#include "Abstraction.h"
#include "AbstractionImp.h"
#include <iostream>
using namespace std;
Abstraction::Abstraction()
{
}
Abstraction::~Abstraction()
{
}
ConcreteAbstraction::ConcreteAbstraction(AbstractionImp* imp)
{
	_imp = imp;
}
ConcreteAbstraction::~ConcreteAbstraction()
{
}
void ConcreteAbstraction::Operation()
{
	_imp->Operation();
}