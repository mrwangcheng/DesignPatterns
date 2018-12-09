#pragma once
#include "Flyweight.h"
#include <vector>
using namespace std;
class FlyweightFactory
{
public:
	FlyweightFactory();
	~FlyweightFactory();
	Flyweight* GetFlyweight(const string& key);
protected:
private:
	vector<Flyweight*> _fly;
};