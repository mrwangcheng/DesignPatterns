// Mediator_Pattern.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"

#include "Mediator.h"
#include "Colleage.h"
#include<memory>
#include<list>
#include <iostream>
using namespace std;

void fun(int* par)
{
	shared_ptr<int> p(par);
	bool bp = p.unique();
}
int i = 0;
class Test {
public:
	Test() {}
	~Test() { cout << i << endl; i++; }
};
int main(int argc, char* argv[])
{
	ConcreteMediator *m= new ConcreteMediator();
	ConcreteColleageA* c1 = new ConcreteColleageA(m);
	ConcreteColleageB* c2 = new ConcreteColleageB(m);
	m->IntroColleage(c1, c2);
	c1->SetState("old");
	c2->SetState("old");
	c1->Aciton();
	c2->Aciton();
	cout << endl;
	c1->SetState("new");
	c1->Aciton();
	c2->Aciton();
	cout << endl;
	c2->SetState("old");
	c2->Aciton();
	c1->Aciton();
	delete m;
	delete c1;
	delete c2;
	return 0;

}
