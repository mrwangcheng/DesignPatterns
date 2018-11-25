// Bridge_Design.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "Abstraction.h"
#include "AbstractionImp.h"
#include <iostream>
using namespace std;
int main(int argc, char* argv[])
{
	AbstractionImp* imp = new ConcreteAbstractionImpA();
	Abstraction* Action = new ConcreteAbstraction(imp);
	Action->Operation();
	return 0;
}

