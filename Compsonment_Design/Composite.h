#pragma once
#include "CompositeComponent.h"
#include <vector>
using namespace std;
class Composite :public CompositeComponent
{
public:
	Composite();
	~Composite();
public:
	void Operation();
	void Add(CompositeComponent* com);
	void Remove(CompositeComponent* com);
	CompositeComponent* GetChild(int index);
protected:
private:
	vector<CompositeComponent*> comVec;
};
