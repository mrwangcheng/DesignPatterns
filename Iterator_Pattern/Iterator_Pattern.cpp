// Iterator_Pattern.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"

#include "Iterator.h"
#include "Aggregate.h"
#include <iostream>
using namespace std;
int main(int argc, char* argv[])
{
	shared_ptr<Aggregate> ag = make_shared<ConcreteAggregate>();
	unique_ptr<Iterator> it (new ConcreteIterator(ag));
	for (; !(it->IsDone()); it->Next())
	{
		cout << it->CurrentItem() << endl;
	}
	return 0;
}
