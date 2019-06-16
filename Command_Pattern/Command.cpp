#include "stdafx.h"
#include "Command.h"
#include "Command.h"
#include <iostream>

using namespace std;

Command::Command()
{}

Command::~Command()
{}

ConcreteCommand::ConcreteCommand(shared_ptr<Receiver> pReceiver)
{
	this->_recv = pReceiver;
}

ConcreteCommand::~ConcreteCommand()
{}

void ConcreteCommand::Execute()
{
	this->_recv->Action();
}

Receiver::Receiver()
{}

Receiver::~Receiver()
{}

void Receiver::Action()
{
	cout << "Receiver::Action" << endl;
}

Invoker::Invoker(shared_ptr<Command> pCommand)
{
	this->_cmd = pCommand;
}

Invoker::~Invoker()
{}

void Invoker::Invoke()
{
	this->_cmd->Execute();
}