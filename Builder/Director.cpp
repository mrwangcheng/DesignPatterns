#include "stdafx.h"
#include "Director.h"
#include "BuilderEx.h"
Director::Director(BuilderEx* bld)
{
	_bld = bld;
}
Director::~Director()
{
}
void Director::Construct()
{
	_bld->BuildPartA("user-defined");
	_bld->BuildPartB("user-defined");
	_bld->BuildPartC("user-defined");
}