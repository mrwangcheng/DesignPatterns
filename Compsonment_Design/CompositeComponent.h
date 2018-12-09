#pragma once
class CompositeComponent
{
public:
	CompositeComponent();
	virtual ~CompositeComponent();
public:
	virtual void Operation() = 0;
	virtual void Add(const CompositeComponent&);
	virtual void Remove(const CompositeComponent&);
	virtual CompositeComponent* GetChild(int);
protected:
private:
};
