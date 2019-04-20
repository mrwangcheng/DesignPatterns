#include "stdafx.h"
#include "State.h"
#include "ContextEx.h"
#include <iostream>
using namespace std;
State::State()
{
}
State::~State()
{
}
void State::OperationInterface(ContextEx* con)
{
	cout << "State::.." << endl;
}
bool State::ChangeState(ContextEx* con, State* st)
{
	con->ChangeState(st);
	return true;
}
void State::OperationChangeState(ContextEx* con)
{
}
ConcreteStateA::ConcreteStateA()
{
}
ConcreteStateA::~ConcreteStateA()
{
}
void ConcreteStateA::OperationInterface(ContextEx* con)
{
	cout << "ConcreteStateA::OperationInterface......" << endl;
}
void ConcreteStateA::OperationChangeState(ContextEx* con)
{
	OperationInterface(con);
	this->ChangeState(con, new ConcreteStateB());
}
ConcreteStateB::ConcreteStateB()
{
}
ConcreteStateB::~ConcreteStateB()
{
}
void ConcreteStateB::OperationInterface(ContextEx* con)
{
	cout << "ConcreteStateB::OperationInterface......" << endl;
}
void ConcreteStateB::OperationChangeState(ContextEx* con)
{
	OperationInterface(con);
	this->ChangeState(con, new ConcreteStateA());
}