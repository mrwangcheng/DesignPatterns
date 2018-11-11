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
	_bld->BuildPartA("PartA");
	_bld->BuildPartB("PartB");
	_bld->BuildPartC("PartC");
	_bld->SetName("ProductA");
}