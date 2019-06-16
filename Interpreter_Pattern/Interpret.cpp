#include "stdafx.h"
#include "Interpret.h"


#include "Interpret.h"
#include <iostream>
using namespace std;
AbstractExpression::AbstractExpression()
{
}
AbstractExpression::~AbstractExpression()
{
}
void AbstractExpression::Interpret(const ContextEx1& c)
{
}
TerminalExpression::TerminalExpression(const string& statement)
{
	this->_statement = statement;
}
TerminalExpression::~TerminalExpression()
{
}
void TerminalExpression::Interpret(const ContextEx1& c)
{
	cout << this->_statement << " TerminalExpression" << endl;
}
NonterminalExpression::NonterminalExpression(AbstractExpression* expression, int times)
{
	this->_expression = expression;
	this->_times = times;
}
NonterminalExpression::~NonterminalExpression()
{
}
void NonterminalExpression::Interpret(const ContextEx1& c)
{
	for (int i = 0; i < _times; i++)
	{
		this->_expression->Interpret(c);
	}
}