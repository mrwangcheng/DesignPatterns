#pragma once

#include <iostream>
#include<memory>
using namespace std;
class Command
{
public:
	virtual ~Command();
	virtual void Execute() = 0;
protected:
	Command();
private:
};

class Receiver;

class ConcreteCommand : public Command
{
public:
	ConcreteCommand(shared_ptr<Receiver> pReceiver);
	~ConcreteCommand();
	virtual void Execute();
protected:
private:
	shared_ptr<Receiver> _recv;
};

class Invoker
{
public:
	Invoker(shared_ptr<Command> pCommand);
	~Invoker();
	void Invoke();
protected:
private:
	shared_ptr<Command> _cmd;
};

class Receiver
{
public:
	Receiver();
	~Receiver();
	void Action();
protected:
private:
};

