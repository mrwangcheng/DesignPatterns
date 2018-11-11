#include "stdafx.h"
#include "Product.h"
#include <iostream>
using namespace std;
Product::Product()
{
}
Product::~Product()
{
}
ConcreteProduct::ConcreteProduct()
{
	cout << "ConcreteProduct...." << endl;
}
ConcreteProduct::~ConcreteProduct()
{}

ConcreteProductEx::ConcreteProductEx()
{
		cout << "ConcreteProductEx...." << endl;
}
ConcreteProductEx::~ConcreteProductEx()
{
}
