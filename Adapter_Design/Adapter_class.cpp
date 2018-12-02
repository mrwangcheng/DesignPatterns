#include "stdafx.h"
#include "Adapter_class.h"
#include <iostream>
namespace Adapter_Class
{
	Target::Target()
	{
	}
	Target::~Target()
	{
	}
	void Target::Request()
	{
		std::cout << "Target::Request" << std::endl;
	}
	Adaptee::Adaptee()
	{
	}
	Adaptee::~Adaptee()
	{
	}
	void Adaptee::SpecificRequest()
	{
		std::cout << "Adaptee::SpecificRequest" << std::endl;
	}
	Adapter::Adapter()
	{
	}
	Adapter::~Adapter()
	{
	}
	void Adapter::Request()
	{
		this->SpecificRequest();
	}
}