// Flyweight_Design.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include "Flyweight.h"
#include "FlyweightFactory.h"
#include <iostream>
#include <memory>
using namespace std;
int main(int argc, char* argv[])
{
	unique_ptr<FlyweightFactory> fc(new FlyweightFactory());
	unique_ptr<Flyweight> fw1(fc->GetFlyweight("hello"));
	unique_ptr<Flyweight> fw2(fc->GetFlyweight("world!"));
	unique_ptr<Flyweight> fw3 (fc->GetFlyweight("hello"));
	fw1.release();
	return 0;
}
