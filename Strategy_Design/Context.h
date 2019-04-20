#pragma once
class Strategy;
class Context
{
public:
	Context(Strategy* stg);
	~Context();
	void DoAction();
protected:
private:
	Strategy* _stg;
};
