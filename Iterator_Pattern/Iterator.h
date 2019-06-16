#pragma once
#include<iostream>
#include<memory>
using namespace std;
class Aggregate;
typedef int Object;
class Iterator
{
public:
	virtual ~Iterator();
	virtual void First() = 0;
	virtual void Next() = 0;
	virtual bool IsDone() = 0;
	virtual Object CurrentItem() = 0;
protected:
	Iterator();
private:
};
class ConcreteIterator :public Iterator
{
public:
	ConcreteIterator(shared_ptr<Aggregate> ag, int idx = 0);
	~ConcreteIterator();
	void First();
	void Next();
	bool IsDone();
	Object CurrentItem();
protected:
private:
	shared_ptr<Aggregate> _ag;
	int _idx;
};

