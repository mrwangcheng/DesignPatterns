#pragma once
#include <string>
using namespace std;
class BProduct;
class BuilderEx
{
public:
	virtual ~BuilderEx();
	virtual void BuildPartA(const string& buildPara) = 0;
	virtual void BuildPartB(const string& buildPara) = 0;
	virtual void BuildPartC(const string& buildPara) = 0;
	virtual BProduct* GetProduct() = 0;
protected:
	BuilderEx();
private:
};
class ConcreteBuilder :public BuilderEx
{
public:
	ConcreteBuilder();
	~ConcreteBuilder();
	void BuildPartA(const string& buildPara);
	void BuildPartB(const string& buildPara);
	void BuildPartC(const string& buildPara);
	BProduct* GetProduct();
protected:
private:
};
class BProduct
{
public:
	BProduct();
	~BProduct();
public:

};