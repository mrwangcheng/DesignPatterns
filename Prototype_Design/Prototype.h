#pragma once
class Prototype
{
public:
	virtual ~Prototype();
	virtual Prototype* Clone() const = 0;
protected:
	Prototype();
private:
};
class ConcretePrototype :public Prototype
{
public:
	ConcretePrototype();
	ConcretePrototype(const ConcretePrototype& cp);
	~ConcretePrototype();
	Prototype* Clone() const;
};
class ConcretePrototype1 :public Prototype
{
public:
	ConcretePrototype1();
	ConcretePrototype1(const ConcretePrototype1& cp);
	~ConcretePrototype1();
	Prototype* Clone() const;

};