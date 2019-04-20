#pragma once
class AbstructBase 
{
public:
	virtual ~AbstructBase();
	AbstructBase();
public :
	void TemplateMethod();
protected:
	virtual void PrimitiveOperation1()=0;
	virtual void PrimitiveOperation2() = 0;
};
 class ConcreteClass1 final :public AbstructBase
{
public:
	ConcreteClass1();
	~ConcreteClass1();
protected:
	virtual void PrimitiveOperation1() override;
	virtual void PrimitiveOperation2() override;

};
class ConcreteClass2 final :public AbstructBase
{
public:
	ConcreteClass2();
~	ConcreteClass2();
protected:
	virtual void PrimitiveOperation1() override;
	virtual void PrimitiveOperation2() override;

};
