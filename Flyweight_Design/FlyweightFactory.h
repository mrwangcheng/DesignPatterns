#pragma once
#include "Flyweight.h"
#include <vector>
using namespace std;
class FlyweightFactory
{
protected:
	FlyweightFactory();
public:
	~FlyweightFactory();
	 Flyweight* GetFlyweight(const string& key);
	 static FlyweightFactory *GetInstance();
private:
	 vector<Flyweight*> _fly;
	 static FlyweightFactory *m_Instance;
};