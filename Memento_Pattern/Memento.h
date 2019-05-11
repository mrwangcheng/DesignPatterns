#pragma once
#include <iostream>
#include <string>
#include<memory>
using namespace std;
class Memento;
class Originator
{
public:
	typedef string State;
	Originator();
	Originator(const State& sdt);
	~Originator();
	Memento* CreateMemento();
	void SetMemento(Memento* men);
	void RestoreToMemento(Memento* mt);
	State GetState();
	void SetState(const State& sdt);
	void PrintState();
protected:
private:
	State _sdt;
	Memento* _mt;
};
class Memento
{
public:
	~Memento() {}
private:
	//������ؼ��ĵط�����OriginatorΪfriend�࣬���Է����ڲ���Ϣ�����������಻�ܷ���
	friend class Originator;
	typedef string State;
	Memento();
	Memento(const State& sdt);
	
	void SetState(const State& sdt);
	State GetState();
private:
	State _sdt;
};