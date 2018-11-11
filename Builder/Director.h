#pragma once
class BuilderEx;
class Director
{
public:
	Director(BuilderEx* bld);
	~Director();
	void Construct();
protected:
private:
	BuilderEx* _bld;
};
