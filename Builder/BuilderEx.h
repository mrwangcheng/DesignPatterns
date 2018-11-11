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
	virtual void SetName(const string &name) = 0;
	virtual string GetName() = 0;
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
	virtual void SetName(const string &name);
	virtual string GetName();
	virtual BProduct* GetProduct();
protected:
	BProduct *m_Product;
private:
};
class BProduct
{
public:
	BProduct();
	virtual~BProduct();
	virtual string GetName()=0;
	virtual void SetName(string name) = 0;
protected:
	string m_name;
};
class ProductA :public BProduct
{
public:
	ProductA();
	virtual~ProductA();
public:
	virtual string GetName();
	virtual void SetName(string name);

};