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
	friend class State; //������State���п��Է���ContextEx���private�ֶ�
	bool ChangeState(State* state);
private:
	State* _state;
};
