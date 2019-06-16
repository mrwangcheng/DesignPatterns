#pragma once
#include "ContextEx1.h"
#include <string>
using namespace std;
class AbstractExpression
{
public:
	virtual ~AbstractExpression();
	virtual void Interpret(const ContextEx1& c);
protected:
	AbstractExpression();
private:
};
class TerminalExpression :public AbstractExpression
{
public:
	TerminalExpression(const string& statement);
	~TerminalExpression();
	void Interpret(const ContextEx1& c);
protected:
private:
	string _statement;
};
class NonterminalExpression :public AbstractExpression
{
public:
	NonterminalExpression(AbstractExpression* expression, int times);
	~NonterminalExpression();
	void Interpret(const ContextEx1& c);
protected:
private:
	AbstractExpression* _expression;
	int _times;
};
