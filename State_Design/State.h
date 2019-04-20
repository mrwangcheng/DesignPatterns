#pragma once
class ContextEx; //Ç°ÖÃÉùÃ÷
class State
{
public:
	State();
	virtual ~State();
	virtual void OperationInterface(ContextEx*) = 0;
	virtual void OperationChangeState(ContextEx*) = 0;
protected:
	bool ChangeState(ContextEx* con, State* st);
};
class ConcreteStateA :public State
{
public:
	ConcreteStateA();
	virtual ~ConcreteStateA();
	virtual void OperationInterface(ContextEx*);
	virtual void OperationChangeState(ContextEx*);

};
class ConcreteStateB :public State
{
public:
	ConcreteStateB();
	virtual ~ConcreteStateB();
	virtual void OperationInterface(ContextEx*);
	virtual void OperationChangeState(ContextEx*);
};
