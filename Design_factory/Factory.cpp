#include "stdafx.h"
#include "Factory.h"
#include "Product.h"
#include <iostream>
using namespace std;


Factory::Factory()
{
}


Factory::~Factory()
{
}


ConcreteFactory::ConcreteFactory()
{
	cout << "ConcreteFactory....." << endl;
}
ConcreteFactory::~ConcreteFactory()
{
}
Product* ConcreteFactory::CreateProduct(int type)
{	
	switch (type)
	{
	case 0:
		return new ConcreteProduct();
	case 1:
		return new ConcreteProductEx();
	}
	return NULL;
}
