#pragma once
#include "CompositeComponent.h"
class Leaf :public CompositeComponent
{
public:
	Leaf();
	~Leaf();
	void Operation();
protected:
private:
};
