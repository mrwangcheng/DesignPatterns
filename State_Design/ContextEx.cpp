#include "stdafx.h"
#include "ContextEx.h"
#include "State.h"
ContextEx::ContextEx()
{
}
ContextEx::ContextEx(State* state)
{
	this->_state = state;
}
ContextEx::~ContextEx()
{
	delete _state;
}
void ContextEx::OprationInterface()
{
	_state->OperationInterface(this);
}
bool ContextEx::ChangeState(State* state)
{
	this->_state = state;
	return true;
}
void ContextEx::OperationChangState()
{
	_state->OperationChangeState(this);
}
