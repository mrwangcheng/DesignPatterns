// Design_Observe.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include <vector>
using namespace std;
#define ITERATOR vector<Observe*>::iterator
class Observe;
class Subject {
public:
	Subject(int num);
	virtual ~Subject();
public:
	virtual void Attatch(Observe *pObserve)=0;
	virtual void Detech(Observe *pObserve=NULL)=0;
	virtual void Notify()=0;
	virtual void SetNum(int num) = 0;
protected:
	int m_number;

};
Subject::Subject(int num):m_number(num)
{
}
Subject::~Subject()
{
}
class Observe {
public:
	Observe();
	virtual ~Observe();
public:
	virtual void Change()=0;

};
Observe::Observe()
{
}
Observe::~Observe()
{

}
class ConObserve :public Observe {
public:
	ConObserve();
	~ConObserve();
public:
	virtual void Change();



};
ConObserve::ConObserve()
{
}
ConObserve::~ConObserve()
{
	cout << "ConObserve detch" << endl;
}
void  ConObserve::Change()
{
	cout << "ConObserve has changed\n" << endl;

}
class ConObserveA :public Observe {
public:
	ConObserveA();
	~ConObserveA();
public:
	virtual void Change();



};
ConObserveA::ConObserveA()
{
}
ConObserveA::~ConObserveA()
{
	cout << "ConObserveA detch" << endl;
}
void  ConObserveA::Change()
{
	cout << "ConObserveA has changed\n" << endl;

}
class ConSubjectA:public Subject{
public:
	ConSubjectA(int num);
	~ConSubjectA();
public:
	 virtual void Attatch(Observe *pObserve);
     virtual void Detech(Observe *pObserve = NULL) ;
	 virtual void Notify() ;
	 virtual void SetNum(int num);
private:
	vector<Observe*> m_vObserve;

};
ConSubjectA::ConSubjectA(int num):Subject(num)
{
}
ConSubjectA::~ConSubjectA()
{

}
void ConSubjectA::Attatch(Observe *pObserve)
{
	m_vObserve.push_back(pObserve);
}
void ConSubjectA::Detech(Observe *pObserve/* = NULL*/)
{
	ITERATOR it = m_vObserve.begin();
	if (pObserve)
	{
		for (it; it != m_vObserve.end(); ++it)
		{
			if (*it == pObserve)
			{
				m_vObserve.erase(it);
				return;
			}
		}
	}
	else {
		vector<Observe*>().swap(m_vObserve);
	}
	/*for (it; it != m_vObserve.end(); ++it)
	{
		m_vObserve.erase(it);

	}*/
}
void ConSubjectA::Notify()
{
	vector<Observe*>::iterator it = m_vObserve.begin();
	for (it; it != m_vObserve.end(); ++it)
	{
		(*it)->Change();
	}
}
void ConSubjectA::SetNum(int num)
{

	m_number = num;
}
class ConSubjectB :public Subject {
public:
	ConSubjectB(int num);
	~ConSubjectB();
public:
	virtual void Attatch(Observe *pObserve);
	virtual void Detech(Observe *pObserve = NULL);
	virtual void Notify();
	virtual void SetNum(int num);
private:
	vector<Observe*> m_vObserve;

};
ConSubjectB::ConSubjectB(int num):Subject(num)
{
}
ConSubjectB::~ConSubjectB()
{
	Detech();
}
void ConSubjectB::Attatch(Observe *pObserve)
{
	m_vObserve.push_back(pObserve);
}
void ConSubjectB::Detech(Observe *pObserve /*= NULL*/)
{
	ITERATOR it = m_vObserve.begin();
	if (!pObserve)
	{	
		for (it; it != m_vObserve.end(); ++it)
		{
			if (*it == pObserve)
			{
				m_vObserve.erase(it);
				return;
			}
		}
	}
	else {
	   vector<Observe*>().swap(m_vObserve);
	}
	/*for (it; it != m_vObserve.end(); ++it)
	{
		m_vObserve.erase(it);
		
	}*/


}
void ConSubjectB::Notify()
{
	ITERATOR it= m_vObserve.begin();
	for (it; it != m_vObserve.end(); ++it)
	{
		(*it)->Change();
	}
}
void ConSubjectB::SetNum(int num)
{

	m_number = num;
}
int main()
{	
	Subject *pSubject = new ConSubjectA(1);
	Observe *pObserve = new ConObserve();
	Observe *pObservea = new ConObserveA();
	pSubject->Attatch(pObserve);
	pSubject->Attatch(pObservea);
	pSubject->SetNum(2);
	pSubject->Notify();
	pSubject->Detech(pObservea);
	delete pSubject;
	delete pObserve;
	delete pObservea;
    return 0;
}

