// Flyweight_Design.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "Flyweight.h"
#include "FlyweightFactory.h"
#include <iostream>
#include <memory>
using namespace std;
int main(int argc, char* argv[])
{
	unique_ptr<FlyweightFactory> fc(FlyweightFactory::GetInstance());
	unique_ptr<Flyweight> fw1(fc->GetFlyweight("hello"));
	unique_ptr<Flyweight> fw2(fc->GetFlyweight("world!"));
	unique_ptr<Flyweight> fw3 (fc->GetFlyweight("hello"));
	fw3->Operation("ext");
	fw1.release();
	return 0;
}
