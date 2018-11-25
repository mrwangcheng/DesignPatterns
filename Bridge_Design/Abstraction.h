#pragma once
class AbstractionImp;
class Abstraction
{
public:
	virtual ~Abstraction();
	virtual void Operation() = 0;
protected:
	Abstraction();
};
class ConcreteAbstraction :public Abstraction
{
public:
	ConcreteAbstraction(AbstractionImp* imp);
	~ConcreteAbstraction();
	void Operation();
private:
	AbstractionImp* _imp;
};
