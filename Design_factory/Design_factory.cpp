// Design_factory.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"

#include "Factory.h"
#include "Product.h"
#include <iostream>
using namespace std;

int main(int argc, char* argv[])
{
	Factory* fac = new ConcreteFactory();
	Product* p = fac->CreateProduct(1);
	return 0;
}

