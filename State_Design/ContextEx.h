#pragma once
class State;
class ContextEx
{
public:
	ContextEx();
	ContextEx(State* state);
	~ContextEx();
	void OprationInterface();
	void OperationChangState();
protected:
private:
	friend class State; //表明在State类中可以访问ContextEx类的private字段
	bool ChangeState(State* state);
private:
	State* _state;
};
