#include "stdafx.h"
#include "Composite.h"


#define NULL 0 //define NULL POINTOR
Composite::Composite()
{
	//vector<Component*>::iterator itend = comVec.begin();
}
Composite::~Composite()
{
}
void Composite::Operation()
{
	vector<CompositeComponent*>::iterator comIter = comVec.begin();
	for (; comIter != comVec.end(); comIter++)
	{
		(*comIter)->Operation();
	}
}
void Composite::Add(CompositeComponent* com)
{
	comVec.push_back(com);
}
void Composite::Remove(CompositeComponent* com)
{	
	if (!comVec.size())
	{
		return;
	}
	vector<CompositeComponent*>::iterator it;
	for (it = comVec.begin(); it != comVec.end(); ++it)
	{
		if (*it == com)
		{
			comVec.erase(it);
		}
	}

	
}
CompositeComponent* Composite::GetChild(int index)
{
	int size = comVec.size();
	if (size < index)
	{
		return NULL;
	}
	return comVec[index];
}