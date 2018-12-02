#pragma once
#include <memory>
class Target
{
public:
	Target();
	virtual ~Target();
	virtual void Request();

};
class Adaptee
{
public:
	Adaptee();
	~Adaptee();
	void SpecificRequest();
};
class Adapter :public Target
{
public:
	Adapter(shared_ptr<Adaptee> ade);
	~Adapter();
	void Request();
private:
	shared_ptr<Adaptee> _ade;
};

